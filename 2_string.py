import re

print("*Input words to add them to a list*")
print("*Don't worry about the mistakes, I will filter the non alphanumeric characters*")
print("*Input '0' when you finished to stop*")

strings=[]

while True:
    n=input()
    if n=='0':
        break
    else:
        strings.append(n)


lenght=len(strings)
print(lenght)

for i in range(0,lenght):
    strings[i]=re.sub("[^0-9a-zA-Z]+", "", strings[i])

print(strings)

