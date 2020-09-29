class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(target == original){
            return cloned;
        }
        if(original == NULL){
            return NULL;
        }
        if(TreeNode* leftside = getTargetCopy(original -> left, cloned -> left, target)){
            return leftside;
        }
        return getTargetCopy(original -> right, cloned -> right, target);
    }
};