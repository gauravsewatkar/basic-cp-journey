/*arithmatic progression  nth term sum*/

#include<iostream>
using namespace std;

int main()
{

	int n,a=5,b=2,an=0,sn=0;
	cout<<"Enter nth term :"<<endl;
	cin>>n;
	for (int i = 1; i <=n; i++ )
	{
		an = a+((i-1) * b);

		cout<<"term"<<i<<" = "<<an<<endl;

		sn= sn + an;
	}
	cout<<"sum = " <<sn<<endl;

	 return 0;

}