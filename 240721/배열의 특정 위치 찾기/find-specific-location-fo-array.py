arr=list(map(int, input().split()))
n=len(arr)

even_sum=0
for i in range(1,n,2):
    even_sum+=arr[i]

third_sum=0
cnt=0
for i in range(2,n,3):
        third_sum+=arr[i]
        cnt+=1

print(even_sum,third_sum/cnt)