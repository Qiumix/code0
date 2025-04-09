film_a = ["film a", 2020, "action", 8.5]
film_b = ["film b", 2018, "sf", 7.9]
film_c = ["film c", 2021, "venture", 9.0]
film_d = ["film d", 2019, "action", 7.5]
film_e = ["film e", 2025, "sf", 8.0]
film = [
    film_a,
    film_b,
    film_c,
    film_d,
    film_e,
]
for i in film:
    print(f"{i[0]}")
print("#######")
#3list 4dict
for i in film:
    if i[3] > 8.0:
        print(f"{i[0]}")
print("#######")
Len = len(film)
for i in range(Len):
    for j in range(Len):
        if film[i][3] > film[j][3]:
            film[i], film[j] = film[j], film[i]
for i in film:
    print(f"{i[0]}")
