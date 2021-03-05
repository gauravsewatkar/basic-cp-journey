#include<iostream>

using namespace std;


int main()
{
int i,j;
int arr[]={6,5,4,2,3,1,7};
int size=sizeof(arr)/sizeof(int);
int temp;

cout<<"unsorted array is:";

for(i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}

for(i=0;i<size-1;i++)
{
	 
	for(j=0;j<size-i-1;j++)
	{
		if(arr[j]>arr[j+1])	
		 {
		 	temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		 }
		
	}
	

}

cout<<"sorted array is:"<<" ";
  for(i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}

cout<<endl;

return 0;

}