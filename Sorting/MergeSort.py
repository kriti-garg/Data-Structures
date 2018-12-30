def merge(arr,l,mid,r):
    p = l
    q = mid + 1
    k = 0
    A = [0] * (r-l+1) #(intialise point * length)This is how u initialise list
    # print(A)
    for i in range(l,r+1):
        if p>mid:
            A[k] = arr[q]
            k += 1
            q += 1
            
        elif(q>r):
            A[k] = arr[p]
            k += 1
            p += 1
            
        elif(arr[p]<arr[q]):
            A[k] = arr[p]
            k += 1
            p += 1
            
        else:
            A[k] = arr[q]
            k += 1
            q += 1
    
    for i in range(0,k):
        arr[l] = A[i]
        l += 1

def mergeSort(arr , l , r):
    if l<r:
        mid = (l+r)//2
        mergeSort(arr,l,mid)
        mergeSort(arr,mid+1,r)
        merge(arr,l,mid,r)
    return

def main():
    num = int(input())
    
    '''
        Method1:
        1
        2
        3
        4
        5
    # arr = []
    # arr = list()
    
    # for i in range(0,num):
    #     tmp = int(input())
    #     arr.append(tmp)
    
    '''
    
    # Method2:  1 2 3 4 5
    arr = input().split(" ")
    for i in range(0,num):
        arr[i] = int(arr[i])
    mergeSort(arr,0,num-1)
    print('After sorting the array is : ')
    for i in range(0,num):
        print(arr[i],end='\n')

main()