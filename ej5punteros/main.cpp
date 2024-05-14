
#include <iostream>
using namespace std;
int main() {
   int x[5];

   int *a;

   for (int i=0; i <5; i++){
       a = &x[i];
       cout << a << endl;
   }
    return 0;
}
