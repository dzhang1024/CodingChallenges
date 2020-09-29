class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stk;
        if(root == NULL) return res;
        
        while(true){
            while(root){
                stk.push(root);
                root = root -> left;
            }
            if(stk.empty()){
                break;
            }
            root = stk.top();
            stk.pop();
            res.push_back(root -> val);
            root = root -> right;
        }
        return res;
    }
    
};