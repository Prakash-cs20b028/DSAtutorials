//Recursion based solution.

int fun(int coin[],int n,int sum)
    {
        if(n == 0)
        {
            return 0;
        }
        if(sum ==0)
        {
            return 1;
        }
        else if(coin[n-1]<=sum)
        {
            return fun(coin,n,sum-coin[n-1])+fun(coin,n-1,sum);
        }
        else
        {
            return fun(coin,n-1,sum);
        }
    }
    long long int count(int coins[], int N, int sum) {

        //Recursion based.
        return fun(coins,N,sum);
    }

// meomization based solution.


long long int t[1002][1002];
    long long int fun(int coin[],int n,int sum)
    {
        if(n == 0)
        {
            return 0;
        }
        if(sum ==0)
        {
            return 1;
        }
        if(t[n][sum] != -1)
        {
            return t[n][sum];
        }
        else if(coin[n-1]<=sum)
        {
            return t[n][sum]=fun(coin,n,sum-coin[n-1])+fun(coin,n-1,sum);
        }
        else
        {
            return t[n][sum]=fun(coin,n-1,sum);
        }
    }
    long long int count(int coins[], int N, int sum) {

        memset(t,-1,sizeof(t));
        return fun(coins,N,sum);
    }

// Dp based solutions

long long int fun(int coin[],int n,int sum)
    {
        long long int t[1002][1002];
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
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(coin[i-1]<=j)
                {
                    t[i][j] = t[i][j-coin[i-1]]+t[i-1][j];
                }
                else
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[n][sum];
        
    }
    long long int count(int coins[], int N, int sum) {

        
        return fun(coins,N,sum);
    }
