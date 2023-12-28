 
int fun(string str1,string str2)
	    {
	        int n=str1.length();
	        int t[n+1][n+1];
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
	        for(int i=1;i<n+1;i++)
	        {
	            for(int j=1;j<n+1;j++)
	            {
	                if(str1[i-1] == str2[j-1] and i!=j)
	                {
	                    t[i][j] = 1 + t[i-1][j-1];
	                }
	                else
	                {
	                    t[i][j] = max(t[i-1][j],t[i][j-1]);
	                }
	            }
	        }
	        return t[n][n];
	    }
		int LongestRepeatingSubsequence(string str){
		    
		    return fun(str,str);
		}