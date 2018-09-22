#include<iostream>
using namespace std;
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
 int firstNum,secondNum,sumSquareEven;//decalring the first and last numbers
 cout<<"\nEnter the first number and last number of the range"; //out put statement
 cin>>firstNum>>secondNum;//receving the first and last number
 sumSquareEven=sumSquareEvenNumbers(firstNum,secondNum); //calling the function and receving the sum
 cout<<"\nthe sum of even squares between the range is:"<<sumSquareEven<<endl; //printing the output that is the sum
 return 0;
}
