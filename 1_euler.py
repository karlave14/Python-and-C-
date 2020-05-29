
#Not working now

def factorial(n):
    if n==1:
        return n
    elif n==0:
        return 1
    else:
        return n*factorial(n-1)

def euler(num):
    suma=0
    for i in range(0,num+1):
        suma=suma+ 1/(factorial(i))
    return suma


accuracy=int(input("Input one number to calculate the number e, the higher the value, the better the accuracy: "))
print(euler(accuracy))

