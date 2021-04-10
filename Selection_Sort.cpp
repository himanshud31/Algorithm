#include<bits/stdc++.h>
using namespace std;
void Display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
void Selection_sort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=arr[i];
		int loc=i;
		
		for(int j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				loc=j;
			}
		}
		swap(arr[i],arr[loc]);
		
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
	
	cout<<"\nArray before sort:";
	Display(arr,n);
	
	Selection_sort(arr,n);
	
	cout<<"\nArray after sort:";
	Display(arr,n);
	
}
