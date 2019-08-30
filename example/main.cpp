#include<iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


using namespace std;

int main()
{


    int DateCheck(char m_szJoining[ARRAY_SIZE])
{
   string day = "" ;
   string month = "";
   string year = "";

   int nIterator;
   int nDay;
   int nMonth;
   int nYear;


   for( nIterator = 0; nIterator < 10; nIterator++ )
   {
       if(nIterator < 2)
       {
           day = day + m_szJoining[nIterator];
       }
       else if( nIterator > 2 && nIterator < 5 )
       {
           month += m_szJoining[nIterator];
       }
       else if(nIterator > 5 && nIterator < 10 )
       {
           year += m_szJoining[nIterator];
       }
   }

   nDay = atoi(day.c_str());
   nMonth = atoi(month.c_str());
   nYear = atoi(year.c_str());

   if( nDay < 1 || nDay > 31 || nMonth < 1 || nMonth > 12 || nYear < 1950 || nYear > 2019 )
   {
       cout << "\n\tInvalid Date input!" << endl;
       return 0;
   }
   else
   {
       return 1;
   }
}



    /*
    double dData;
    char chData[20];
    cout << "\nEnter the value : ";
    cin >> chData;
    dData = atof(chData);
    if(dData == 0)
    {
        cout << "Invalid Salary";
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << dData;
    }

    */
    return 0;
}
