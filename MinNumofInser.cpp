 
int fun(string s1,string s2)
    {
        int m=s1.length();
        int t[m+1][m+1];
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j] = 0;
                }
            }
        }
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<m+1;j++)
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
        return m-t[m][m];
    }
    int findMinInsertions(string S){
        
        string s1(S.begin(),S.end());
        reverse(S.begin(),S.end());
        
        return fun(S,s1);
    }