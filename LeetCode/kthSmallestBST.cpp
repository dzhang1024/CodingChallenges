class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res; 
        inOrder(res, k, root);
        return res[k-1];
    }
    void inOrder(vector<int>& v, int k, TreeNode* root){
        if(root -> left){
            inOrder(v, k, root -> left);
        }
        v.push_back(root -> val);
        if(root -> right){
            inOrder(v, k, root -> right);
        }
    }
};