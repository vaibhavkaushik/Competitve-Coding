#include <bits/stdc++.h>
using namespace std;

int solve(pair<int,int> p[100],int n,int len)
{
	if(len==0)
	return 0;
	
	if(len<0)
	return INT_MIN;
	
	
	int ans = INT_MIN;
	for(int i=0;i<n;i++)
	{
		ans = max( ans, p[i].second + solve(p,n,len - p[i].first));
	}
	
	return ans;	
}

int main() 
{
	int n,len,cost;
	
	cin>>n;
	pair<int,int> p[100];
	
	for(int i=0;i<n;i++)
	{
		cin>>len>>cost;
		p[i] = make_pair(len,cost);
	}
	
	cout<<solve(p,n,n);
	
	return 0;
}
