# Pattern 142: ...

# *****
# *
# *
# *
# *****

n = 5

for i in range(1, n + 1):
    for j in range(1, n + 1):
        if i == 1 or i == n or j == 1:
            print("*", end="")
    print()
