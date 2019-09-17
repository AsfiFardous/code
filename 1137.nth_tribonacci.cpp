 int ary[38];
int calc(int n){
        
        if(n==0){
         return 0;   
        }
       if(n==1){
            return 1;
        }
        if(n==2){
           return 1;
        }
        
        if(ary[n]!=-1){
            return ary[n];
        }
      ary[n]=calc(n-1)+calc(n-2)+calc(n-3);
       
      return ary[n];
    }
    
    int tribonacci(int n) {
    
        memset(ary,-1,sizeof(int)*38); 
         return calc(n);
    }
