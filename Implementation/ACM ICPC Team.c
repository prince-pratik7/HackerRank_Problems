#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,i,j,k;
	int pair,know=0,max=0;
	char a[500][500];
	//char sub[500][500];
	
	scanf("%d%d",&n,&m);
	
	for(i=0;i<n;i++) {
		//for(j=0;j<m;j++)	
			scanf("%s",a[i]);
	}

	k=0;
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			while(k<m) {
				if(a[i][k]=='1'|| a[j][k]=='1') {   // known subjects 
					//incr known subs
					know++;
				}
				k++;
			}
			//max=(know>max)?know:max;

			if(know>max) {
				pair=1;
				max=know;
			}
			else if(know == max) {
				pair++;
			}
			know=0;
			k=0;
			//printf("\n[%d---%d]",max,pair);
		}
		//printf("\n[%d---%d]",max,pair);
		//max=pair=0;
	}
	
	printf("%d\n%d",max,pair);
	

	return 0;
}