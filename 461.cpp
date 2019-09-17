class Solution {
public:
    int hammingDistance(int n, int m) {
        int i,j,bit1,bit2;
		int count=0;
		for(i=0;i<32;i++){
			bit1=n&1;
			bit2=m&1;
		if(bit1!=bit2){
			count++;
		}
		n>>=1;
		m>>=1;
		}

		return count;
			}
		};
