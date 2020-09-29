class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int res = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            res = 0;
            for(int i = q.size()-1; i >= 0; i--){
                TreeNode* temp = q.front(); 
                q.pop();
                res += temp -> val;
                if(temp -> left){
                    q.push(temp -> left);
                }
                if(temp -> right){
                    q.push(temp -> right);
                }
            }
        }
        return res; 
    }
};