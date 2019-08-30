/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Bank Program.
* Author  :T0581
* Version :1.0
* Date    :17-07-2019
*
*/



#include "Bank.h"

using namespace std;


int main()
{

    int nAccountType;
    int nNum;
    int nEntry;
    CAccount Acc;
    Acc.GetData();




    cout << "\n1.SAVINGS";
    cout <<"\n2.CURRENT";
    cout << "\nSelect the Account Type  :  ";
    cin >> nAccountType;



    if(nAccountType == 1)
    {

        CSavings obj;
        do
        {
        cout << "\n\n***SAVINGS***";

            cout << "\n\n1.Deposit \n2.Display Balance \n3.Interest \n4.Withdrawal \n5.Exit";
            cout << "\n-----Select your Choice-----  :  ";
            cin >> nNum;
            switch(nNum)
            {
            case 1:
                obj.Deposit();
                break;
            case 2:
                obj.Balance();
                break;
            case 3:
                obj.Interest();
                break;
            case 4:
                obj.Withdrawal();
                break;
            case 5:
                cout << "\n\n********THANK YOU********";
                cout << endl;
                break;

            default:
                cout << "\nselect a valid option";
                cout << endl;
                break;
            }
        }
        while( nNum != 5);

    }
    else if(nAccountType ==2)
    {

        CCurrent obbj;
        do
        {
        cout << "\n\n***CURRENT***";

            cout << "\n\n1.Deposit \n2.Display Balance \n3.Withdrawal \n4.Exit";
            cout << "\n-----Select your Choice-----  :  ";
            cin >> nEntry;
            switch(nEntry)
            {
            case 1:
                obbj.CurrentDeposit();
                break;
            case 2:
                obbj.CurrentBalance();
                break;
            case 3:
                obbj.CurrentWithdraw();
                break;
            case 4:
                cout <<"\n********THANK YOU********";
                cout << endl;
                break;
            default:
                cout << "Select a valid option";
                cout << endl;
                break;
            }
        }
        while(nEntry != 4);

    }
    else
    {
        cout << "\nSelect a valid Account Type";
        cout << endl;


    }






    return 0;
}
