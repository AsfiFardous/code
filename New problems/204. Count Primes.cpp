class Solution {
public:
    int countPrimes(int n) {
        int a[n+1],count=0;
        if(n>=0 && n<=2){
            return count;
        }
        memset(a,0,sizeof(a));
        a[0]=1;a[1]=1;
        int sq=sqrt(n);
        for(int i=2;i<=sq;i++){
             if(a[i]==0){
                for(int j=i*i;j<=n;j+=i){
                    a[j]=1;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(a[i]==0){
                count ++;
            }
        }
        return count;
    }
        
};
