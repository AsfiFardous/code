

int mySqrt(int x){
long long lo,hi,mid;

    
    lo=0;
    hi=x;
    int ans=0;
     while(hi>=lo)
    {

            mid=(hi+lo)/2;


            if((mid*mid)==x)
            {
                ans=mid;
                break;
            }
            else if((mid*mid)<x)
            {
                lo=mid+1;
                hi=hi;
                ans = mid;

            }
            }
            else if((mid*mid)>x)
            {
                hi=mid-1;
               
            }
        }

    return ans;
}

