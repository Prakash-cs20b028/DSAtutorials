 
vector<int> vec;
    void Subset_Sum(int arr[],int n,int sum)
    {
        int t[n+1][sum+1];
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
	                t[i][j] = t[i-1][j-arr[i-1]] or t[i-1][j];
	            }
	            else
	            {
	                t[i][j] = t[i-1][j];
	            }
	        }
	    }
	    int j=0;
	    while(j<=sum/2)
	    {
	        if(t[n][j] != 0)
	        {
	            vec.push_back(j);
	        }
	        j++;
	    }
    }
    
	int minDifference(int arr[], int n)  { 
	    
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum += arr[i];
	    }
	    
	    Subset_Sum(arr,n,sum);
	    int mn = INT_MAX;
	    for(int i=0;i<vec.size();i++)
	    {
	        mn = min(mn,abs(sum-2*vec[i]));
	    }
	    return mn;
	} 