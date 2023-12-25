
// Assumed length of the rod as capacity.
//Recursion approach.
int fun(int len[],int price[],int n,int cap)
    {
        if(n ==0 or cap ==0)
        {
            return 0;
        }
        else if(len[n-1]<=cap)
        {
            return max(price[n-1]+fun(len,price,n,cap-len[n-1]), fun(len,price,n-1,cap));
        }
        else
        {
            return fun(len,price,n-1,cap);
        }
    }
    int cutRod(int price[], int n) {
        
        int len[n];
        for(int i=0;i<n;i++)
        {
            len[i] = i+1;
        }
        int cap = n;
        return fun(len,price,n,cap);
    }


// Memoization Approach


int mat[1002][1002];
    
    int fun(int len[],int price[],int n,int cap)
    {
        if(n ==0 or cap ==0)
        {
            return 0;
        }
        if(mat[n][cap] != -1)
        {
            return mat[n][cap];
        }
        else if(len[n-1]<=cap)
        {
            return mat[n][cap]=max(price[n-1]+fun(len,price,n,cap-len[n-1]), fun(len,price,n-1,cap));
        }
        else
        {
            return mat[n][cap]=fun(len,price,n-1,cap);
        }
    }
    int cutRod(int price[], int n) {
        
        memset(mat,-1,sizeof(mat));
        int len[n];
        for(int i=0;i<n;i++)
        {
            len[i] = i+1;
        }
        int cap = n;
        return fun(len,price,n,cap);
    }

//dp approach
int fun(int len[],int price[],int n,int cap)
    {
        //initialization
        int mat[1002][1002];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<cap+1;j++)
            {
                if(i==0 or j==0)
                {
                    mat[i][j] = 0;
                }
            }
        }
        //implementation
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=cap;j++)
            {
                if(len[i-1]<=j)
                {
                    mat[i][j] = max(price[i-1]+mat[i][j-len[i-1]],mat[i-1][j]);
                }
                else
                {
                    mat[i][j] = mat[i-1][j];
                }
            }
        }
        return mat[n][cap];
    }
    int cutRod(int price[], int n) 
    {
        
        int len[n];
        for(int i=0;i<n;i++)
        {
            len[i] = i+1;
        }
        int cap = n;
        return fun(len,price,n,cap);
    }
