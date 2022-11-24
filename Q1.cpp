// wap to create a template class that accepts the details of two students and display them in output  screen

#include <iostream>
#include <string>

using namespace std;

template <class T1, class T2>
class student
{
    T1 name;
    T2 roll;

    public:
    void getdata(T1 n, T2 r)
    {
        name = n;
        roll = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main()
{
    student<string, int> s1;
    s1.getdata("Rohan", 101);
    s1.display();

    student<string, int> s2;
    s2.getdata("Sohan", 102);
    s2.display();

    return 0;
}




