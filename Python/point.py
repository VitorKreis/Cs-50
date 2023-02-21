point = int(input("How many points do you lose? "))

if point > 2:
    print("You lost more points then me")
elif point < 2:
    print("I lost more points to you")
else:
    print("Whe lost the same points")