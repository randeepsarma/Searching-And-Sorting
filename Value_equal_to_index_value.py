    def valueEqualToIndex(self,arr, n):
		# code here
        i=1
        ans=[]
        for val in arr:
            if val==i:
                ans.append(val)
            i+=1 
        if(len(ans)>0):
            return ans
        
        return []    
