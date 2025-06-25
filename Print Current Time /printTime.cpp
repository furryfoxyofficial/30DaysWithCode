#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
int main()
{
    time_t mytime;
    struct tm* time_info;
    char output[80];

    time(&mytime);
    time_info = localtime(&mytime);
    strftime(output,sizeof(output),"%d-%m-%Y %H:%M:%S",time_info);

    cout << output;
}
