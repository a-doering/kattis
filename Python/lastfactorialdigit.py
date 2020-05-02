n = int(input())+1
for i in range (1,n):
    val = int(input())
    factorial = 1
    for j in range (1, (val+1)):
        factorial = factorial * j

    if factorial > 10:
        factorial = factorial % 10
    print(factorial)
