int CountSubset(vector<int> arr,int n,int sum)
    {
        int mod = 1000000007;
        int t[n+1][sum+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                
                if(i==0)
                {
                    t[i][j] = 0;
                }
                if(j==0)
                {
                    t[i][j] = 1;
                }
            }
        }   
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(arr[i-1] <= j)
                {
                    t[i][j] = (t[i-1][j-arr[i-1]] + t[i-1][j]) % mod;
                }
                else
                {
                    t[i][j] = t[i-1][j] % mod;
                }
            }
        }
        return t[n][sum]%mod;
    }
    int findTargetSumWays(vector<int>&arr ,int d) {
        
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
        }
        int sum2 = (d+sum);
        
        if(sum2%2 != 0)
        {
            return 0;
        }
        else
        {
            return CountSubset(arr,n,sum2/2);
        }
    } 
