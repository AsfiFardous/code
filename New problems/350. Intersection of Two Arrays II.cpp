class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> table;
        for(int i=0;i<nums1.size();i++){
            if(table.count(nums1[i]) == 0){
                table[nums1[i]] = 1;
            }else{
                table[nums1[i]]++;
            }
        }
        vector<int> ans;
        for(int i=0;i<nums2.size();i++){
            if(table.count(nums2[i]) > 0 && table[nums2[i]]>0){
                ans.push_back(nums2[i]);
                table[nums2[i]]--;
            }
        }
        return ans;
    }
};
