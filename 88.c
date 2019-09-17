

void merge(int* num1, int s1, int n, int* num2, int s2, int m){
    int i,j,k;
    int new_ary[s1];
    j=0;
    i=0;
   for(k=0; k<(n+m); k++)
    {
        if(i<n && j<m)
        {
            if(num1[i]<num2[j])
            {
                new_ary[k] = num1[i];
                i++;
            }
            else
            {
                new_ary[k] = num2[j];
                j++;
            }
        }
        else if(i<n)
        {
            new_ary[k] = num1[i];
            i++;
        }
        else if(j<m)
        {

            new_ary[k] = num2[j];
            j++;
        }
    }


    for(i=0; i<n+m; i++)
    {
        num1[i]=new_ary[i];
       // printf("%d",num1[i]);
    }
}




