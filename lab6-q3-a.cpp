#include <iostream>
using namespace std;
char numcompare(int x,int y)
{
 char q; //let the function retrun q which is the greater value
 if(x>y) //deciding whether x is greater than y
  {
    q='a'; //assinging a charachter a to q [where y is b and x is a]
    
  }
 else if(y>x)//deciding whether y is greater than x [where y is b and x is a]
  {
    q='b';//assinging a charachter y to q 
   
  }
 else //if both of the statements are not true then the numbers are equal
 {
   q='n';//assinging a charachter n to q if they are equal 
 }
  return q;
}
int main()
{
 int a,b,m; //declaring the variables
 cout<<"the two numbers to be compared";//instructiuon to the user for getting the numbers to be compared
 cin>>a>>b;
 m=numcompare(a,b);
 if(m=='a') //comparing the retured variable m
 cout<<"the greater number is\n"<<a; // if the returned value is a then a>b
 if(m=='b')
 cout<<"the greater number is\n"<<b; // if the returned value is a then a>b
  if(m=='n')
 cout<<"the numbers are same\n"; //n is returned when they are equal 
 return 0;
}
