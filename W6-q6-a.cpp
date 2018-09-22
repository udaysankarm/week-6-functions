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
int main() 
{
 int firstNum,lastNum,sumEven;//decalring the first and last numbers
 cout<<"\nEnter the first number and last number of the range"; //out put statement
 cin>>firstNum>>lastNum;//receving the first and last number
 sumEven=sumEvenNumbers(firstNum,lastNum); //calling the function
 cout<<"\nthe sum of even numbers between the range is:"<<sumEven<<endl; //printing the output that is the sum of even numbers
 return 0;
}
