#include <iostream>

#include "rw.h"

using namespace std;

int main()
{
    cout << "Hello this is furry fox file process test!" << endl;
    int sel;
    cin >> sel;
    RW *rw = new RW;
    M_Result result;
    if (sel == 1)
        result = rw->Read();
    if (sel == 2)
        result = rw->Write();
    cout << result << endl;
    delete rw;
}
