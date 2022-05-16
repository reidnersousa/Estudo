import numpy as np
from random import randint

cubo = np.array([[7,2,4],[5,0,6],[8,3,1]])

d2=np.array([[9,1,0,0],[0,1,0,0],[0,1,0,0],[6,0,0,0]])

cars = np.array([])

print(type(cubo))
print(cubo);
print(cubo[1,1])

z=len(cubo)#devolver o tamanho do array no caso aqui em 3

print("z tamanho " , z)

for i in range (0,3):
  for j in range(0,3):
    print("cubo indice ",cubo[i,j],"[",i,"]","[",j,"]")
  


if cubo[0,0]>cubo[1,1]:
  print("tre")




""""
xs =[8,23,45]

for idx , x in enumerate(xs):
  print(idx ,x)

"""""


#print(cubo[0,0])
# cars =["Ford","volvo","BME"]
