from cs50 import SQL

db = SQL("sqlite:///favorite.db")

len = input("Your favorite language? ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE language = ? ", len)

for row in rows:
    print(row["n"])


