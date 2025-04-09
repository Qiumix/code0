def part1():
    dd = {3: 50, 1: 20, 2: 30}
    dd["fun"] = lambda x: x + 1
    for k, v in dd.items():
        # print(k, ":", v)
        pass
    river = {"nile": "egypt", "Long river": "China", "Huang river": "China"}
    for k, v in river.items():
        print(f"The {k} run through {v}.")
    print("####")
    for k in river.keys():
        print(k)
    print("####")
    for k in river.values():
        print(k)


##### part 1 #####
def part2():
    D1 = {
        "animal type": "python",
        "name": "john",
        "owner": "guido",
        "weight": 43,
        "eats": "bugs"
    }
    D2 = {
        "animal type": "chicken",
        "name": "clarence",
        "owner": "tiffany",
        "weight": 2,
        "eats": "seeds"
    }
    D3 = {
        "animal type": "dog",
        "name": "peso",
        "owner": "eric",
        "weight": 37,
        "eats": "shoes"
    }

    pets = [D1, D2, D3]
    for i in pets:
        print(f"宠物{i['name']}的信息：")
        for k, v in i.items():
            print(k, ":", v)
        print()


##### part2 #####
def part3():
    favorite_places = {
        "john": ["london", "HQU", "MCU"],
        "clarence": ["MIT", "UC Berkey", "TSU"],
        "peso": ["HDU"]
    }
    for k, v in favorite_places.items():
        print(f"{k}'s beloved places:\n", v)
        favorite = eval(input("tap the index of your favorite place\n"))
        if favorite > len(v) - 1:
            print("out of range")
            return False
        print(f"Favorite place is {v[favorite]}\n")


##### part3 #####


def part4():
    film_a = {"name": "film a", "year": 2020, "type": "action", "grade": 8.5}
    film_b = {"name": "film b", "year": 2018, "type": "sf", "grade": 7.9}
    film_c = {"name": "film c", "year": 2021, "type": "venture", "grade": 9.0}
    film_d = {"name": "film d", "year": 2019, "type": "action", "grade": 7.5}
    film_e = {"name": "film e", "year": 2025, "type": "sf", "grade": 8.0}
    film = [
        film_a,
        film_b,
        film_c,
        film_d,
        film_e,
    ]
    count = {"action": 0, "sf": 0, "venture": 0}
    for i in film:
        theType = i["type"]
        count[theType] += 1
    for k, v in count.items():
        print(k, ":", v)


##### part4 #####
