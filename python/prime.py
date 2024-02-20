begin = int(input())
end = int(input())
#2 50
for i in range(begin, end+ 1):
    if(i > 1 and i <= 3):
        print(i, " ", end = "")
    else:
        for j in range(2, i):
            if(i % j == 0):
                break
            else:
                if(j == i - 1):
                    print(i, " ", end = "")
    