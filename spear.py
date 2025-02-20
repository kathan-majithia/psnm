
x = [75,88,95,70,60,80,81,50]
y = [120,134,150,115,110,140,142,100]

n = len(x)

rx = dict()
ry = dict()

for i in range(0,n):
    rx[x[i]] = 0
    ry[y[i]] = 0

x.sort()
y.sort()

for i in range(0,n):
    rx[x[i]] = i+1
    ry[y[i]] = i+1

print(rx)
print(ry)

di2 = 0

print("x   y   Rx   Ry   di    di^2\n")
for xi,yi in zip(rx,ry):
    di = rx[xi] - ry[yi]
    print(xi," ",yi," ",rx[xi]," ",ry[yi]," ",di," ",di**2)
    di2 = di2 + (di**2)

print("\nAnswer : ")
print("1 - (6 x",(di2),"/ ",n," x ",n**2-1,")")  

ans = 6 * di2 / n 
ans = ans / (n**2 - 1)

ans = 1 - ans

print(round(ans,3))




    