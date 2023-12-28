string fun(string str1,string str2)
    {
        int m=str1.length();
        int n=str2.length();
        int t[m+1][n+1];

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
        //implementation part
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(str1[i-1] == str2[j-1])
                {
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else
                {
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        //Last part
        int i=m,j=n;
        string ans = "";
        while(i>0 and j>0)
        {
            if(str1[i-1] == str2[j-1])
            {
                ans.push_back(str2[j-1]);
                i--;j--;
            }
            else
            {
                if(t[i][j-1] > t[i-1][j]) //left 
                {
                    ans.push_back(str2[j-1]);
                    j--;
                }
                else  //upper
                {
                    ans.push_back(str1[i-1]);
                    i--;
                }
            }
        }
        while(i>0)
        {
            ans.push_back(str1[i-1]);
            i--;
        }
        while(j>0)
        {
            ans.push_back(str2[j-1]);
            j--;
        }
        reverse(ans.begin(),ans.end()); //note that this doesn't return the value to new string.
        return ans;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        
        return fun(str1,str2);
    } 
