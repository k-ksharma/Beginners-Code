def selection(arr,n):
    for i in range(n):
        mn = arr[i]
        pos = i
        j = i+1
        while j < n:
            if arr[j] < mn:
                mn = arr[j]
                pos = j
            j=j+1
        arr[pos] = arr[i]
        arr[i] = mn
if __name__ == "__main__":
    n = input()
    arr = map(int,raw_input().split(' '));
    selection(arr,n);
    print arr
