/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{

  char letter;
  letter = 'A';
  int number;
  number = 100;
  float decimal = 7.5;
  double pi = 3.14159;
  bool isTrue = false;

  cout << "Hello World" << endl;
  cout << "char letter: " << letter << endl;
  cout << "int number: " << number << endl;
  cout << "float decimal: " << decimal << endl;
  cout << "double pi: " << pi << endl;
  cout << "bool isTrue " << isTrue << endl;

  float nums[3];
  nums[0] = 1.5; nums[1] = 2.75; nums[2] = 3.25;
  char name[5] = {'m','i', 'k','e','\0'};
  int coords[2] [3] = {{1, 2, 3,} , {4, 5, 6, }};
  
  cout << "nums [0]: "<<nums[0]<<endl;
  cout << "nums [1]: "<<nums[1]<<endl;
  cout << "nums [2]: "<<nums[2]<<endl;
  cout << "name [0]: "<<nums[0]<<endl;
  cout << "Text string: "<<name<<endl;
  cout << "coords[0] [2]: "<<coords[0][2]<<endl;
  cout << "coords[1] [2]: "<<coords[1][2]<<endl;

  return 0;
}
