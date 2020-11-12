# Chef and Queries problem using Python programming language
# author Abhishek Sharma

test = int(input())
for i in range (0,test):
    task = input().split(" ")
    q = input().split(" ")
    p = int(task[0])
    s = int(task[1])
    k = 0
    work = 0
    count = 0
    sum1 = 0
    
    for j in range (0,p):
        sum1 = sum1 + int(q[j])
    while (1>0):
        work = sum1 - s
        sum1 = work
        if (work<0):
            print(k+1)
            break
        k = k + 1
