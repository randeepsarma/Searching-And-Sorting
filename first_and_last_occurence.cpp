    int i=0,j=n-1,s=1;
    vector<int>ans;
    while(i<j){
        int mid=(i+j)>>1;
        if(arr[mid]<x){
            i=mid+1;
        }else if(arr[mid]>x){
            j=mid-1;
        }else if(arr[mid]==x){
            if(arr[mid-1]==x){
                j=mid-1;
            }else if(arr[mid-1]!=x){
                cout<<i<<" "<<mid<<" "<<j<<endl;
            
                ans.push_back(mid);
                
                break;
            }
        }
    }
    
    i=0;
    j=n-1;
    while(i<=j){
        int mid = (i+j)>>1;
        if(arr[mid]<x){
            i=mid+1;
        }else if(arr[mid]>x){
            j=mid-1;
        }else{
            if(arr[mid+1]==x){
                i=mid+1;
            }else if(arr[mid+1]!=x){
                cout<<i<<" "<<mid<<" "<<j<<endl;
              
                ans.push_back(mid);
                break;
            }
        }
    }if(ans.size()>0)
     return ans;
    else return {-1,-1};
