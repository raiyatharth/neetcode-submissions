class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int , int> map;
       for(int c : nums){
        map[c]++;
       } 
       for(auto &i :nums){
        if(i.second == 1){
            return i.first;
        }
       }
       return -1;
    }
};
