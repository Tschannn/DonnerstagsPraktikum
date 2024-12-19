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

txtName = sys.argv[1]

f = open(txtName,"r")
text = f.read()

print(txtName)
print(count_chars(text))
print(count_words(text))
