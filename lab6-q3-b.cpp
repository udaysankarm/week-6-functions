#include <iostream>
using namespace std;
void numcompare(int x,int y,char &q) // a void function with one refernce variable
{

 if(x>y) //deciding whether x is greater than y
  {
    q='a'; //assinging x to q
    
  }
 else if(y>x)//deciding whether y is greater than x
  {
    q='b'; //assinging y to q
  
  }
 else //if both of the statements are not true then the numbers are equal
 {
   q='n';
 }
  
}
int main()
{
 int a,b; //declaring the variables
 char m;
 cout<<"the two numbers to be compared";//instructiuon to the user for getting the numbers to be compared
 cin>>a>>b;
 numcompare(a,b,m);
 if(m=='a')
 cout<<"the greater number is:"<<a<<endl;
 if(m=='b')
 cout<<"the greater number is:"<<b<<endl;
  if(m=='n')
 cout<<"the numbers are same\n";
 return 0;
}
