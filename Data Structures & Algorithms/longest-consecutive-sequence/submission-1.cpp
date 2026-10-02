class Solution {
public:
    int longestConsecutive(vector<int>& nums){
            unordered_set<int> numSet(nums.begin(),nums.end());
            int longest = 0;
            for(int n : numSet)
                if(numSet.find(n-1)==numSet.end())
                    {
                        int length = 0;
                        int aux=n;
                        while(numSet.find(aux)!=numSet.end())
                            length++,aux++;
                        longest = max(longest, length);
                    }
            return longest;
    }
};