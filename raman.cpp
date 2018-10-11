#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 
 int a,b;
 cout<<"Enter any two integers"<<endl;
 cout<<"the width a = "<<endl;
 cin>>a;
 cout<<"the height a = "<<endl;
 cin>>b;
 
 auto c=sqrt(pow(a,2)+pow(b,2));

 cout<<"The third side = "<<c<<endl;
  std::ofstream myfile;
 myfile.open ("example.txt");
if (myfile<<" Your triangle has three sides that are "<<a<<"  "<<b<< " and"<<c);
 myfile.close();
 return 0;
}
