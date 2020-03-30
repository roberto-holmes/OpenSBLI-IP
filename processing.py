import plot
import settings
import csv

arguments = settings.getSimArgs()


class RunData:
    def __init__(self):
        self.args = []

        self.t = []
        self.Enstrophy = []
        self.KE = []
        self.KEDR = []

        self.wallTime = 0


# Open file determined to compare results to and return the data from it
def CollectBenchmarkData():
    t = []
    enstrophy = []
    KE = []
    KEDR = []
    with open(arguments.benchmarkFile) as f:
        data_list = list(csv.reader(f))
        for i in range(1, len(data_list)):
            t.append(float(data_list[i][10]))
            enstrophy.append(float(data_list[i][11]))
            KE.append(float(data_list[i][12]))
            KEDR.append(float(data_list[i][13]))
    dKE_dt = plot.DerKE(t, KE)
    return enstrophy, KEDR, dKE_dt


# Valid error types: Self, BenchEnst, BenchKEDR, BenchdKE_dt
def ProcessRunData(errorType="Self", makePlot=False, perfRun=False):
    time = []
    error = []
    order = []
    coreCount = []
    # wallTime = []
    runId = []
    grid = []

    currentRun = RunData()

    with open(arguments.dataLog, 'r') as f:
        data_list = list(csv.reader(f))

        # Initialise first run of data
        for i in range(10):
            currentRun.args.append(float(data_list[1][i]))

        # Iterate through all rows excluding headers
        for i in range(1, len(data_list)+1):
            rowSettings = []
            if i < len(data_list):
                for j in range(10):
                    rowSettings.append(float(data_list[i][j]))

            # print(f"Current = {currentRun.args}")
            # print(f"New = {rowSettings}")

            # Check if still reading data from the same run
            if currentRun.args == rowSettings and i != len(data_list):
                # print(f"raw time ={data_list[i][10]}")
                currentRun.t.append(float(data_list[i][-4]))
                currentRun.Enstrophy.append(float(data_list[i][-3]))
                currentRun.KE.append(float(data_list[i][-2]))
                currentRun.KEDR.append(float(data_list[i][-1]))
                # print(f"Stored time = {currentRun.t}")
            else:
                print("new run")

                # Open file with timing data
                with open(arguments.timingLog, 'r') as tf:
                    print(f"Opening timing file {arguments.timingLog}")
                    reader = csv.reader(tf)

                    # Iterate through rows
                    for k, row in enumerate(reader):
                        # Ignore headers
                        if k > 0:
                            # wallTime.append(float(row[-1]))

                            # Decide whether current run coincides with 
                            # row in the timing log
                            equal = True
                            for j in range(len(currentRun.args)):
                                if float(row[j]) != currentRun.args[j]:
                                    equal = False
                                    break

                            # If it is the same run then store its walltime
                            if equal:
                                print(f"Wall Time is {row[-1]}s")
                                currentRun.wallTime = float(row[-1])
                                grid.append(int(row[9]))
                                coreCount.append(int(row[-4]))
                                runId.append(int(row[0]))

                        # for j in range(len(row)):
                        #     print(row[j], end=",")
                        # print("\n")
                

                # Update list of wall times
                time.append(currentRun.wallTime)

                # If it was a run to measure performance then error is not needed
                if not perfRun:

                    # Obtain data from benchmark run
                    enstBench, KEDRBench, dKE_dtBench = CollectBenchmarkData()

                    # Calculate derivative of kinetic energy
                    dKE_dt = plot.DerKE(currentRun.t, currentRun.KE)

                    # Calculate the error for the given metric (errorType)
                    errorsum, errorList = plot.calc_error(
                        currentRun.t,
                        dKE_dt,
                        currentRun.KEDR,
                        currentRun.Enstrophy,
                        dKE_dtBench,
                        KEDRBench,
                        enstBench,
                        errorType)

                    # Plot error
                    if errorType == "Self" and makePlot:
                        plot.plot_error(currentRun.t, errorList,
                                        currentRun.KEDR, dKE_dt)

                    error.append(errorsum)
                order.append(int(currentRun.args[8]))
                print(f"Order = {currentRun.args[8]}")

                currentRun.args = rowSettings
                del currentRun.t[:]
                del currentRun.Enstrophy[:]
                del currentRun.KE[:]
                del currentRun.KEDR[:]

                # print(currentRun.t)
                # print(f"Iterator = {i}")
                # print(f"new time ={data_list[i][10]}")
                if i < len(data_list):
                    currentRun.t.append(float(data_list[i][-4]))
                    currentRun.Enstrophy.append(float(data_list[i][-3]))
                    currentRun.KE.append(float(data_list[i][-2]))
                    currentRun.KEDR.append(float(data_list[i][-1]))
    return time, error, order, coreCount, runId, grid


# time, error, order, coreCount, runId, grid = ProcessRunData(
#     makePlot=False, perfRun=False)
time, error, order, coreCount, runId, grid = ProcessRunData("BenchEnst")
# time, error, order, coreCount, runId, grid = ProcessRunData("BenchKEDR")
# time, error, order, coreCount, runId, grid = ProcessRunData("BenchdKE_dt")

# print(order)
# plot.plot_cost(time, error, order)
plot.plot_order(error, order, ylog=True, xlog=True)
# plot.plot_cores(coreCount, time, order)
