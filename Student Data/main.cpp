
/*//To create a file
#include <iostream>
#include<fstream>

using namespace std;

int main()
{
   ofstream file;
   file.open("D:/users/Sahil Sanavulla/work.txt",ios::out);

   if(!file)
   {
       cout<<"Error in creating file!!!";
       return 0;
   }

   cout<<"File created successfully.";


   file.close();

   return 0;
}
*/






/*#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	const char *fileName="D:/users/Sahil Sanavulla/work.txt.";


	ifstream file;


	file.open(fileName,ios::in);
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;
		return -1;
	}


	while (!file.eof())
	{
		file >> noskipws >> ch;
		cout << ch;
	}

	file.close();

	return 0;
}*/





/*#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   fstream file;


   file.open("D:/users/Sahil Sanavulla/work.txt",ios::out);

   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }

   cout<<"File created successfully."<<endl;

   file<<"ABCD.";

   file.close();


   file.open("D:/users/Sahil Sanavulla/work.txt",ios::in);

   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }


   char ch;
   cout<<"File content: ";

   while(!file.eof())
   {
       file>>ch;
       cout<<ch;
   }

   file.close();

   return 0;
}
*/



/*#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[30];
    int age;
    fstream file;

    file.open("D:/users/Sahil Sanavulla/work.txt",ios::out);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"\nFile created successfully."<<endl;


    cout<<"Enter your name: ";
    cin.getline(name,30);
    cout<<"Enter age: ";
    cin>>age;

    file<<name<<" "<<age<<endl;

    file.close();
    cout<<"\nFile saved and closed succesfully."<<endl;


    file.open("D:/users/Sahil Sanavulla/work.txt",ios::in);
    if(!file){
        cout<<"Error in opening file..";
        return 0;
    }
    file>>name;
    file>>age;

    cout<<"Name: "<<name<<",Age:"<<age<<endl;
    return 0;
}
*/



#include <iostream>
#include <fstream>

#define Name_Length 30
#define Course_Length 40
#define MaxLength 50

using namespace std;


class CStudent
{
    private:
        char m_szName[Name_Length];
        char m_cGender;
        char m_szCourse[Course_Length];
        string m_szDate;

    public:
        void GetData()
        {
            cout << "\nEnter name : ";
            getchar();
            cin.getline(m_szName, Name_Length);
            cout << "Enter Gender(M/F) : ";
            cin >> m_cGender;
            cout << "Enter Course : ";
            getchar();
            cin.getline(m_szCourse, Course_Length);
            cout<<"Enter the joining date(DD-MM-YYYY):";
            getline(cin, m_szDate);
        }

        void ShowData(void)
        {
            cout << "\nName : ";
            cout << m_szName;
            cout << "\nGender : ";
            cout << m_cGender;
            cout << "\nCourse : ";
            cout << m_szCourse;
            cout << "\nDate of Join : ";
            cout << m_szDate;
            cout << endl;
        }
};

int main()
{
    CStudent Stud[MaxLength];
    int nStudentNumber;
    int nCount = 0;

    //ofstream file;
fstream file;


    file.open("D:/users/Sahil Sanavulla/work.txt",ios::out);


    cout << "\nEnter Number of Students : ";
    cin >> nStudentNumber;

    for( nCount = 0; nCount < nStudentNumber; nCount++)
    {

        Stud[nCount].GetData();
        file.write((char*)&Stud[nCount],sizeof(Stud[nCount]));
    }
    cout<<"\nFile created successfully."<<endl;


    file.close();
    cout<<"\nFile saved and closed succesfully."<<endl;


    //ifstream file;

    file.open("D:/users/Sahil Sanavulla/work.txt",ios::in);

   for( nCount = 0; nCount < nStudentNumber; nCount++)
     {
         file.read((char*)&Stud[nCount],sizeof(Stud[nCount]));
         Stud[nCount].ShowData();
     }





    file.close();

    return 0;
}
