#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int *arr,int p,int r)
{
	int pivot=arr[r];
	int i=p-1;
	
	for(int  j=p;j<r;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	
	swap(&arr[i+1],&arr[r]);
	return i+1;
}
void quick_sort(int *arr,int p,int r)
{
	if(p<r)
	{
		int q=partition(arr,p,r);
		quick_sort(arr,p,q-1);
		quick_sort(arr,q+1,r);
		
	}
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		arr[i]=x;
	}
	
	quick_sort(arr,0,n-1);
	display(arr,n);
}
