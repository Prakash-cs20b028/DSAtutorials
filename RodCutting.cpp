// Assumed length of the rod as capacity.
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