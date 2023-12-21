 
// Recursion Solution
bool fun(int arr[],int n,int sum)
    {
        if(n ==0)
        {
            return 0;
        }
        else if(sum ==0)
        {
            return 1;
        }
        else if(arr[n-1]<=sum)
        {
            return fun(arr,n-1,sum-arr[n-1]) or fun(arr,n-1,sum);
        }
        else
        {
            return fun(arr,n-1,sum);
        }
    }
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++)
        {
            sum += arr[i];
        }
        //cout<<sum<<" ";
        if(sum%2 != 0)
        {
            return 0;
        }
        else
        {
            return fun(arr,N,sum/2);
        }
        
    }

// Memoization Solution
bool t[102][1002];
    bool fun(int arr[],int n,int sum)
    {
        if(n==0)
        {
            return false;
        }
        else if(sum ==0)
        {
            return true;
        }
        else if(t[n][sum] == true)
        {
            return true;
        }
        else if(arr[n-1]<=sum)
        {
            return t[n][sum] = fun(arr,n-1,sum-arr[n-1]) or fun(arr,n-1,sum);
        }
        else
        {
            return t[n][sum] = fun(arr,n-1,sum);
        }
    }
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        memset(t,false,sizeof(t));
        
        for(int i=0;i<N;i++)
        {
            sum += arr[i];
        }
        if(sum%2 != 0)
        {
            return 0;
        }
        else
        {
            return fun(arr,N,sum/2);
        }
        
    }

// Table form dp


int fun(int arr[],int n,int sum)
    {
        int t[n+1][sum*2+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
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
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j] = (t[i-1][j-arr[i-1]] || t[i-1][j]);
                }
                else
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        return t[n][sum];
    }