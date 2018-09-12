#include <iostream>
using namespace std;
// function to recevive the 3 variables
void tax(int &x,int &y,int &z)//call by reference for giving the value of x,y,z to main
{
 cout<<"input the values of unitcst,number of units and tax rate";  //instructions for input tothe user  
 cin>>x>>y>>z; //receving the variables
 
}
int main()
{
  int a,b,c;
  tax(a,b,c);
  cout<<"the value unitCst,units and tax rate is:";
  cout<<a<<"\t"<<b<<"\t"<<c;
    return 0;
}
