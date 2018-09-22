#include<iostream>
using namespace std;
int sumOddNumbers(int x,int y) //function to sum odd numbers
{
 int i,q,s=0; //declaring variables to represent the number,reminder on dividion by 2 and the sum
 for(i=x;i<=y;i++) //loop for summation
 {
  q=(i%2); //storing reminder on dividsion by 2 in q
  if(q==1) //checking whether the number is odd
  {
    s=s+i; //summation of odds
  }
 }
 return s;//retruning the sum
}
int main() 
{
 int firstNum,lastNum,sumOdd;//decalring the first and last numbers
 cout<<"\nEnter the first number and last number of the range"; //out put statement
 cin>>firstNum>>lastNum;//receving the first and last number
 sumOdd=sumOddNumbers(firstNum,lastNum); //calling the function
 cout<<"\nthe sum of odd numbers between the range is:"<<sumOdd<<endl; //printing the output that is the sum
 return 0;
}
