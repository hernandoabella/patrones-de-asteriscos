# Pattern 23: ...

# ABCDE
# ABCD*
# ABC**
# AB***
# A****

n = 4

for i in range(n, -1, -1):
    for j in range(n + 1):
        if j > i:
            print("*", end="")
        else:
            print(chr(j + 65), end="")
    print()
