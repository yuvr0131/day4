//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        set<char>set;
        int maxi=0;
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(set.find(s[j])==set.end())
            {
                set.insert(s[j]);
                maxi=max(maxi,j-i+1);
              j++;
            }
            else
            {
                set.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};