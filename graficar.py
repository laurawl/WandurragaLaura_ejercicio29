import matplotlib.pylab as plt
import numpy as np
datos=np.loadtxt("parte1.dat")
plt.subplot(2,2,1)
plt.imshow(datos,aspect="auto")
plt.title("Nx=30, Ntc")
plt.xlabel("Posición")
plt.ylabel("Tiempo")
plt.colorbar()
x=np.linspace(0,450,10)
x1=np.linspace(-1,1,28)
plt.subplot(2,2,2)
for i in x:
	plt.plot(x1,datos[int(i),:])
plt.savefig("evolve_A.png")






