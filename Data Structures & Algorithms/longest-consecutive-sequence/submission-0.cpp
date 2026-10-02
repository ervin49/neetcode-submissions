class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> numSet(nums.begin(),nums.end());
       int length=0 , maxLen = 0;
       for(int n : nums){
            if(numSet.find(n-1) == numSet.end())
                {
                    int length = 1;
                    while(numSet.find(n + length) != numSet.end())
                        length++;
                    maxLen=max(length , maxLen);
                }
       }
       return maxLen;
    }
};
