#include<iostream>
#include<string>
using namespace std;

class laptop
{
public:
	string name;
	int ram;

	void run()
	{
		cout<<"void is running"<<endl;
	}

	void run(int a)
	{
		cout<<"int a is "<<a<<endl;
	}


};


int main()
{
 laptop l;
 l.run();
 l.run(10);

return 0;
}