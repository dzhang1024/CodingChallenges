class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        if(root -> val >= L && root -> val <= R){
            sum += root -> val;
        }
        if(root -> right != NULL){
            sum += rangeSumBST(root -> right, L, R);
        }
        if(root -> left != NULL){
            sum += rangeSumBST(root -> left, L, R);
        }
        return sum;
    }
};