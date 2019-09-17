

bool isPerfectSquare(long long x){

    long long lo,hi,mid;

    
    lo=0;
    hi=x;
    int ans=0;
    while(hi>=lo)
    {

        mid=(hi+lo)/2;

        if((mid*mid)==x)
        {
            ans=1;
            break;
        }
        else if((mid*mid)<x)
        {
            lo=mid+1;

        }
        else if((mid*mid)>x)
        {
            hi=mid-1;
        }
    }
    if(ans==1)
    {
        return true;
    }
    else
       return false;

    
}



