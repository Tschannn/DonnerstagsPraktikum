
def auskunft(linie,start,ziel):
    if(start == ziel):
        return "0"
    return 0



f = open("fahrzeiten.txt","r")
text = f.read()
parts = text.split(";")

for line in open("fahrzeiten.txt","r"):
    linie,halteStelle,naechsteStelle,minuten = line.split(";")
    text = auskunft(linie,halteStelle,naechsteStelle)
    print(text)