#include<iostream>

using namespace std;


int main()
{
int i,j;
int arr[]={5,4,1,3,2,10,13,12};
int size=sizeof(arr)/sizeof(int);
int minIndex;
int temp;

cout<<"unsorted array is:";

for(i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}

for(i=0;i<size-1;i++)
{
	minIndex=i;

	for(j=i+1;j<size;j++)
	{
		if(arr[minIndex]>arr[j])	
		 minIndex=j;
		
	}
	temp=arr[minIndex];
	arr[minIndex]=arr[i];
	arr[i]=temp;

}

cout<<"sorted array is:"<<" ";
  for(i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}

cout<<endl;

return 0;

}