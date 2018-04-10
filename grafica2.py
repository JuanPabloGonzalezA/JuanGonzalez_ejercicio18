import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt('datos2.txt')
x=np.linspace(0,10,1000);
y=np.cos(x)
plt.plot(datos[:,0],datos[:,1],'o')
plt.plot(x,y)
plt.savefig('grafica2.png')
plt.close()
plt.plot(datos[:,1],datos[:,2])
plt.savefig('grafica3.png')
