#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> blockWord_Db = {"nigga","fuck","sex","orgy","gay","lgbtq"};
    string massage = "",word = "";
    bool isnotappclse = false;
    while (!isnotappclse)
    {
        cout << "Enter massage: ";
        getline(cin,massage);
        stringstream ss(massage);
        bool massage_accept = true;
        while (ss >> word)
        {
            for (const auto& blocked : blockWord_Db)
            {
                if (word == blocked)
                {
                    massage_accept = false;
                    break;
                }
            }
        }
        if (massage_accept)
        {
            cout << "Massage send!" << endl;
        }
        else
        {
            cout << "Massage coantains bad word! currect next one!" << endl;
        }
    }
}
