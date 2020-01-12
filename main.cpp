#include <iostream>
#include "MoMath.h"

using namespace std;
using namespace MoMath;

int main()
{
    MoMathFunctions::printTest();
    cout << MoMathFunctions::errorPercent(11, 10) *100 << "%" << endl;
    return 0;
}
