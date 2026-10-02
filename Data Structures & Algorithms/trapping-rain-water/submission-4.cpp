class Solution {
public:
    int trap(vector<int> height){
        int n = height.size();
        int res = 0;
       vector<int> MaxLeft(n, 0); 
       vector<int> MaxRight(n, 0); 
       for(int i = 1;i < n;i++)
           MaxLeft[i] = max(MaxLeft[i - 1], height[i - 1]);
       for(int i = n - 2;i >= 0; i--)
           MaxRight[i] = max(MaxRight[i + 1],height[i + 1]);
       for(int i = 1;i < n - 1 ;i++) {
           int sum = min(MaxRight[i],MaxLeft[i]) - height[i];
           if(sum >= 0)
               res += sum;
       }
       return res;

    }
};
