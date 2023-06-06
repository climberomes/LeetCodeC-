/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool findPath(TreeNode* myRoot, TreeNode* toFind, vector<TreeNode*> &myReturn)
    {
        if(myRoot == nullptr) 
        {
            return false;
        }
        else if(myRoot == toFind) 
        {
            myReturn.insert(myReturn.begin(), myRoot);
            return true;
        }
        else if (findPath(myRoot->right,toFind, myReturn))
        {
            myReturn.insert(myReturn.begin(), myRoot);
            return true;
        }
        else if (findPath(myRoot->left,toFind, myReturn))
        {
            myReturn.insert(myReturn.begin(), myRoot);
            return true;
        }

        return false;

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr || p == nullptr || q == nullptr) return nullptr;
        else if (p == q) return p;
        else if (root == p && root == q) return root;
        
        vector<TreeNode*> path1, path2;
        int i = 0;

        findPath(root,p,path1);
        findPath(root,q,path2);

        while(path1[i]==path2[i])
        {
            if(i == path1.size()-1)
            {
                return path1[i];
            }
            else if(i == path2.size()-1)
            {
                return path2[i];
            }
            else
                i++;
        }

        return path1[i-1];
    }
};
