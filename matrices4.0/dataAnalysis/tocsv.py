import numpy as np
import pandas as pd

def main():
    path = "../outputs/"
    program = "matrixAPP.out"
    sizes = [100, 200, 400, 800, 1000, 1200, 2000, 4000]
    threads = [1, 2, 4, 8]
    data = np.zeros([30, 8])
    for thread in threads:
        readData(data, program, path, sizes, thread)
        df = pd.DataFrame(data=data, columns=sizes)
        df.to_csv(f"{path}results3-T{thread}.csv", index=False)

def readData(data, program, path, sizes, thread):
    for i, size in enumerate(sizes):
        f = open(f"{path}{program}-size{size}-T{thread}.txt")
        for j, l in enumerate(f):
            data[j][i] = float(l)

if __name__ == '__main__':
    main()
