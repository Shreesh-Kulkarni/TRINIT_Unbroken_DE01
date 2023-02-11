n=143
e=11
p=11
q=13
phi=120
d=0
M=[]
c=list(map(int,input().split()))
for i in range(phi):
    x=1+(i*phi)
    if x%e==0:
        f=x//e
        if f!=e:
            d=f
            break
        else:
            continue
    else:
        continue
print(d)
for i in c:
    m=pow(i,d,n)
    M.append(m)
print(M)
