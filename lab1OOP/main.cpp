#include <iostream>
#include "complix.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    complix comp1,comp2;
    comp1.real=10;
    comp1.imag=20i;
    comp2=comp1.add(comp1);
    cout<<comp2.real<<+<<comp2.imag<<endl;
    return 0;
}
