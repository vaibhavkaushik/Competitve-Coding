#include <bits/stdc++.h>
using namespace std;
int counted=0;
bool is_safe(int board[100][100],int r,int c,int n)
{
	for(int i=r;i>=0;i--)
	{
		if(board[i][c]) return false;
	}
	
	int x=r,y=c ;
	
	while(x>=0&&y>=0)
	{
		if(board[x][y]) return false;
		x--;
		y--;
	}

	x=r,y=c;

	while(x>=0&&y<n)
	{
		if(board[x][y]) return false;
		x--;
		y++;
	}
	
	return true;
	
}


bool solve(int board[100][100],int n,int r)
{
	if(r>=n)
	{
		
		for(int i=0;i<n;i++)
		 { for(int j=0;j<n;j++)
			{
				if(board[i][j]==1) 
				cout<<board[i][j];
				else
				cout<<".";
			}
			cout<<endl;
		 }
		 
		 cout<<endl;
		 return false;
	}
	
	for(int c=0;c<n;c++)
	{
	
		if(is_safe(board,r,c,n))
		{
			board[r][c]=1;
		
			if(solve(board,n,r+1))
			{ return true;}
		
			board[r][c]=0;
		}
	}
	
	return false;
	
}

int main() 
{
	int n;
	cin>>n;
	
	int board[100][100];
	
	solve(board,n,0);
	cout<<counted;
	
	return 0;
}
