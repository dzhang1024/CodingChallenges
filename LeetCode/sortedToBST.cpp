class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sort(nums, 0, nums.size());
    }
    TreeNode* sort(vector<int>& nums, int start, int end){
        if(start >= end){
            return NULL;
        }
        int middle = (start+end)/2;
        TreeNode* newNode = new TreeNode(nums[middle]);
        newNode -> left = sort(nums, start, middle);
        newNode -> right = sort(nums, middle+1, end);
        return newNode;
    }
};