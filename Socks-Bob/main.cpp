#include <iostream>
#include "add.h"

using namespace std;

int main(int argc, char const *argv[]) {
  int a, b;
  cout << "hello from Socks-Bob\n";
  cin >> a >> b;
  cout << add(a, b) << endl;
  return 0;
}
