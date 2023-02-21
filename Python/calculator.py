from cs50 import get_int

# x = get_int("X:")
# y = get_int("Y: ")
try:
    x = int(input("X:"))
    y = int(input("Y:"))
except:
    print("Nao e um int!")
    exit()


print(x + y)

