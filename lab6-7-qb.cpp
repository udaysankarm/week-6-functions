# include<iostream>
using namespace std;
char toLower(char x) //definig the function with one argument(using call by value)
{
 int y; //declaring a integer variable to store the ASCII of the uppercase charachter
 y=x;  //storing the ASCII in y
 return y+32; //returning the ASCII value of lowercase to main function
}
int main()
{
 char a; //the character variable to be recevied
 cout<<"Input the uppercase charachter that you want to change to lower case:";//instruction to the user
 cin>>a; //receving the variable
 cout<<endl<<toLower(a)<<endl; //outputting the lowercase charachter
 return 0;
}




