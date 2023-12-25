#define INF INT_MAX-1
class Solution{
	public:
	int fun(vector<int> coin,int sum,int n)
    {
         long t[n+1][sum+1];
         for(int i=0;i<n+1;i++)
         {
             for(int j=0;j<sum+1;j++)
             {
                 if(j==0)
                 {
                     t[i][j] = 0;
                 }
                 if(i==0)
                 {
                     t[i][j] = INF;
                 }
                 if(i==1)
                 {
                     if(j%coin[i-1] ==0)
                     {
                         t[i][j] = j/coin[i-1];
                     }
                     else
                     {
                         t[i][j] = INF;
                     }
                 }
             }
         }

         t[0][0] = 0;
         //implementation part
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=sum;j++)
             {
                 if(coin[i-1]<=j)
                 {
                     t[i][j] = min(1+t[i][j-coin[i-1]],t[i-1][j]);
                 }
                 else
                 {
                     t[i][j] = t[i-1][j];
                 }
             }
         }
         if(t[n][sum] == INF)
         {
             return -1;
         }
         else
         {
             return t[n][sum];
         }
         
    }
	int MinCoin(vector<int>nums, int amount)
	{
	    int n=nums.size();
        return fun(nums,amount,n);
	}
}; 
