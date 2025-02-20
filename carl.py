
n = int(input("Enter n : "))

x = {55,56,57,58,59,60,61}
y = {57,56,59,62,60,60,59}


for i in range(0,n):
    a = int(input())
    b = int(input())
    x.append(a)
    y.append(b)

xmean = sum(x) / n
ymean = sum(y) / n

print(xmean," : ",ymean)