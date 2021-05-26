#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[40],pos,ele,i,size;
	cout<<"Enter the size of Array"<<endl;
	cin>>size;
	cout<<"Enter"<<size<<"Array elements"<<endl;
	for(i=0;i<size;i++)
	cin>>arr[i];
	cout<<"Enter the element to insert"<<endl;
	cin>>ele;
	cout<<"Enter the position of element to insert"<<endl;
	cin>>pos;
	for(i=size;i>=pos;i--)
	arr[i]= arr[i-1];
	arr[i]=ele;
	size++;
	cout<<"The new array is:"<<endl;
	for(i=0;i<size;i++)
	cout<<arr[i]<<" "<<endl;
	return 0;
}
