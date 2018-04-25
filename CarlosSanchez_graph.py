import numpy as np
import matplotlib.pyplot as plt

#Cargue de archivos en variables
datos=np.genfromtxt('advection.txt',delimiter=",")


#Obtengo las columnas de cada archivo para poder hacer la grafica
Uforw=datos[:,0]
x=datos[:,1]
t=datos[:,2]

tiempos=[]
l=len(t)
datox=[]

#Busco los t para los cuales voy a equiespaciar mis x y luego imprimirtos
for i in t:
	i=0
	tiempos.append(t[i])
	datox[i].append(x[i])
	i+=l/4


#Grafica de los avances de x con respecto al tiempo
plt.figure()
plt.title('Grafica de tiempo vs x')
plt.plot(tiempos,datox, label='Grafica')
plt.xlabel('Tiempo')
plt.ylabel('x')
plt.savefig('Grafica.png')
plt.legend()
