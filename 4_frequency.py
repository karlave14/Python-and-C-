import re

def word_count(str):
    counts = dict()

    words = str.split()

    for word in words:
        if word in counts:
	        counts[word]+=1
        else:
            counts[word]=1
    return counts

text=input("Input a text and I will give you a the frequency of words: ")
text=re.sub("[^a-zA-Z-\s]+", "", text)

print(word_count(str.lower(text)))

