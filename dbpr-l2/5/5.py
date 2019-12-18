a=input("Podaj nazwe pliku\n")
b=input("Podaj slowo\n")
with open(a) as f:
    if b in f.read():
        print("znalazlem")
