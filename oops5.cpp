#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id of the employee " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The employee id is " << id << " and this is employee number "<< count <<endl;
    }
};

int Employee:: count;

int main()
{
    Employee vedant, omkar, meet;
    vedant.setData();
    vedant.getData();

    omkar.setData();
    omkar.getData();

    meet.setData();
    meet.getData();

    return 0;
}