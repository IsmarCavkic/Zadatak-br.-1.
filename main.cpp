#include <iostream>
using namespace std;

// Za unešeni poluprečnik r ispisati obim i površinu kruga

int main() {
  float r, obim, povrsina;

  cout<< "Unesite poluprečnik kruga"<< endl;
  cin>> r;
  obim = 2 * 3.14 *r;
  povrsina = r * r * 3.14; 
  cout<< "Obim kruga je "<< obim << " a površina "<< povrsina<< endl;

return 0;
}