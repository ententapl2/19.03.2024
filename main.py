def pot(n, w):

    a = 1

    for i in range(w):

        a = a*n

    return a

print(pot(3, 2))