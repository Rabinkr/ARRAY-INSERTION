#include<bits\stdc++.h>
void rev(int* a,int N);
using namespace std;
int main()
{
	int arr[5],n;
	cout<<"\n Enter number of Elements:";
	cin>>n;
	cout<<"Enter Array:"<<"\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nArray :";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	rev(arr,n);
	return 0;
}
void rev(int* a,int N)
{
	int j,temp;
	j=N-1;
	for(int i=0;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"\nReverse Array:";
	for(int i=0;i<N;i++)
	cout<<a[i]<<" ";
}

