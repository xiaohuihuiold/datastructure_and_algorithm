#!/usr/bin/python3.7

arr=[2,3,1,4,2,6,7,9,1,5]
for i in range(len(arr)-1):
    for j in range(len(arr)-1-i):
        if arr[j]>arr[j+1]:
            temp=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp

for v in arr:
    print(v)
