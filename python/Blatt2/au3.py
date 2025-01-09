import sys
from collections import Counter

def count_words(text: str):
    words = text.lower().split()
        
    wordcount = Counter(words)
    return dict(wordcount)


def count_chars(text:str):
    chars = text.lower()
        
    charcounts = Counter(chars)
    return dict(charcounts)

def top(dict,n):
    list = sorted(dict.items(),key=lambda x:x[1])[:n]
    return list

txtName = sys.argv[1]

f = open(txtName,"r")
text = f.read()

charcount = count_chars(text)
wordcount = count_words(text)

for count in wordcount:
    print(f"{count}")


for count in charcount:
    print(f"{count}")