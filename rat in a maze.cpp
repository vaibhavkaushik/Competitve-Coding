#include <bits/stdc++.h>
using namespace std;

bool safe(int maze[100][100],int i,int j,int m,int n)
{
	if(i<m && j<n && maze[i][j]==1)
	return true;
	
	return false;
}


bool solve(int maze[100][100],int sol[100][100],int i,int j,int m,int n)
{
	if(i==(m-1)&&j==(n-1) )
	{
		sol[i][j]=1;
		
		for(int i=0;i<m;i++)
		{ for(int j=0;j<n;j++)
		  { 
			cout<<sol[i][j]<<" ";
		  }
		
			cout<<endl;
		}
		
		return true;
	}
	
	if(safe(maze,i,j,m,n))
	{
		sol[i][j]=1;
		
		solve(maze,sol,i+1,j,m,n);
		solve(maze,sol,i,j+1,m,n);
		
		sol[i][j]=0;
	}
	
	return false;
	
}

int main() 
{
	int m,n;
	cin>>m>>n;
	int maze[100][100];
	int sol[100][100]={0};
	for(int i=0;i<m;i++)
	 { for(int j=0;j<n;j++)
	   {
	     cin>>maze[i][j]; 	
	   }
	 }
	
	solve(maze,sol,0,0,m,n);
	


	return 0;
}
