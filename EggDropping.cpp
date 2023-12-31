 
int t[201][201];
    int fun(int e,int f)
    {
        if(f==0 or f==1)
        {
            return f;
        }
        if(e==1)
        {
            return f;
        }
        if(t[e][f] != -1)
        {
            return t[e][f];
        }
        int ans = INT_MAX;
        for(int k=1;k<=f;k++)
        {
            int left,right;
            if(t[e-1][k-1] != -1)
            {
                left = t[e-1][k-1];
            }
            else
            {
                left = fun(e-1,k-1);
                t[e-1][k-1] = left;
            }
            if(t[e][f-k] != -1)
            {
                right = t[e][f-k];
            }
            else
            {
                right = fun(e,f-k);
                t[e][f-k] = right;
            }
            int temp = 1 + max(left,right);
            
            ans = min(ans,temp);
        }
        return t[e][f] = ans;
        
        
    }
    int eggDrop(int n, int k) 
    {
        
        memset(t,-1,sizeof(t));
        return fun(n,k);
    }