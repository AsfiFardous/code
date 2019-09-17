
int fib(int N){
     int i, F[33];
    F[1]=1;
    F[0]=0;
    for(i=2; i<=N; i++)
    {
        F[i]=F[i-1]+F[i-2];

    }
    return F[N];
}
