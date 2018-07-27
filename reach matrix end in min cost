#include <bits/stdc++.h>
using namespace std;

int solve(int matrix[50][50],int size,int row,int col,int dp[50][50])
{
	if(row==size-1&&col==size-1)
	{ 
	  dp[row][col] = matrix[row][col];	
	  return matrix[row][col]; 
		
	}

	if(row>=size || col>=size)
	return INT_MAX;
	
	if(dp[row][col]!=INT_MIN) 
	return dp[row][col];
	
	int option1 = solve(matrix,size,row+1,col,dp);
	int option2 = solve(matrix,size,row,col+1,dp);
	
	dp[row][col] = matrix[row][col] + min(option1,option2);
	
	return dp[row][col];
}

int main() 
{
	int n,matrix[50][50],dp[50][50];
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>matrix[i][j];
			dp[i][j]=INT_MIN;
		}
		
	}
	cout<<solve(matrix,n,0,0,dp);
	
	//in case you want to see the dp matrix
	
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	return 0;
}
