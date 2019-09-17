int* twoSum(int* numbers, int n, int target, int* returnSize){
    int i,*p1,*p2;
    int *ans = malloc(2*sizeof(int));
    //int is_target;
    p1=&numbers[0];
    p2=&numbers[n-1];

    while(p1<p2)
    {

        if(*p1+*p2==target)
        {
           ans[0] =p1-&numbers[0]+1;
            ans[1]=p2-&numbers[0]+1;
            *returnSize = 2;
            break;
            //is_target=1;
        }
        else if(*p1+*p2>target)
        {
            p2--;
        }
        else if(*p1+*p2<target)
        {
            p1++;

        }

    }
    return ans;
}
