round = int(input())
p1, p2 = 0, 0
count1, count2 = 0, 0

max1, max2 = 0, 0
while (round > 0):
    a, b = map(int, input().split(" "))
    p1 += a
    p2 += b
    lead = (p1-p2)
    if (lead > 0):
        count += 1
        if (lead > max1):
            max1 = lead
    else:
        count2 += 1
        if (-lead > -max2):
            max2 = lead
#	print("\n", max1,max2," \n")
    round -= 1

if count1 > count2:
    print("1", max1)
else:
    print("2", -max2)
