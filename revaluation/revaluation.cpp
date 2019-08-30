#include "revaluation.h"

using namespace std;

void CTestBase :: InputData()
{
    cout << "Enter first number:  ";
    cin >> m_nInputValueOne;
    cout << "Enter second number:  ";
    cin >> m_nInputValueTwo;
}


void CTestBase :: SumData()
{
    m_nSum = m_nInputValueOne + m_nInputValueTwo;
}


void CTestBase :: DisplayData()
{
     m_nSum = m_nInputValueOne + m_nInputValueTwo;
    cout << "Sum = ";
    cout << m_nSum;
}
