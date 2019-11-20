#include <iostream>
#include <fstream>

using namespace std;

void personnel ()
{
  string pquery;
  cout << "you have chosen to speak to Karel from Personnel" << endl;
  cout << "Please submit your question and allow up to 24 hours for review: " << endl;
  cin >> pquery;
  
}
void sensitivity()
{
  string squery;
  cout << "You have chosen to speak to George from Sensitivity training" << endl;
  cout << "Please submit your question and allow up to 24 hours for review: " << endl;

  cin >> squery;

}
void records()
{
string rquery;
cout << "You have chosen to speak to Dave from Records" << endl;
cout << "Please submit your question and allow up to 24 hours for review: " << endl;
cin >> rquery;
cout << rquery;

}
void showMenu()
{
  cout << "\nWhat department in HR  would you like to contact" << endl
  << "1: Personnel - Karel" << endl
  << "2: Sensitivity Training - George" << endl
  << "3. Records - Dave" << endl;
  cout << "Please enter input ";
}
void handleOption(int option)
{
 int opt;
 
    if (option ==1)
    {
      personnel();

    }
    else if(option ==2)
    {
      sensitivity();

    }
    else if(option ==3)
    {
      records();
    }
}
void printPersonnel()
{
  ofstream file;
  file.open("personnel.txt", ios::out); 
}
void printSensitivity()
{
  ofstream file;
  file.open("sensitivity.txt", ios::out);
}

  void printRecords()
{
  ofstream file;
  file.open("records.txt", ios::out); //
}

int main()
{
  int option;
showMenu();
cin >> option;
handleOption(option);

  return 0;

}