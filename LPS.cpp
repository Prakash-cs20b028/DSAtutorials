public int fun(StringBuilder s1,StringBuilder s2)
    {
        int m = s1.length();
        int t[][] = new int[m+1][m+1];
        
        //initialization
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j] = 0;
                }
            }
        }
        //Implementation
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1.charAt(i-1) == s2.charAt(j-1))
                {
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else
                {
                    t[i][j] = Math.max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        
        return t[m][m];
    }
    public int longestPalinSubseq(String S)
    {
        StringBuilder str = new StringBuilder(S);
        StringBuilder str1 = new StringBuilder(S);
        str.reverse();
        
        
        return fun(str,str1);
    } 
