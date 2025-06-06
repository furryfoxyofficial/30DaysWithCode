#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct studentinfo
{
 int stid;
 string stname;
 int stavg;
};
int main()
{
 vector<studentinfo> database;
 bool isAppClose = false;
 while (!isAppClose)
 {
  int stdid;
  string stdname;
  int stdavg;
  cout << "Enter student id: ";
  cin >> stdid;
  cout << "Enter student name: ";
  cin >> stdname;
  cout << "Enter student avg: ";
  cin >> stdavg;
  if (stdid == -1)
   break;
  else
  {
   studentinfo newstudent = {stdid,stdname,stdavg};
  database.push_back(newstudent);
  }
 }
 for (auto& d : database)
 {
  cout << "student id: " << d.stid << endl;
  cout << "student name:" << d.stname << endl;
  cout << "student avg:" << d.stavg << endl;
 }
}
