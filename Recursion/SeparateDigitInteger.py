def separateDigit(num):
    if num == 0:
        return
    separateDigit(num // 10)
    print(num % 10)

num = int(input())
separateDigit(num)