class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> invert;
        invert.push(root);
        
        while(!invert.empty()){
            TreeNode* nRoot = invert.top();
            invert.pop();
            if(nRoot != NULL){
                invert.push(nRoot -> left);
                invert.push(nRoot -> right);
                swap(nRoot -> left, nRoot -> right);
            }
        }
        return root;
    }
};