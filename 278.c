// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int i;
    long long lo,hi,mid;
    lo=0;
    hi=n-1;
   while(lo<=hi){
       mid=(lo+hi)/2;
       if(isBadVersion(mid)){
           if( isBadVersion(mid-1)){
           hi=mid-1;
       }
       else{
           return mid;
       break;
       }
   }
       else if(isBadVersion(mid)==0){
           lo=mid+1;
       }
       
   }
    return n;
}                
