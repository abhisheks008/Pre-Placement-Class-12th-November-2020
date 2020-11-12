# Sayan and his race event
# author Abhishek Sharma


test = int(input())

for i in range (0,test):
    count = input().split(" ")
    total = int(count[0])
    check = int(count[1])
    c = 0
    s = 0
    l = 0
    for j in range (1,100):
        check1 = check*j
        if (check1<total):
            t = 2*check1
            s = s + t
        elif (check1==total):
            c = 3*total
            break
        elif (check1>total):
            l = total
            break
            
    x = s + c + l
    print(x)
