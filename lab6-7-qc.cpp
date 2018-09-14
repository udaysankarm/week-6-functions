# include<iostream>
using namespace std;
char toLower(int y) //definig the function with one argument(using call by value)for getting the ASCII of charachter
{
 return y+32; //returning the ASCII value of lowercase to main function
}
char toUpper(int y) //definig the function with one argument(using call by value)for getting the ASCII of charachter
{
 return y-32; //returning the ASCII of uppercase charachter to main function 
}
int main()
{
 char a; //the character variable to be recevied
 int t;
 cout<<"Input the  charachter that you want to change:";//instruction to the user
 cin>>a; //receving the variable
 t=a; //t store the ASCII value
 if(t<123&&t>96) //condition to check whether it is lowercase
 {
  cout<<endl<<toUpper(t)<<endl; //outputting the uppercase charachter
 }
 else if(t>64&&t<91)//condition to check whether it is uppercase
 {
  cout<<endl<<toLower(t)<<endl; //outputting the lowercase charachter
 }
 else
 {
  cout<<"what you have entered is not a charachter!!"<<endl; //output if the enter charachter is not a letter
 }
 return 0;
}




