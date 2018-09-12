#include <iostream>
using namespace std;
// function to recevive the 3 variables
void taxcalcu(int &stax,int &totDue)//call by reference for giving the value of x,y,z to main
{
 int ucst,u,tR ; //declaration of variables for receving the components
 cout<<"input the values of unitcst,number of units and tax rate";  //instructions for input tothe user  
 cin>>ucst>>u>>tR; //receving the variables
  stax= u*ucst*tR/100;  //Sales tax = Units * Unit Cost * rate
  totDue= stax+u*ucst;     //Total = sales tax + (units * unit cost)
 
}
int main()
{
  int a,b;
  taxcalcu(a,b); //calling the function
  cout<<"the value sales tax and totDue:"; //printing the what sim output
  
cout<<"\t"<<a<<'\t'<<b; //printing the actual result
    return 0;
}
