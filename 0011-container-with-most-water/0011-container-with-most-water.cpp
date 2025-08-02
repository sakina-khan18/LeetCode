class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int ans=(right-left)*min(height[left],height[right]);
        while(left<right)
        {
          
          if(height[left]>height[right])
          {
            right--;
          }
          else
          left++;
          
          int val=min(height[left],height[right]);

          ans=max(ans,val*(right-left));
        }
        return ans;
    }
};