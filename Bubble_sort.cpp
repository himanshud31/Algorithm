#include<bits/stdc++.h>
using namespace std;
void swap(int *a1,int *a2)
{
	int temp=*a1;
	*a1=*a2;
	*a2=temp;
}
void bubble_sort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
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
	
	cout<<"Enter the size of array:";
	cin>>n;
	
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nArray before sorting:";
	display(arr,n);
	
	bubble_sort(arr,n);
	
	cout<<"\nArray after sorting:";
	display(arr,n);
	
}
