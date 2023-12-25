// Recursion solution

int fun(string s1,string s2,int n,int m)
    {
        if(n==0 or m==0)
        {
            return 0;
        }
        if(s1[n-1] == s2[m-1])
        {
            return 1 + fun(s1,s2,n-1,m-1);
        }
        else
        {
            return max(fun(s1,s2,n-1,m),fun(s1,s2,n,m-1));
        }
    }
    int lcs(int n, int m, string s1, string s2)
    {
        return fun(s1,s2,n,m);
    }

// Memoization solution

int t[1002][1002];
    int fun(string s1,string s2,int n,int m)
    {
        if(n==0 or m==0)
        {
            return 0;
        }
        if(t[n][m] != -1)
        {
            return t[n][m];
        }
        else if(s1[n-1] == s2[m-1])
        {
            return t[n][m]=1 + fun(s1,s2,n-1,m-1);
        }
        else
        {
            return t[n][m]=max(fun(s1,s2,n-1,m),fun(s1,s2,n,m-1));
        }
    }
    int lcs(int n, int m, string s1, string s2)
    {
        memset(t,-1,sizeof(t));
        return fun(s1,s2,n,m);
    }

// Dp solution

int fun(string s1,string s2,int n,int m)
    {
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j] = 0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else
                {
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][m];
    }
    int lcs(int n, int m, string s1, string s2)
    {
       
        return fun(s1,s2,n,m);
    }
