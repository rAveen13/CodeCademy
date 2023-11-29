#include <iostream>
#include <cmath>
using namespace std;

double a, b, c;
double root1, root2;

int main() {

  cout << "Enter a: " << endl;
  cin >> a;

  cout << "Enter b: " << endl;
  cin >> b;

  cout << "Enter c: " << endl;
  cin >> c;

  root1 = (-b + sqrt(b * b - 4 * a * c))  / (2 * a);
  root2 = (-b - sqrt(b * b - 4 * a *c)) / (2 * a);

  cout << "Root 1 is " << root1 << endl;
  cout << "Root 2 is " << root2 << endl;

  return 0;

}