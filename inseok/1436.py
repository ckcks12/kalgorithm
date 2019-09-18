count=10000
i=0

list1=[]

while count>0:
    if '666' in str(i):
        list1.append(str(i))
        i=i+1
        count=count-1
    else:
        i=i+1
        continue

num=int(input())

if num==1:
    print(list1[0])
else:
    print(list1[num-1])
