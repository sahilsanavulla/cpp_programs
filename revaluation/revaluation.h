#ifndef REVALUATION_H_INCLUDED
#define REVALUATION_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define Length 30

using namespace std;

class CTestBase
{
private:
    int m_nInputValueOne;
    int m_nInputValueTwo;
    int m_nSum;

public:
    void InputData();
    void DisplayData();
    void SumData();
};

#endif // REVALUATION_H_INCLUDED
