#include<iostream>
 using namespace std;

 int main()

 {
 	int ra=4 ;
  int a=4,*pa;

  pa=&a;
  ra=a;

cout<<"a= "<<ra<<endl;
cout<<"pa= "<<pa<<endl;
cout<<"&a= "<<&a;

 	return 0;
 	
 }