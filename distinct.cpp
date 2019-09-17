#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> elements(9);

    for(int i=0;i<elements.size();i++){
       cin>>elements[i];
    }
  
    for(int i=0; i<elements.size(); i++){
       int count=0;
        for(int j=i+1;j<elements.size();j++){
            if(elements[j]== elements[i]){
                count++;
                break;
            }
		}
            if(count==0){
                cout<< elements[i];
            }
    }
    return 0;
}
