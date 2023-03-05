#include <iostream>
#include <string.h>
using namespace std;
class binary
{
    string s;

public:
    void getdata();
    void putdata();
};
void binary ::getdata()
{
    cout << "enter the string "
         << "\n";
    cin >> s;
}
void binary ::putdata()
{
    int p = 0;
    for (int i = 0; i << s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != 1)
        {
            cout << "incorect binary form";
            p = 1;
            exit(0);
        }
    }
    if (p != 1)
    {
        cout << "correct binary format";
    }
}

int main()
{
    binary d;
    d.getdata();
    d.putdata();
    return 0;
}