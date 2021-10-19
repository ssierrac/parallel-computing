from funcE import rbf_network
import numpy as np


D = 5
N = 1500
X = np.array([np.random.rand(N) for d in range(D)]).T
print(X.shape)
beta = np.random.rand(N)
tetha = 10


rbf_network(X, beta, tetha)
