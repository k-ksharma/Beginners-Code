def merge(leftArray,rightArray):
    temp=list()
    leftSize=len(leftArray)
    rightSize=len(rightArray)
    leftIndex=0
    rightIndex=0
    while leftIndex<leftSize and rightIndex <rightSize:
        if leftArray[leftIndex]<=rightArray[rightIndex]:
            temp.append(leftArray[leftIndex])
            leftIndex+=1
        else:
            temp.append(rightArray[rightIndex])
            rightIndex+=1
    while leftIndex<leftSize:
        temp.append(leftArray[leftIndex])
        leftIndex+=1
    while rightIndex<rightSize:
        temp.append(rightArray[rightIndex])
        rightIndex+=1
    return temp

def mergeSort(array):
    arrayLen=len(array)
    if arrayLen>1:
        mid=arrayLen/2
        leftArray,rightArray=array[:mid],array[mid:]
        leftArray=mergeSort(leftArray)
        rightArray=mergeSort(rightArray)
        merged=merge(leftArray,rightArray)
        return merged
    return array
 
def main():
    array=map(int, raw_input("Enter the array elements (seperated by space) :-").split())
    print "The entered array is :-",
    print array
    ans=mergeSort(array)
    print "Sorted Array is :-",
    print ans
 
if __name__ == '__main__':
    main()
