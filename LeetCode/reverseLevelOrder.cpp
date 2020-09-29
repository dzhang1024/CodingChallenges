class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res; 
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> v;
            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp != NULL){
                    v.push_back(temp->val);
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
            if(v.size() > 0){
                res.push_back(v);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};