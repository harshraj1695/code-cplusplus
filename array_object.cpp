#include <iostream>
using namespace std;
class shop
{
    int itemid[110];
    int itemprice[100];
    int counter;

public:
    void initcounter() { counter = 0; }
    void setdata();
    void displaydata();
};
void shop ::setdata()
{
    cout << "enter id of your item no" << counter + 1 << "\n";
    cin >> itemid[counter];
    cout << "enter the prize of your item"
         << "\n";
    cin >> itemprice[counter];
    counter++;
}
void shop ::displaydata()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemid[i] << "is " << itemprice[i] << "\n";
    }
}
int main()
{
    shop dhukan;
    dhukan.initcounter();
    dhukan.setdata();
    dhukan.setdata();
    dhukan.setdata();
    dhukan.displaydata();

    return 0;
}