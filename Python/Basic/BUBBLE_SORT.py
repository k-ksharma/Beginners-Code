def bubble(arr,n):
    for i in range(n):
        for j in range(n-1):
            if arr[j] > arr[j+1]:
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j]-arr[j+1]
                arr[j] = arr[j]-arr[j+1]
if __name__ == "__main__":
    n = input()
    arr = map(int,raw_input().split(' '));
    bubble(arr,n);
    print arr
