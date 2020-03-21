# Store settings used in simulations
import numpy as np

def getSimArgs():
    return SimulationArguments()


class SimulationArguments:
    def __init__(self):
        self.coreCount = 4

        self.dt = 0.00125         # 0.005     0.0025
        self.niter = 20       # 4000      8000 for 63 sym
        self.saveFreq = 50      # 50

        self.Re = 800.          # 800.
        self.gama = 1.4         # 1.4
        self.Minf = 0.1         # 0.1
        self.Pr = 0.71          # 0.71

        self.order = 4          # 4
        self.grid = 33          # Odd number (17, 33, 63)

        self.CFL = 0.1

        self.timingLog = "TimingLog 33 Many Orders.csv"
        self.dataLog = "Data 33 Many Orders.csv"

    def iterate(self):
        # if self.order == 8:
        #     self.grid += 8
        #     self.order = 2
        # else:
        #     self.order += 2
        # if self.order == 8:
        #     self.coreCount += 1
        #     self.order = 2
        # else:
        #     self.order += 2
        self.order += 2


    def useCFL(self):
        endTime = 20            # Non-dimensionalised time when simulation ends
        numberOfPoints = 80     # Used for calculating save frequency

        self.dt = self.CFL * (np.pi/(self.grid-1)) / 2.1
        self.niter = int(endTime/self.dt)     #Define number of iterations based on running the simulation till t=20
        
        self.saveFreq = int(self.niter/numberOfPoints)