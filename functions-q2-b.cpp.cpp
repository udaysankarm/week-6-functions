
#include <iostream>

using namespace std;

void SUM (int &x, int &y)		/*declaring a function for finding the sum with 2 arguments*/

{

  cout < (x + y);	//returning the sum to the main function
  
  
 
}


int main ()

{
 
 int a, b, sum;		//declaration of the variables in main function

 cout << "input two numbers\n";	// instruction to the user
 
 cin >> a >> b;		// receving the variables
 
 cout << "\nthe sum the given two numbers is:" << SUM (a, b);	//calling function and printing the results
  
 return 0;

}
