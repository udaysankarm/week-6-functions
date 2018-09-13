#include <iostream>
using namespace std;
// function to recevive the 3 variables
void tax(int &x,int &y,int &z)//call by reference for giving the value of x,y,z to main
{
 cout<<"input the values of unitcst,number of units purchased and tax rate";  //instructions for input tothe user  
 cin>>x>>y>>z; //receving the variables
 
}
void taxcalcu(int ucst,int u,int tR,int &stax,int &totDue)/*call by reference for giving the value of x,y,z to main 
and receving the other variables from the main function which are recevie using the other function*/
{
  
  stax= u*ucst*tR/100;  //Sales tax = Units * Unit Cost * rate
  totDue= stax+u*ucst;     //Total = sales tax + (units * unit cost)
 
}
void taxprt(int ucst,int u,int tR,int stax,int totDue)//call by reference for giving the value of x,y,z to main
{
 cout<<"\n      the value ofunitcost is   :";  //printing the output in an oderly manner
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
  int unitcost,unitspurch,taxRate,salesTax,totalDue;
  tax(unitcost,unitspurch,taxRate); //calling the function for input this will give the nesessary values to the variables given in the brackets
  taxcalcu(unitcost,unitspurch,taxRate,salesTax,totalDue); //calling the function to calculate salesn tax and totlal cost
  taxprt(unitcost,unitspurch,taxRate,salesTax,totalDue);

  return 0;
}
