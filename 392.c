

bool isSubsequence(char * s1, char * s2){

    int i,j,k,l1,l2;
    

    
    l1=strlen(s1);
    l2=strlen(s2);
    j=0;
    k=0;
    int count=0;
//for(i=0;i<l1;i++)
    while(k<l2)
    {

        //printf("j:%d k:%d\n",j,k);
        // for(j=0;j<l2;j++){
        if(s1[j]==s2[k])
        {
            count++;
            j++;

        }
        k++;
    }
    if(count==l1)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}



