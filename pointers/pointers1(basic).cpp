// input output libraries

#include<iostream>

using namespace std;

int main(){
  int a; // Integer variable
  
  int* p = &a; // Pointer variable that returns address of a (This address is random mix of digits that is stored in computer memory whille running a programme)
  
  cout << p << endl; // This will give the address of variable a; even though it has no value it has it own space in memory.
  
  // lets take address of a as 200
  
  cout << * p << endl; // This will give the address of variable a; even though it has no value it has it own space in memory.

  int b = a;

  cout << b << endl; // value of b is should be a garbage value. this should be value that we got for the value of pointer p.

  // now lets create a new variable that has an actual value instead of an empty integer

  int x = 21;

  int* ptr = &x;

  cout << * ptr << endl; // this should print the value of x (not adress as we are printing the value that is  * of ptr)

  // expected output for the above should we the value of x. we can print the adress of ptr that is address of x by either printing ust ptr or &ptr

  return 0;
}

