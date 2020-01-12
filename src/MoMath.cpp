#include "MoMath.h"
#include <iostream>
#include <windows.h>

using namespace std;

int CURRENT_TEST = 0;

/**
MoMath::MoMath()
{
    //ctor
}

MoMath::~MoMath()
{
    //dtor
}**/

namespace MoMath
{
    void MoMathFunctions::printTest()
    {
        cout << CURRENT_TEST << " : Test" << endl;
        CURRENT_TEST++;
        system("PAUSE > null");
    }

    float MoMathFunctions::errorPercent(double a, double b)
    {
        return (a-b)/b;
    }
}
