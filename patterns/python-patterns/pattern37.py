# Pattern 37: ...

# 1
# **
# 123
# ****
# 12345

n = 5

for i in range(1, n + 1):
    for j in range(1, i + 1):
        if i % 2 == 0:
            print("*", end="")
        else:
            print(j, end="")
    print()
