#include<stdio.h>
int cq=0;
int partition(int a[],int p,int r)
{
	int i,j,x,t;
	x=a[r];
	i=p-1;
	for(j=p;j<=r-1;++j)
	{
		if(a[j]<=x)
		{
			i++;
			t=a[j];
			a[j]=a[i];
			a[i]=t;
			cq++;
		}
	}
	t=a[i+1];
	a[i+1]=a[r];
	a[r]=t;
	cq++;
	return (i+1);
}

void quickSort(int a[],int p,int r)
{  int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quickSort(a,p,q-1);
		quickSort(a,q+1,r);
	}
}
int main()
{
	int a[10005],b[10005];
	int n,i,j,key,v,ci,ans;
	
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
	 scanf("%d",a+i);
	 b[i]=a[i];}
	ci=0;
		for(i=1;i<n;++i)//start at index a bcoz array of size 1 is allready in sorted order
	{
		key=a[i];
		j=i-1;
		while (j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
			ci++;
		}
		a[j+1]=key;
		
		
    }
    quickSort(b,0,n-1);
    ans=ci-cq;
    printf("%d\n",ans);
    return 0;
}