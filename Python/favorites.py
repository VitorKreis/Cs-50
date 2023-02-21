import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    count = {}
    for row in reader:
        favorite = row["problem"]##Pegando as linguagens

        if(favorite in count): ##Contando as linguagens
            count[favorite] += 1
        else:
            count[favorite] = 1
def get_value(Problem):
    return count[Problem]
res = input("Favorite: ")

if res in count:
    print(f"{res}:{count[res]}")
