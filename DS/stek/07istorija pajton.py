import sys
istorija = []
for adresa in sys.stdin:
    adresa = adresa.strip()
    if adresa == "back":
        if istorija:
            print(istorija.pop())
        else:
            print("-")
    else:
        istorija.append(adresa)
