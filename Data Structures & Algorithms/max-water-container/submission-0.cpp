class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int area=0;
        while(left<right){
            int a=min(heights[left],heights[right])*(right-left);
            area=max(a,area);
            if(heights[left]>heights[right]) right--;
            else left++;
        }
        return area;
    }
};
