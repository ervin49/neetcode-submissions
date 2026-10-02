class Solution {
public:
    int maxArea(vector<int>& heights) {
       int l = 0 , r = heights.size() - 1;
       int maxProd = 0;
       while(l < r){
            int currProd=(r - l) * min(heights[r] , heights[l]);
            maxProd = max(maxProd , currProd);
            if(heights[l] <= heights[r])
                l++;
            else 
                r--;
       } 
       return maxProd;
    }
};
