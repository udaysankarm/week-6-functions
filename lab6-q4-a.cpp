#include <iostream>
using namespace std;
char numcompare(int x,int y) // a void function using call by value method
{
 char q;
 if(x>y) //deciding whether x is greater than y
  {
    q='a'; //assinging a charachter ato q
    return q;
    
  }
 else if(y>x)//deciding whether y is greater than x
  {
    q='b'; //assinging a charachter b to q
    return q;
  }
 else //if both of the statements are not true then the numbers are equal
 {
   q='n'; //assinging a variable n to q
   return q;
 }
  
}
int main()
{
 int a,b; //declaring the variables
 char m;
 cout<<"the two numbers to be compared";//instructiuon to the user for getting the numbers to be compared
 cin>>a>>b;
 m=numcompare(a,b);//receving q from function and saving it as m
 if(m=='a')   //now we compare the variable m which is assingned through the function 
 cout<<"the greater number is:"<<b<<endl; //if the above condition is true a>b therefore print b which is smaller 
 if(m=='b')
 cout<<"the greater number is:"<<a<<endl;//if the above condition is true a<b therefore print a which is smaller 
  if(m=='n')
 cout<<"the numbers are same\n";
 return 0;
}
