class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0; 
        int start = 0; 
        int end = height.size()-1;
        while(start != end){
            int dist = end - start;
            int area = min(height[start], height[end]) * dist;
            res = max(res, area);
            if(height[start] < height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return res;
    }
};