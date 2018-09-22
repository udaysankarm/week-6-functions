#include<iostream>
using namespace std;
int sumEvenNumbers(int x,int y) //function to sum even numbers
{
 int i,q,s=0; //declaring variables to represent the number,reminder on dividion by 2 and the sum
 for(i=x;i<=y;i++) //loop for summation
 {
  q=(i%2); //storing reminder on dividsion by 2 in q
  if(q==0) //checking whether the number is even
  {
    s=s+i; //summation of evens
  }
 }
 return s;//retryuning the sum
}
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
int sumSquareEvenNumbers(int x,int y) //function to sum even squares
{
 int i=x,q,s=0; //declaring variables to represent the number,reminder on dividion by 2 and the sum of squares
 while(i<=y) //loop for summation
 {
  q=(i%2); //storing reminder on dividsion by 2 in q
  if(q==0) //checking whether the number is even
  {
    s=s+(i*i); //summation of even squares
  }
  i=i+1; //increamenting i
 }
 return s;//returning the sum
}
int main() 
{
 int firstNum,lastNum,sumEven,sumOdd,sumSquareOdd,sumSquareEven;//decalring the first and last numbers
 cout<<"\nEnter the first number and last number of the range"; //out put statement
 cin>>firstNum>>lastNum;//receving the first and last number
 sumEven=sumEvenNumbers(firstNum,lastNum); //calling the function summation of even numbers
 sumOdd=sumOddNumbers(firstNum,lastNum); //calling the function summation of odd numbers
 sumSquareOdd=sumSquareOddNumbers(firstNum,lastNum); //calling the function and receving the sum of odd squares
 sumSquareEven=sumSquareEvenNumbers(firstNum,lastNum); //calling the function and receving the sum of even squares
 cout<<"\nthe sum of even squares between the range is:"<<sumSquareEven<<endl; //printing the output that is the sum
 cout<<"\nthe sum of odd squares between the range is:"<<sumSquareOdd<<endl; //printing the output that is the sum of odd squares
 cout<<"\nthe sum of even numbers between the range is:"<<sumEven<<endl; //printing the output that is the sum of even numbers
 cout<<"\nthe sum of odd numbers between the range is:"<<sumOdd<<endl; //printing the output that is the sum of odd numbers
 return 0;
}
