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
        int temp = max(root->data,max(l,r)+root->data);
        int ans = max(temp,root->data + l + r);
        res = max(ans,res);
        
        return temp;
    }
    int findMaxSum(Node* root)
    {
        int res = INT_MIN;
        fun(root,res);
        return res;
    
    } 
