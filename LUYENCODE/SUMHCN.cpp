#include <bits/stdc++.h>

int m,n,t,e[201][201];

void nmn(){
	int i,j,a,b,c,d,k;
	int s1,s2,s3,s4;

	for (i=1;i<=m;i++)
	    for (j=1;j<=n;j++)
	        scanf("%d",&e[i][j]);

	for (i=0;i<=m;i++) e[i][0]=0;
	for (j=0;j<=n;j++) e[0][j]=0;

	for (i=1;i<=m;i++)
	    for (j=1;j<=n;j++)
	        e[i][j] = e[i][j]+e[i-1][j]+e[i][j-1]-e[i-1][j-1];
	for (k=0;k<t;k++){
		s1=0; s2=0;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		printf("%d\n",e[c][d]-e[a-1][d]-e[c][b-1]+e[a-1][b-1]);
	}
	
}

int main(){
	while (scanf("%d%d%d",&m,&n,&t)!=EOF) nmn();
	   return 0;	
}