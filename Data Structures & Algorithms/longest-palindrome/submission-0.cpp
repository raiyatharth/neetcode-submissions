class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char, int> mp;

        // Count frequency
        for (char c : s) {
            mp[c]++;
        }

        int length = 0;
        bool odd = false;

        // Take pairs
        for (auto it : mp) {

            int freq = it.second;

            length += (freq / 2) * 2;

            if (freq % 2 == 1) {
                odd = true;
            }
        }

        // One odd character can be placed in the middle
        if (odd) {
            length++;
        }

        return length;
    }
};