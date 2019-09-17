int ary[100001];

int calc(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    
    if(ary[n]!=-1){
        return ary[n];
    }
   
    ary[n] = calc(n-1)+calc(n-2);
    return ary[n];
}

int climbStairs(int n){
    memset(ary,-1, sizeof(int)*100001);
    return calc(n);
}

