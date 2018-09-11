

#include <iostream>
using namespace std;
int SUM(int x,int y ) //declaring a function for finding the sum with 2 srguments
{
 return (x+y); //returning the sum to the main function
}
int main() 
{ 
    int a,b,sum;//declaration of the variables in main function
    cout<<"input two numbers\n"; // instruction to the user
    cin >> a>>b; // receving the variables
     sum=SUM(a,b); //calling function
     cout<<"\nthe sum the given two numbers is:"<<sum;//printing the results

    return 0;
}
