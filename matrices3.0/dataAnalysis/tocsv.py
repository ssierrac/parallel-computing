import numpy as np
import pandas as pd

def main():
    path = "../outputs/"
    program = "matrixAPP.out"
    sizes = [100, 200, 400, 800, 1000, 1200, 2000, 4000]
    data = np.zeros([30, 8])
    readData(data, program, path, sizes)
    df = pd.DataFrame(data=data, columns=sizes)
    
    df.to_csv(path+"results2.csv", index=False)

def readData(data, program, path, sizes):
    for i, size in enumerate(sizes):
        f = open(path+program+"-size"+str(size)+".txt")
        for j, l in enumerate(f):
            data[j][i] = float(l)

if __name__ == '__main__':
    main()
