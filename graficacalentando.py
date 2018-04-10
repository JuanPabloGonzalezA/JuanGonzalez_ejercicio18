import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt('datos_calentando.txt')
x=np.linspace(0,3,1000);
y=np.exp(-1.0*x)
plt.plot(datos[:,0],datos[:,1],'o')
plt.plot(x,y)
plt.savefig('grafica1.png')
