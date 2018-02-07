//Author:ahmad fajhan
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
 int ValueOne,ValueTwo;

  cout<<"Please enter a whole number:\n";

cin>> ValueOne; 

cout<<"Please enter another whole number:\n";

cin>>ValueTwo;

if( ValueOne > ValueTwo ) {

cout<< "Of those two numbers, the biggest is : "<<ValueOne;
}

else {

cout<<"Of those two numbers, the biggest is : "<<ValueTwo;
}  

cout<<endl<<"Thank you for playing.\n" ;

  return 0;
}
