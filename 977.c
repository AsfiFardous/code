

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void merge(int *ary, int l1, int r1, int l2, int r2)
{
    int new_ary[r2-l1+1];
    int i,j,k;
    i = l1;
    j = l2;

    for(k=0; k<(r2-l1+1); k++)
    {
        if(i<=r1 && j<=r2)
        {
            if(ary[i]<ary[j])
            {
                new_ary[k] = ary[i];
                i++;
            }
            else
            {
                new_ary[k] = ary[j];
                j++;
            }
        }
        else if(i<=r1)
        {
            new_ary[k] = ary[i];
            i++;
        }
        else if(j<=r2)
        {

            new_ary[k] = ary[j];
            j++;
        }
    }


    for(i=0,j=l1; i<(r2-l1+1); i++,j++)
    {
        ary[j]=new_ary[i];
    }
}


void merge_sort(int *ary, int l, int r)
{
    if(r<=l)return;
    if(r==l+1)
    {
        if(ary[r]<ary[l])
        {
            int tmp = ary[l];
            ary[l] = ary[r];
            ary[r] = tmp;
        }
        return;
    }
    int m = (l+r)/2;
    merge_sort(ary, l, m);
    merge_sort(ary, m+1, r);
    merge(ary,l,m,m+1,r);
}

int* sortedSquares(int* ary, int n, int* returnSize){


    int i,j;
    
    int *ans = malloc(n*sizeof(int));

    for(i=0; i<n; i++)
    {
        ary[i]=ary[i]*ary[i];
    }

    merge_sort(ary, 0, n-1);

    *returnSize=n;

    return ary;
}



