class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int a : nums){
            mp[a]++;
        }
        for(auto i : mp){
            if(i.second == 1 ){
                return i.first;
            }
        }
    }
};