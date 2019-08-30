#include <iostream>
#include <math.h>

#define Length 20

using namespace std;


class CAccount
{
protected:
    char m_szCustomerName[Length];
    int m_nAccountNumber;
    int m_nAccountType;
    int m_nSavingsBalance = 0;
    int m_nBalance = 1000;
    int nNum;
    int nEntry;

    void Switch_1();
    void Switch_2();

public:
 /*   void GetData()
    {
        cout << "Enter Customer Name : ";
        cin >> m_szCustomerName;
        cout << "Enter Account Number : ";
        cin >> m_nAccountNumber;
        GetType();

    }*/

    void GetType(int x)
    {
        //cout << "\nSelect the Account Type(1.SAVINGS / 2.CURRENT): ";
        m_nAccountType=x;
        cin >> m_nAccountType;


        switch(m_nAccountType)
        {
        case 1:
            cout << "\n***SAVINGS***";
            cout << "\n1.Deposit \n2.Display Balance \n3.Interest \n4.Withdrawal";
            cout << "\nSelect your Choice  :  ";
            cin >> nNum;
            Switch_1();
            break;

        case 2:
            cout << "\n***CURRENT***";
            cout << "\n1.Deposit \n2.Display Balance \n3.Withdrawal";
            cout << "\nSelect your Choice  :  ";
            cin >> nEntry;
            Switch_2();
            break;

        default:
            cout << "\nSelect a valid Account Type";
            cout << endl;
          //  GetType();
            break;
        }
    }



    virtual void Deposit()
    {

    }
    virtual void Balance()
    {

    }
    virtual void Withdrawal()
    {

    }
    virtual void Interest()
    {

    }
    virtual void Withdraw()
    {

    }
};

class CSavings : public CAccount
{
public:

    int m_nInterest;
    int m_nAmount;

    void Deposit();
    void Balance();
    void Interest();
    void Withdrawal();



};



class CCurrent : public CAccount

{
public:
    int nWithdraw;
    int nFine = 50;
    int nMinimum = 100;

    void Deposit();
    void Balance();
    void Withdraw();
};




void CAccount::Switch_1()
{
    switch(nNum)
            {
            case 1:
                Deposit();
                break;
            case 2:
                Balance();
                break;
            case 3:
                Interest();
                break;
            case 4:
                Withdrawal();
                break;
            default:
                cout << "\nselect a valid option";
                cout << endl;
//                GetType();
                break;
            }
}


void CAccount::Switch_2()
{
    switch(nEntry)
            {
            case 1:
                Deposit();
                break;
            case 2:
                Balance();
                break;
            case 3:
                Withdraw();
                break;
            default:
                cout << "Select a valid option";
                cout << endl;
//                GetType();
                break;
            }
}


void CSavings::Deposit()
{
    int nDepositAmount;
    cout << "\nEnter the Deposit Amount : ";
    cin >> nDepositAmount;
    m_nSavingsBalance = m_nSavingsBalance + nDepositAmount;
    cout <<"\nBalance Available : ";
    cout << m_nSavingsBalance;
}



void CSavings::Balance()
{

    cout << "\nBalance Available : ";
    cout << m_nSavingsBalance;
    cout << endl;
}



void CSavings::Interest()
{
    float fRate;
    float fYear;
    float fInterest;

    Deposit();
    cout << "\nEnter rate of interest: ";
    cin >> fRate;
    cout << "Enter period of interest: ";
    cin >> fYear;
    fInterest = m_nSavingsBalance * pow( ( float( 1 ) + ( fRate / float( 100 ) ) ), fYear);
    cout << "\nThe interest is " << fInterest << endl;
}




void CSavings::Withdrawal()
{
    cout << "Enter the Amount : ";
    cin >> m_nAmount;
    m_nSavingsBalance = m_nSavingsBalance - m_nAmount;
    cout << "\nBalance Available : ";
    cout << m_nSavingsBalance;
    cout << endl;

}



void CCurrent::Deposit()
{
    int nAmount;
    cout << "\nEnter the Deposit Amount :   ";
    cin >> nAmount;
    m_nBalance = m_nBalance + nAmount;
    cout <<"\nBalance Available : ";
    cout << m_nBalance;
}



void CCurrent::Balance()
{
    cout << "\nBalance Available : ";
    cout << m_nBalance;
    cout << endl;
}

void CCurrent::Withdraw()
{
    cout << "Enter the Amount : ";
    cin >> nWithdraw;
    m_nBalance = m_nBalance - nWithdraw;
    if(m_nBalance < nMinimum)
    {
        cout << "Fine will be imposed";
    }
    else
    {
        cout << m_nBalance;
    }

}






int main()
{   int option;
    cout<<"Enter option";
    cin >> option;
    if(option==1)
    {


    CAccount *Acc;
    CSavings Save;
    Acc = &Save;
    Acc->GetType(option);
    /*CAccount*Ac;
    CCurrent Data;
    Ac = &Data;
    Ac->GetData();*/
    }
    //CSavings Save;
    // Save.GetData();
    //Save.Balance();
    //Save.Withdrawal();
    return 0;
}
