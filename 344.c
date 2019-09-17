

void reverseString(char* s, int l){

    int i,j,mid,tmp;
    

  
    mid=l/2;

    //printf("%d\n",mid);

    if(l%2==0)
    {
        i=mid-1;
        j=mid;
        //printf("i:%d j:%d\n",i,j);
        while(i>=0)
        {

            tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;

              //printf(" %d pos %c %d pos:%c\n",i,s[i],j,s[j]);


            i--;
            j++;
        }
    }
    else
    {
        i=mid-1;
        j=mid+1;
        while(i>=0)
        {

            tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;

            // printf(" %d pos %c %d pos:%c\n",i,s[i],j,s[j]);

            i--;
            j++;
        }
    }
    
    return s;

}



