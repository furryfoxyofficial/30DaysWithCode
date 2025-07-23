// This is a simple encryption that you can do by yourself and exersice it.
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<char,int> MainHash = {{'A',0},{'B',1},{'C',2},{'D',3},{'E',4},{'F',5},{'G',6},
    {'H',7},{'I',8},{'J',9},{'K',10},{'P',11},{'Q',12},{'R',13},{'S',14},{'T',15},{'U',16},{'V',17},
    {'W',18},{'X',19},{'Y',20},{'Z',21},{' ',100}};

    unordered_map<int, char> ReverseHash;
    for (const auto& Rev : MainHash)
    {
        ReverseHash[Rev.second] = Rev.first;
    }

    vector<int> pack;

    string myword;
    cout << "Enter Your Word: ";

    getline(cin, myword);

    for (char c : myword)
    {
        char upperC = toupper(c);
        if (MainHash.find(upperC) != MainHash.end())
        {
            pack.push_back(MainHash[upperC]);
        }
    }

    string decoded;
    long long encoded{};
    for (int num : pack)
    {
        encoded = (encoded * 10) + num;
    }
    for (int num : pack)
    {
        if (ReverseHash.find(num) != ReverseHash.end())
        {
            decoded += ReverseHash[num];
        }
        else
        {
            decoded += '?';
        }
    }
    cout << "Encoded: " << encoded << endl;
    cout << "Decoded: " << decoded << endl;
}
