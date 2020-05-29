#Compute the Matrix Mulyiplication between a mtrix A and B. don't use any library

#row = fila
#colum = columna

#Compute the Matrix Mulyiplication between a mtrix A and B. don't use any library

#row = fila
#colum = columna
#Una matriz esta compuesta por tes listas, llenar las matrices
matrix1 = [] #se declara la matrix que se va a rellenar
matrix2 = []
matrix3 = []

row1 = int(input("Input a number of the rows to MATRIX 1: \n")) # se le pide al usuario las filas de la matriz 1
colum1 = int(input("input the number of columns to MATRIX1:\n")) #se le pide las columnas de la matrix 1
row2 = int(input("Input a nomber od the rows to MATRIX 2: \n")) # se le pide al usuario las filas de la matriz 2
colum2 = int(input("input the number of columns to MATRIX2: \n")) #se le pide las fcolumnas de la matrix2
if colum1 != row2: # se debe combrobar si la columna de la matrix 1 y la fila de la matrix 2 es igual para que se pueda realizar
  print("Must have the same number of rows to MATRIX1 with columns of MATRIX2")
else:
  print("This MATRIX1:") #se empieza a rellenar la matrix 1
  for i in range(row1):                                                                                                                                                                                                matrix1.append([0]*colum1) # se muestra en forma de lista, para formar la matrix
  for r in range(row1):
    for c in range(colum1):
      matrix1[r][c] = int(input("Elemens %d,%d\n"%(r,c))) #se muestra la posicion de cada elemento
  print("This MATRIX2:") # se rellena la matrix 2
  for i in range(row2):
    matrix2.append([0]*colum2)
  for r in range(row1):
    for c in range(colum2):
      matrix2[r][c] = int(input("Elemens %d,%d:\n"%(r,c)))
  print ("Matrix1\n", matrix1)
  print ("Matrix2\n", matrix2)
  print("------MULTIPLICATION OF MATRIX 1 WITH MATRIX 2------")
  for k in range(row1): # se crea una variable para completar su columna utilizando las cotras
    matrix3.append([0]*colum2)
    for i in range(row2):
      matrix3[k][i] = 0
  for i in range(row1):
    for j in range(colum1):
      for k in range(colum2):
        matrix3[i][k] = matrix3[i][k] + (matrix1[i][j] * matrix2[j][i]) # se realiza la operacion
  print (matrix3)
