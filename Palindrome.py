n=int(input())
p=0
t=n
while(n!=0):
    r=n%10
    p=p*10+r
    n=n//10
if(t==p):
    print("yes")
else:
    print("no")
