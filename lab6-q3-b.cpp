#include <iostream>
using namespace std;
void numcompare(int x,int y,char &q) // a void function with one refernce variable
{

 if(x>y) //deciding whether x is greater than y
  {
    q='a'; //assinging a charachter a to q
    
  }
 else if(y>x)//deciding whether y is greater than x
  {
    q='b'; //assinging a charachter b to q
  
  }
 else //if both of the statements are not true then the numbers are equal
 {
   q='n'; //assinging a charachter n to q
 }
  //the charachters assinged to q is then compared in the main function 
}
int main()
{
 int a,b; //declaring the variables
 char m;
 cout<<"the two numbers to be compared";//instructiuon to the user for getting the numbers to be compared
 cin>>a>>b;
 numcompare(a,b,m);//function to compare the varaiables and getting  the value of m from the function through the call by reference variable q 
 if(m=='a') //comapring the value of m got from the user defined function
 cout<<"the greater number is:"<<a<<endl;    //printing the graeter value 
 if(m=='b') //comapring the value of m got from the user defined function
 cout<<"the greater number is:"<<b<<endl;
  if(m=='n') //comapring the value of m got from the user defined function
 cout<<"the numbers are same\n";
 return 0;
}
