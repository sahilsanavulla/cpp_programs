#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

#include <iostream>
#include <math.h>

#define Length 20



/**
* Class CAccount
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :17-07-2019
*
*/

class CAccount
{
protected:
    char m_szCustomerName[Length];
    int m_nAccountNumber;
    int m_nAmount;

public:
    void GetData();


};



/**
* Class CSavings
* <Derived Class>
* Author  :T0581
* Version :1.0
* Date    :17-07-2019
*
*/


class CSavings : public CAccount
{
public:

    int m_nInterest;
    int nDepositAmount = 0;
    int m_nSavingsBalance = 0;
    int m_nCheck;
    float fRate = 5;
    float fYear = 1;
    float fInterest;



    void Deposit();
    void Balance();
    void Interest();
    void Withdrawal();


};



/**
* Class CCurrent
* <Derived Class>
* Author  :T0581
* Version :1.0
* Date    :17-07-2019
*
*/


class CCurrent : public CAccount

{
public:

    int m_nBalance =1000;
    int m_nWithdraw;
    int nFine = 30;
    int nMinimum = 100;
    char m_cOption;
    int m_nMin;


    void CurrentDeposit();
    void CurrentBalance();
    void CurrentWithdraw();
};


#endif // BANK_H_INCLUDED
