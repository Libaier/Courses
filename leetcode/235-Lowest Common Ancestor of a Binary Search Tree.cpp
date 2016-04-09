// 235. Lowest Common Ancestor of a Binary Search Tree My Submissions QuestionEditorial Solution
// Total Accepted: 63657 Total Submissions: 168274 Difficulty: Easy
// Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”

//         _______6______
//        /              \
//     ___2__          ___8__
//    /      \        /      \
//    0      _4       7       9
//          /  \
//          3   5
// For example, the lowest common ancestor (LCA) of nodes 2 and 8 is 6. Another example is LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* rootTemp = root;
        while(rootTemp!=NULL)
        {
            if(rootTemp->val > p-> val&&rootTemp->val > q-> val)
            {
                rootTemp = rootTemp->left;
            }else if(rootTemp->val < p-> val&&rootTemp->val < q-> val)
            {
                rootTemp = rootTemp->right;
            }else{
                return rootTemp;
            }
        }

        return NULL;
    }
};