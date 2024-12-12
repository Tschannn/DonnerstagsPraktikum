def ggT(x,y):
    if y == 0:
        return x
    else:
        return ggT(y,x%y)

def ggTr(x,y):
    if(x == y):
        return ggT(x,x)
    elif(x>y):
        return ggT(x-y,y)
    else:
        return ggT(x,y-x)
    
for line in open("ggtbeispiele.txt","r"):
    x,y,ergebnis = line.split(" ")
    if(ggTr(x,y) == ergebnis):
         print(ergebnis)
    else:
        print("Diese Zeile ist falsch " ,line)
        print(" und das das richtige: ",ggTr(x,y))
    
    