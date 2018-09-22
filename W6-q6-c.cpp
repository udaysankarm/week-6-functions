#include<iostream>
using namespace std;
int sumSquareOddNumbers(int x,int y) //function to sum odd squares
{
 int i=x,q,s=0; //declaring variables to represent the number,reminder on dividion by 2 and the sum of squares
 while(i<=y) //loop for summation
 {
  q=(i%2); //storing reminder on dividsion by 2 in q
  if(q==1) //checking whether the number is odd
  {
    s=s+(i*i); //summation of odd squares
  }
  i=i+1; //increamenting i
 }
 return s;//returning the sum
}
int main() 
{
 int firstNum,secondNum,sumSquareOdd;//decalring the first and last numbers
 cout<<"\nEnter the first number and last number of the range"; //out put statement
 cin>>firstNum>>secondNum;//receving the first and last number
 sumSquareOdd=sumSquareOddNumbers(firstNum,secondNum); //calling the function and receving the sum
 cout<<"\nthe sum of odd squares between the range is:"<<sumSquareOdd<<endl; //printing the output that is the sum
 return 0;
}
