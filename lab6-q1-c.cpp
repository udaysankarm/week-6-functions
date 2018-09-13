#include <iostream>
using namespace std;
// function to recevive the 3 variables
void taxprt()//call by reference for giving the value of x,y,z to main
{
 int ucst,u,tR,stax,totDue; //declaration of variables for receving the components
 cout<<"input the values of unitcst,number of units:";
 cin>>ucst>>u;//receving the variables
 cout<<" tax rate,sales tax and toyal due";  //instructions for input tothe user  
 cin>>tR>>stax>>totDue; //receving the variables
 cout<<"\n      the value ofunitcost is   :";
 cout<<ucst;
 cout<<"\nthe value of number of units is :";
 cout<< u;
 cout<<"\n    the value of tax rate       :";
 cout<<tR ;
 cout<<"\n    the value of sales tax is   :";
 cout<<stax;
 cout<<"\n the value of total due is      :";
 cout<<totDue<<endl;
}
int main()
{
 
  taxprt(); //calling the function

    return 0;
}
