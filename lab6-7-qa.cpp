# include<iostream>
using namespace std;
char toUpper(char x) //definig the function with one argument(using call by value)
{
 int y; //declaring a integer variable to store the ASCII of the lowercase charachter
 y=x;  //storing the ASCII in y
 return y-32; //returning the ASCII value of uppercase to main function
}
int main()
{
 char a; //the character variable to be recevied
 cout<<"Input the lower case charachter that you want to change to upper case:";//instruction to the user
 cin>>a; //receving the variable
 cout<<endl<<toUpper(a)<<endl; //outputting the lowercase charachter
 return 0;
}




