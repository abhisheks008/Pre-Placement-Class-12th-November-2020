# problem 1 : element count
# Author Abhishek Sharma

test = int(input())
for i in range (0,test):
    len = int(input())
    array = input().split(" ")
    array.sort()
    m = 0
    for j in range (0,len):
        if (m!=int(array[j])):
            x = array.count(array[j])
            print ("{} {}".format(array[j], x))
        m = int(array[j])
