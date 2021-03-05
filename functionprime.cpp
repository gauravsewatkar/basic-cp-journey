#include<iostream>

using namespace std;

bool isPrime(int n)
{

if(n<=2)
{
	return true;

}
else
{
  for(int i=2;i*i<=n;i++)
  {
	if((n%2)==0)
		return false;
  }
return true;
}

}




int main()


{

int n;
cout<<"Enter number to checked: " ;
cin>>n;

if(isPrime(n))
{
	cout<<n<<"is a prime number"<<endl;

}
else
{
	cout<<n<<" "<<"is a NOT prime number"<<endl;
}

return 0;

}