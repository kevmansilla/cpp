#include<stdio.h>
#include <stdbool.h>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)==2){
		char table[100][101];
		bool used[100][100]={false};
		for(int i=0;i<n;i++)
			scanf("%s",table[i]);

		int count=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(table[i][j]=='P'){
					if(i-1>=0&&!used[i-1][j]&&table[i-1][j]=='W')
						count++,used[i-1][j]=true;
					else if(j-1>=0&&!used[i][j-1]&&table[i][j-1]=='W')
						count++,used[i][j-1]=true;
					else if(j+1<m&&!used[i][j+1]&&table[i][j+1]=='W')
						count++,used[i][j+1]=true;
					else if(i+1<n&&!used[i+1][j]&&table[i+1][j]=='W')
						count++,used[i+1][j]=true;
				}
		printf("%d\n",count);

	}
	return 0;
}
