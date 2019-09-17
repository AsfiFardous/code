

int peakIndexInMountainArray(int* a, int n){

        int i,mid,lo,hi;
    
    lo=0;
    hi=n-1;
    int ans=-1;
    while(lo<=hi)
    {
        mid=(hi+lo)/2;
        //printf("%d\n",mid);
        if(a[mid-1]<a[mid] && a[mid]>a[mid+1])
        {
            ans=mid;
            break;
        }
        else if(a[mid-1]>a[mid] && a[mid]>a[mid+1])
        {
            hi=mid-1;
        }
        else if(a[mid-1]<a[mid]&& a[mid]<a[mid+1])
        {
            lo=mid+1;
        }

    }
      
    return ans;
}

