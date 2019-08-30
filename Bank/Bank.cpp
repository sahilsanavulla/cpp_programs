/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Bank Program.
* Author  :T0581
* Version :1.0
* Date    :17-07-2019
*
*/


using namespace std;


#include "Bank.h"



// -------------------------------------------------------
// Method      : GetData
// Parameters  : Nil
// Returns     : void
// Description : Member function to input customer data
// -------------------------------------------------------


void CAccount::GetData()
{
    cout << "\nEnter Customer Name : ";
    cin >> m_szCustomerName;
    cout << "Enter Account Number : ";
    cin >> m_nAccountNumber;
}



// -------------------------------------------------------
// Method      : Deposit
// Parameters  : Nil
// Returns     : void
// Description : Member function to input deposit data
// -------------------------------------------------------


void CSavings::Deposit()
{

    cout << "\nEnter the Deposit Amount : ";
    cin >> nDepositAmount;
    m_nSavingsBalance = m_nSavingsBalance + nDepositAmount;
    cout <<"\nBalance Available : ";
    cout << m_nSavingsBalance;
}



// -------------------------------------------------------
// Method      : Balance
// Parameters  : Nil
// Returns     : void
// Description : Member function to display balance
// -------------------------------------------------------


void CSavings::Balance()
{

    cout << "\nBalance Available : ";
    cout << m_nSavingsBalance;
    cout << endl;
}



// -------------------------------------------------------
// Method      : Interest
// Parameters  : Nil
// Returns     : void
// Description : Member function to calculate interest
// -------------------------------------------------------


void CSavings::Interest()
{

    fInterest = m_nSavingsBalance * pow( ( float( 1 ) + ( fRate / float( 100 ) ) ), fYear);
    cout << "\nThe interest amount for 1 Year is  " << fInterest << endl;
    if(fInterest == 0)
    {
        cout << "\n********Please maintain a balance********";
        cout << endl;
    }
}



// -------------------------------------------------------
// Method      : Withdrawal
// Parameters  : Nil
// Returns     : void
// Description : Member function to withdraw cash
// -------------------------------------------------------


void CSavings::Withdrawal()
{
    cout << "Enter the Amount : ";
    cin >> m_nAmount;
    m_nCheck = m_nSavingsBalance - m_nAmount;

    if(m_nCheck < m_nAmount)
    {
        cout << "\nYou have insufficient balance";
        cout << endl;
    }

    else
    {
        m_nSavingsBalance = m_nSavingsBalance - m_nAmount;
        cout << "\nBalance Available : ";
        cout << m_nSavingsBalance;
        cout << endl;
    }
}



// -------------------------------------------------------
// Method      : CurrentDeposit
// Parameters  : Nil
// Returns     : void
// Description : Member function to input current deposit
// -------------------------------------------------------


void CCurrent::CurrentDeposit()
{

    cout << "\nEnter the Deposit Amount :   ";
    cin >> m_nAmount;
    m_nBalance = m_nBalance + m_nAmount;
    cout <<"\nBalance Available : ";
    cout << m_nBalance;
}



// -------------------------------------------------------
// Method      : CurrentBalance
// Parameters  : Nil
// Returns     : void
// Description : Member function to display current balance
// -------------------------------------------------------


void CCurrent::CurrentBalance()
{

    cout << "\nBalance Available : ";
    cout << m_nBalance;
    cout << endl;
}



// -------------------------------------------------------
// Method      : CurrentWithdraw
// Parameters  : Nil
// Returns     : void
// Description : Member function to withdraw
// -------------------------------------------------------


void CCurrent::CurrentWithdraw()
{

    cout << "Enter the Amount : ";
    cin >> m_nWithdraw;
    m_nMin = m_nBalance - m_nWithdraw;
    if(m_nMin < nMinimum)
    {
        cout << " \nPlease maintain a minimum Balance of Rs:100.";
        cout <<"\nElse a fine amount of Rs:30 will be deducted";
        cout << "\nDo you wish to continue(y/n)";
        cin >> m_cOption;
        switch(m_cOption)
        {

        case 'y':
            if(m_nBalance < m_nWithdraw || m_nMin < nFine)

            {
                cout << "\nYou have insufficient balance";
                cout << endl;
            }

            else
            {
                m_nBalance = m_nBalance - m_nWithdraw - nFine;
                cout << "\nBalance Available : ";
                cout << m_nBalance;
                cout << endl;
            }
            break;

        case 'n':
            break;
        }


    }

    else
    {
        m_nBalance = m_nBalance - m_nWithdraw;
        cout << "\nBalance Available : ";
        cout << m_nBalance;
        cout << endl;
    }
}

