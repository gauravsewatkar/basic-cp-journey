//call by value

#include<iostream>

using namespace std;

int power(int num,int pow)

{

int ans=1,i;

for(i=0;i<pow;i++)
{
ans= ans * num;
}
return ans;
}




int main()

{
	int n,p,answer;
	cout<<"enter number: ";
	cin>>n;

	cout<<"enter power: ";
	cin>>p;

	cout<<"answer is : "<<power(n,p)<<endl;
	 
 
return 0;
}