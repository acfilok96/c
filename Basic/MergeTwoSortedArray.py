def func(a1, a2):
    l1, l2 = len(a1), len(a2)
    l3 = []
    i, j = 0, 0
    while (i < l1 and j < l2):
        if (a1[i] < a2[j]):
            l3.append(a1[i])
            i = i+1
        else:
            l3.append(a2[j])
            j = j+1
    while (i < l1):
        l3.append(a1[i])
        i = i+1
    while (j < l2):
        l3.append(a2[j])
        j = j+1
    return l3


a1 = [1, 4, 7, 8, 10]
a2 = [2, 2, 3, 5, 6, 9]

print(func(a1, a2))
