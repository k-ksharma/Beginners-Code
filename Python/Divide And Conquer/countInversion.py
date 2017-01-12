def merge(leftArray,rightArray):
    temp=list()
    leftSize=len(leftArray)
    rightSize=len(rightArray)
    leftIndex=0
    rightIndex=0
    InvCount=0
    while leftIndex<leftSize and rightIndex <rightSize:
        if leftArray[leftIndex]<=rightArray[rightIndex]:
            temp.append(leftArray[leftIndex])
            leftIndex+=1
        else:
            temp.append(rightArray[rightIndex])
            rightIndex+=1
            InvCount+=(leftSize-leftIndex)
    while leftIndex<leftSize:
        temp.append(leftArray[leftIndex])
        leftIndex+=1
    while rightIndex<rightSize:
        temp.append(rightArray[rightIndex])
        rightIndex+=1
    return temp,InvCount

def mergeSort(array):
    arrayLen=len(array)
    if arrayLen>1:
        mid=arrayLen/2
        leftArray,rightArray=array[:mid],array[mid:]
        leftArray,leftInversion=mergeSort(leftArray)
        rightArray,rightInversion=mergeSort(rightArray)
        merged,splitInversion=merge(leftArray,rightArray)
        return merged,(leftInversion+rightInversion+splitInversion)
    return array,0
 
def main():
    array=map(int, raw_input("Enter the array elements (seperated by space) :-").split())
    print "The entered array is :-",
    print array
    ans,inv=mergeSort(array)
    print "Inversions in  Array are :-",
    print inv
 
if __name__ == '__main__':
    main()
