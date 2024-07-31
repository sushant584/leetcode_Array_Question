class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxWater=0;
        while(left<right){
            int w=right-left;
            int h=min(height[left],height[right]);
            int area=w*h;
            maxWater=max(area,maxWater);
            if(height[left]<height[right]){
                left++;
            }
            else if(height[right]<height[left]){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return maxWater;
    }
};