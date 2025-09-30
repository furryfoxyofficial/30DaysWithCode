#include <iostream>
#include <vector>

#define LOG(x) cout << x << endl
#define GET(y) cin >> y;
#define GET_AND_PUT(x,y) { cout << x; cin >> y; }

using namespace std;

typedef int SELECTION_NUMB;
typedef int LIST_PARAM_FUNC;
typedef vector<int> LIST_NUMB;

SELECTION_NUMB mynumb;
LIST_NUMB listnumb;

LIST_PARAM_FUNC listparam(LIST_NUMB mainlist, SELECTION_NUMB sel_numb)
{
    for (const auto& the_numb : mainlist)
    {
        if (the_numb == sel_numb)
        {
            return the_numb;
        }
    }
    return -1;
}

int main()
{
    listnumb = {2,1,21,23,564,654,6,8};
    GET_AND_PUT("Enter a number from list: ", mynumb);
    LOG(listparam(listnumb, mynumb));
}
