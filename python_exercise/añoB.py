#Programa que diga si el año es biciesto o no

            						  |
                                                          |
print("Años bisiestos")                                   |
year = int(input("Escriba un año: "))                     |
                                                          |
if year % 400 == 0 or (year % 100 != 0 and year %4 == 0): |
	print("El año es: ", year, "es bisiesto.")        |
else:                                                     |
	print("El año es: ", year, "no es bisiesto.")     |
-----------------------------------------------------------
 __________________________
< Programa python reducido >
 --------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||


def es_bisiesto(year):
    return year % 400 == 0 or (year % 100 != 0 and year % 4 == 0)

print("Comprobador de años bisiestos")
years = int(input("Escriba un año y le diré si es bisiesto: "))
if es_bisiesto(years):
    print("El año", years, "es un año bisiesto.")
else:
    print("El año", years, "no es un año bisiesto.")
