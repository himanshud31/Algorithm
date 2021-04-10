#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void Max_heapify(int *arr,int i,int n)
{
	int largest=i;
	if((2*i+1)<n and arr[largest]<arr[2*i+1])
	largest=2*i+1;
	if((2*i+2)<n and arr[largest]<arr[2*i+2])
	largest=2*i+2;
	
	
	
	if(largest!=i)
	{
		swap(&arr[largest],&arr[i]);
		Max_heapify(arr,largest,n);
	}
}
void build_heap(int *arr,int n)
{
	for(int i=n/2;i>=0;i--)
	{
		Max_heapify(arr,i,n);
	}
}
void display(int *arr,int n)
{
	for(int  i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void heap_sort(int *arr,int n)
{
	build_heap(arr,n);
	
	cout<<"\n";
	int i=0;
	while(n-1-i!=0)
	{
		swap(&arr[0],&arr[n-1-i]);
		Max_heapify(arr,0,n-1-i);
		i++;
		
	
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
	
	heap_sort(arr,n);
	
	display(arr,n);
}
