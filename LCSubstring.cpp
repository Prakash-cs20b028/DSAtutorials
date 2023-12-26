 
int fun(string s1,string s2,int n,int m)
    {
        int t[n+1][m+1];
        int ans=0,len=0;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j] = 0;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    t[i][j] = 1 + t[i-1][j-1];
                    
                }
                else
                {
                    
                    t[i][j] = 0;
                    
                }
            }
        }
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(t[i][j]>ans)
                {
                    ans = t[i][j];
                }
            }
        }
        return ans;
    }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        return fun(S1,S2,n,m);
    }