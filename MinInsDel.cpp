int fun(string str1,string str2)
	{
	    int m = str1.length();
	    int n = str2.length();
	    int t[m+1][n+1];
	    
	    for(int i=0;i<m+1;i++)
	    {
	        for(int j=0;j<n+1;j++)
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
	            if(str1[i-1] == str2[j-1])
	            {
	                t[i][j] = 1 + t[i-1][j-1];
	            }
	            else
	            {
	                t[i][j] = max(t[i-1][j], t[i][j-1]);
	            }
	        }
	    }
	    
	    return m+n-2*t[m][n];
	}
	int minOperations(string str1, string str2) 
	{ 
	    return fun(str1,str2);
	    
	} 
