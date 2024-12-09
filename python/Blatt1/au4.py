def devocalize(s):
    vokale = "aeiou"
    "Die Vokale werden genommen"
    for e in vokale:
        s = s.replace(e,"") 
        "Hier wird mit null ersetzt"
    return s

m=devocalize("Das ist ein Baerenspass")
print(m)