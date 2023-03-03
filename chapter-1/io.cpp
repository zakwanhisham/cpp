/* There are 4 basic input which is:
 * cin - standard input stream
 * cout - standard output stream
 * cerr - standard error (output) stream
 * clog - standard logging (output) stream
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  string mystr;
  float price = 0;
  int quantity = 0;

  cout << "Enter price: ";
  getline(cin, mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline(cin, mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price * quantity << endl;

  return 0;
}
