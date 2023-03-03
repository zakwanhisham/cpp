#include <iostream>
using namespace std;

/* Preprocessor definition(#define)
 * #define PI 3.14159
 * #define NEWLINE '\n'
 * This method is interpreted as `replacement`, performed by preprocessor.
 * Not very good as const cause the validity of types or syntax involved
 * is not checked
 */
const double PI = 3.14159;
const char NEWLINE = '\n';

int main() {
  double r = 5.0;
  double circle;

  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;
}
