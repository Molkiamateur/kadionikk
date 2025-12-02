import matplotlib.pyplot as plt
import numpy as np

for data in ["data1", "data2"]:
  trace = np.load(data + ".npy")
  plt.plot(trace[0:500], label=data)

plt.legend()
plt.title("Power consumption trace")
plt.xlabel("Samples")
plt.ylabel("Consumption")
plt.show()