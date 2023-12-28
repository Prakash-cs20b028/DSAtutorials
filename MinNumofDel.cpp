 
int t[n+1][n+1];
    //initialization
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j] = 0;
            }
        }
    }
    //implementation 
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                t[i][j] = 1 + t[i-1][j-1];
            }
            else
            {
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return n-t[n][n];
}
int minDeletions(string str, int n) { 
    
    string str1(str.rbegin(),str.rend());
    return fun(str,str1,n);
} 