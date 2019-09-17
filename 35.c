

int searchInsert(int* arr, int n, int t){

    int i,j;
    
    int mid,hi,lo;
    lo=0;
    hi=n-1;
    int ans=-1;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(arr[mid]==t)
        {
            ans=1;
            break;
        }
        else if(arr[mid]<t)
        {
            lo=mid+1;
            if(mid==n-1)
            {
                ans=2;
            }
            else if(lo>hi)
            {
                ans=3;
                break;
            }
        }
        else if(arr[mid]>t)
        {
            hi=mid-1;
            if(mid==0)
            {
            ans=0;
            }
            else if(hi<lo)
            {
               ans=1;
                break;
            }
        }

    }

    if(ans==1){
        return mid;
    }
    else if(ans==2){
        return n;
    }
    else if(ans==3){
         return mid+1;
    }
    else {
        return 0;
    }


}

