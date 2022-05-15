class Solution {
public:
    int maxArea(vector<int>& height) {
int left=0;
        int right=height.size()-1;
        int ans=0;
        while(left<right){
            //Two Pointer approach 
            // first we calculate mini height
            // then we do right-left for width
            // then we select maximum area
            ans=max((min(height[left],height[right])*(right-left)),ans);
            if(height[left]<=height[right]){
                left++;
            }else
                right--;
        }
        return ans;
        
    }
};