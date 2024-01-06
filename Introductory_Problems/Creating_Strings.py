from math import factorial

def createStr(arr):
    ans = ''
    for ele in arr:
        ans += ele
    return ans

def leave(arr, i):
    return arr[0:i] + arr[i+1:len(arr)]

def permutation(arr):
    if len(arr) == 1:
        return [arr]
    else:
        ans = [[]]
        for i in range(len(arr)):
            temp = leave(arr, i)
            for small in permutation(temp):
                small.append(arr[i])
                ans.append(small)
        return leave(ans, 0)

s = str(input())

arr = []

dicti = {}

for letter in s:
    arr.append(letter)
    if letter not in dicti:
        dicti[letter] = 1
    else:
        dicti[letter] += 1

perm = factorial(len(arr))

for key in dicti:
    perm /= factorial(dicti[key])

print(int(perm))

temp = permutation(arr)
tempans = []
for ele in temp:
    meow = createStr(ele)
    tempans.append(meow)

tempans.sort()

ans = []

for ele in tempans:
    if len(ans) == 0:
        ans.append(ele)
    elif ele != ans[-1]:
        ans.append(ele)

for ele in ans:
    print(ele)