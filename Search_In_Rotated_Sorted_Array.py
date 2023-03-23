#https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1
    def search(self, arr : list, l : int, h : int, key : int):
        # l: The starting index
        # h: The ending index, you have to search the key in this range
        # Complete this function
    #l: The starting index
        low,high=l,h
        while(low<=high):
            mid = (low+high)>>1
            if(arr[high]==key):
                return high
            elif (arr[low]==key):
                return low
            elif(arr[mid]==key):
                return mid
            elif(arr[low]<arr[mid]):
                if(key>=arr[low] and key<arr[mid]):
                    high=mid-1
                else:
                    low=mid+1
            else:
                if(key>arr[mid] and key<=arr[high]):
                    low=mid+1
                else:
                    high=mid-1
            
        return -1
