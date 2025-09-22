/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */

var isBalanced = function(root) {
     let ok = true;

    function dfs(node) {
        if (!node) return 0;

        let dl = dfs(node.left);
        let dr = dfs(node.right);

        if (Math.abs(dl - dr) > 1) {
            ok = false;
            return 0;
        }

        return Math.max(dl, dr) + 1;
    }

    dfs(root);
    return ok;
};