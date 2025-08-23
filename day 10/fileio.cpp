#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writer()
{
    ofstream writer("mydoc.txt");
    string text = "This is a simple text for testing the c++ writing skills! \n";
    string text2 = "This is a simple text for ";
    cout << "writing some text..." << endl;
    if (writer.is_open())
    {
        writer << text;
        writer << text2;
        cout << "data written in!" << endl;
    }
    else
    {
        cerr << "Can\'t write text into file." << endl;
    }
}

void reader()
{
    ifstream reader("mydoc.txt");
    string line;
    if (!reader.is_open())
    {
        cerr << "Can't open file!" << endl;
    }
    cout << "reading some text..." << endl;
    while (getline(reader,line))
    {
        cout << "The text in file:" << line << endl;
    }
    reader.close();
}

int main()
{
    int sel;
    cout << "select 1 or 2: ";
    cin >> sel;
    if (sel == 1)
        reader();
    if (sel == 2)
        writer();
}
