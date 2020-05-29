#3. Check the validity of a password (input from users). Validation:
# • At least 1 letter between [a-z] and 1 letter between [A-Z].
#• At least 1 number between [0-9]. • At least 1 at least one punctuation sign.
# • Minimum length 6 characters. • Maximum length 16 characters.

import re #library para trabajar con expreciones regulares con re.seharch
def vality_password(password):
  if 6 <= len(password) <= 16:
    if re.search('[a-z]', password) and re.search('[A-Z]',password):
      if re.search('[0-9]',password):
        if re.search('[$@#]', password):
          return True
  return False

clave = input("Write you password: \n")
