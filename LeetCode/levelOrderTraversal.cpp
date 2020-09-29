class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res; 
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            int n = q.size();
            for(int i = 0; i < n; i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp != NULL){
                    v.push_back(temp->val);
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
            if(!v.empty()){
                res.push_back(v);
            }  
        }
        return res;
    }
     
};