#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int sum=1,ans=0;  		
		for(int i=n-2;i>=0;i--)   
		{
			if(arr[i]!=arr[n-1])
			{
				ans++;
				i=i-sum+1;
				sum=2*sum;  
			}
			else
			{
				sum++;
			}
			if(sum>=n) break; 
		}
		cout<<ans<<endl;
	}
}