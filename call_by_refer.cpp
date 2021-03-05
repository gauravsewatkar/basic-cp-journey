#include<iostream>

using namespace std;

void change(int &no)
{
	no=no*no;
	cout<<"the value of no is :"<<no<<endl;

}

int main()
{
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
    change(n);
    cout<<"the value of n is : "<<n<<endl;
    return 0;
}