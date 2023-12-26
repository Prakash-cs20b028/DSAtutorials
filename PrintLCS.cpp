string fun(string s1,string s2,int n,int m)
{
    int t[m+1][n+1];
    string ans = "";
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    //Upto now, we have made the table now this is the time for getting the longest subsequences
    int i=m,j=n;
    while(i>0 and j>0)
    {
        if(s1[i-1] == s2[j-1])
        {
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }
        else
        {
            if(t[i][j-1] > t[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
string findLCS(int n, int m,string &s1, string &s2){
		
    return fun(s1,s2,n,m);
} 
