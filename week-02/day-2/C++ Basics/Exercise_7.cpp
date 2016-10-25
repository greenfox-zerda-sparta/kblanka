#include <iostream>
#include <string>

using namespace std;

int main() {
  char g1 = 'a';
  double g2 = 12.345;
  if (sizeof(g1)>sizeof(g2)){
	  cout << "g1 is stored in more bytes than g2," << endl;
  	  cout << "because g1 stored in " << sizeof(g1) << " bytes and g2 is stored in " << sizeof(g2) << "." << endl;
  }
  else
	  cout << "g2 is stored in more bytes than g1," << endl;
	  cout << "because g2 stored in " << sizeof(g2) << " bytes and g1 is stored in " << sizeof(g1) << "." << endl;

  // Tell if g1 is stored in more bytes than g2

  return 0;
}
