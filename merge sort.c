#include<stdio.h>
#include<stdlib.h>
void mergesort(int a[], int lb,int ub)
{
if(lb<ub)
{
int mid=(lb+ub)/2;
mergesort(a,lb,mid);
mergesort(a,(mid+1),ub);
merge(a,lb,mid,ub);
}
}
void merge(int a[],int lb,int mid,int ub)
{
int i,j,k,b[9];
i=lb;
j=mid+1;
k=lb;
while(i<=mid&&j<=ub)
{
if(a[i]<=a[j])
{
b[k]=a[i];
k++;
i++;
}
else
{
b[k]=a[j];
k++;
j++;
}
}
if(i>mid)
{
while(j<=ub)
{
b[k]=a[j];
k++;
j++;
}
}
else
{
while(i<=mid)
{
b[k]=a[i];
k++;
i++;
}
}
//Element(b,lb,ub);
for(k=lb;k<=ub;k++)
{
a[k]=b[k];
}
//Element(a,lb,ub);
}
void Element(int a[],int lb,int ub)
{
for(int i=lb;i<=ub;i++)
{
printf("%d ",a[i]);
}
}
void main()
{
int lb=0;
int ub=8,a[9];
printf("Enter element\n");
for(int i=0;i<9;i++)
{
scanf("%d",&a[i]);
}
mergesort(a,lb,ub);
Element(a,lb,ub);
}
