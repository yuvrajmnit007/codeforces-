#include<bits/stdc++.h>
using namespace std;
#define itn long long
itn n,m,k;
itn a[30][30];
map<itn,itn> mp[50];
itn mid;
itn ans;
void dfs1(itn x,itn y,itn sum){
	if(x>=n||y>=m||x<0||y<0){
		return ;
	}
	if(x+y==mid){
		mp[x][sum]++;
		return ;
	}
	dfs1(x+1,y,sum^a[x+1][y]);
	dfs1(x,y+1,sum^a[x][y+1]);
}
void dfs2(itn x,itn y,itn sum){
	if(x>=n||y>=m||x<0||y<0){
		return ;
	}
	if(x+y==mid){
		ans+=mp[x][sum^k];
		return ;
	}
	dfs2(x-1,y,sum^a[x][y]);
	dfs2(x,y-1,sum^a[x][y]);
}
int main() {
	cin>>n>>m>>k;
	for(itn i=0;i<n;i++){
		for(itn j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	mid=(m+n-2)/2;
	dfs1(0,0,a[0][0]);
	dfs2(n-1,m-1,0);
	cout<<ans<<endl;
	return 0;
}