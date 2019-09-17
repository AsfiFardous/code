

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* ary, int n, int* returnSize){

    int i,j,tmp;
    

    i=0;
    j=n-1;
    
    while(i<=j)
    {
        if(ary[i]%2==1 && ary[j]%2==0)
        {
            tmp=ary[i];
            ary[i]=ary[j];
            ary[j]=tmp;
            i++;
            j--;
        }
        else if(ary[i]%2==1 && ary[j]%2==1)
        {
            j--;
           
        }
        else if(ary[i]%2==0 && ary[j]%2==0)
        {
            i++;
        }
        
        else
        {
            i++;
            j--;
        }
    }
    
    *returnSize = n;
    
    
    
    return ary;
}



