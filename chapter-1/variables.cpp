#include <iostream>
// To use string, need to include `string`
#include <string>
using namespace std;

int main() {
  // declaring variable
  /* Different way to declare a variable
   * int a = 5;
   * int b(3);
   * int c{2};
   * int result;
   */
  int a, b;
  int result;

  // process
  a = 5;
  b = 2;
  a += 1;
  result = a - b;

  // print out the result
  cout << result << endl;

  // declare string
  string mystring;
  mystring = "This is a string";
  cout << mystring << endl;
  mystring = "This is a different string";
  cout << mystring << endl;
  // terminate program
  return 0;
}
