#include<stdio.h>
#include<stdlib.h>




void merge(int arr[],int l,int m, int r)
{
int n1,n2,i,j,k;
n1=m-l+1;
n2=r-m;
int L[n1],R[n2];
for(i=0;i<n1;i++)
	L[i]=arr[

}

void mergesort(int arr[],int l,int r)
{
if(l<r)
{
	int m=(l+r)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);
}
}






int main()
{
int arr[],l,m,r,n;
printf("HOw many elements you wanna enter ?");
scanf("%d",&n);
printf("Enter the eements:\n");
for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
mergesort(arr,0,n-1);

}
