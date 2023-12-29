int t[101][101];
    
    int fun(int arr[],int i,int j)
    {
        //base case
        if(i>=j)
        {
            return 0;
        }
        if(t[i][j] != -1)
        {
            return t[i][j];
        }
        int ans = INT_MAX;
        //implementation part
        for(int k=i;k<=j-1;k++)
        {
            int temp = fun(arr,i,k)+fun(arr,k+1,j)+arr[i-1]*arr[j]*arr[k];
            ans=min(temp,ans);
        }
        return t[i][j] = ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(t,-1,sizeof(t));
        return fun(arr,1,N-1);
    } 
