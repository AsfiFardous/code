

int search(int* a, int n, int t){

    int j,k,mid;
   


   
    j=0;
    k=n-1;
    int ans = -1;

    while(j<=k)
    {
        mid=(k+j)/2;
       
        if(a[mid] == t)
        {
            ans = mid;
            break;
        }
        else if(a[mid]<t)
        {
            j=mid+1;

        }
        else if(a[mid]>t)
        {
            k=mid-1;
        }
    }
    

    return ans;
}

