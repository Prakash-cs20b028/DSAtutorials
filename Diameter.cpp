int fun(Node* root,int &res)
    {
        //base cond
        if(root == NULL)
        {
            return 0;
        }
        //hypothesis steps
        int l = fun(root->left,res);
        int r = fun(root->right,res);
        //induction step
        int temp = 1 + max(l,r);
        int ans = max(temp,1 + l + r);
        res = max(ans,res);
        
        return temp;
    }
    int diameter(Node* root) {
        
        int res = INT_MIN;
        fun(root,res);
        return res;
    } 
