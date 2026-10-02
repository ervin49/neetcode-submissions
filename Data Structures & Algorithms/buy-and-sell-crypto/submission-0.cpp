class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0 , r = 1 , maxx = 0;
        while(r < prices.size())
        {
            if(prices[l] > prices[r])
                l = r;
            else
                maxx = max(maxx,prices[r] - prices[l]);
            r++;
        }
        return maxx;
    }
};
