#include <iostream>
using namespace std;
void nummax(int x,int y) // a void function using call by value method
{
 
 if(x>y) //deciding whether x is greater than y
  {
    cout<<"the greater number is:"<<x; //printing which is the greater number(here it is x)
  }
 else if(y>x)//deciding whether y is greater than x
  {
   
    cout<<"the greater number is:"<<y;  //printing which is the greater number(here it is y)
  }
 else //if both of the statements are not true then the numbers are equal
  {
    cout<<"both the numbers are equal";
   
  }
  
}
void SUM(int p,int v)
{
 cout<<"\n sum of the given numbers is"<<p+v;
}
void nummin(int x,int y) // a void function using call by value method
{
 
 if(x<y) //deciding whether x is less than y
  {
    cout<<"the greater number is:"<<x; //printing which is least number(here it is x)
  }
 else if(y<x)//deciding whether y is less than x
  {
   
    cout<<"the greater number is:"<<y;  //printing which is less number(here it is y)
  }
 else //if both of the statements are not true then the numbers are equal
  {
    cout<<"both the numbers are equal";
   
  }
  
}
int main()
{
 int a,b,m; //declaring the variables

 cout<<"\nthe two numbers:";//instructiuon to the user for getting the numbers to be compared
 cin>>a>>b; //receving the variables
 cout<<"\nwhat operation do you want to do with these sumbers\n";//instruction to the user for input
 cout<<" 1.SUM of the variables \n 2. maximum of the number \n 3.minimum  of the numbers \n[input the corresponding number for doing each operation(1 for sum )]  ";
 cin>>m;
 if(m==1)
  {
   SUM(a,b);
  }
 else if(m==2)
  {
   nummax(a,b);
  }
 else if(m==3)
 {
  nummin(a,b);
 }
 else 
 cout<<"enter 1 2 or 3";

cout<<endl;
 return 0;
}
