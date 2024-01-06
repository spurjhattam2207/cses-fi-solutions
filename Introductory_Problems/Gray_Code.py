def grayCode(n):
    if n==1:
        return ['0','1']
    else:
        temp = grayCode(n-1)
        i = 0
        aux = []
        for ele in temp:
            if i%2 == 0:
                ele += '1'
                aux.append(ele)
                ele = ele[:-1]
                ele += '0'
                aux.append(ele)
                i += 1
            else:
                ele += '0'
                aux.append(ele)
                ele = ele[:-1]
                ele += '1'
                aux.append(ele)
                i += 1
        return aux

a = int(input())
arr = grayCode(a)
for ele in arr:
    print(ele)