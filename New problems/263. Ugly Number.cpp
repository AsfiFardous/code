class Solution {
public:
    bool isUgly(int num) {
        if(num<=0){
            return false;
        }
        if(num == 1){
            return true;
        } 
        
        while(num%2==0){

            num/=2;
        }
        
        for(int i=3;i<=5;i=i+2){
            while(num%i==0){
              
               num/=i; 
            }
        }
        
        if(num>1){
            return false;
        }
      
        return true;
    }
};
