 
int t[501][501];
    bool ispalind(string str,int i,int j)
    {
        while(i<j)
        {
            if(str[i] != str[j])
            {
                return false;
            }
            else
            {
                i++;j--;
            }
        }
        return true;
    }
    int fun(string str,int i,int j)
    {
        if(t[i][j] != -1)
        {
            return t[i][j];
        }
        if((i>=j) or (ispalind(str,i,j) == true))
        {
            t[i][j] = 0;
            return 0;
        }
        int ans = INT_MAX;
        
        for(int k=i;k<=j-1;k++)
        {
            int left, right;
    		if(t[i][k] == -1)
    		{
    		    left = fun(str, i, k);
    		    t[i][k] = left;
    		}
    		else
    		{
    		    left= t[i][k];
    		}
    		if(t[k + 1][j] == -1)
    		{
    		    right = fun(str, k + 1, j);
    		    t[k+1][j] = right;
    		}
    		else
    		{
    		    right = t[k + 1][j];
    		   
    		}
    		
    		int temp_ans = left + right + 1;
    		ans = min(ans, temp_ans);
    		
        }
        return t[i][j]=ans;
    }
    int palindromicPartition(string str)
    {
        memset(t,-1,sizeof(t));
        return fun(str,0,str.length()-1);
    }