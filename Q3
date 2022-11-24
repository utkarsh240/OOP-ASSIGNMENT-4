/*Write a program to input the roll number of a student from keyboard and display to output screen if all the following constraints are satisfied,otherwise manage with proper exceptions.
i) first two digits of the roll number must be last two digits of current year(yyyy).
ii) roll number should be all numeric and exactly 7 digits
iii) last three digits of roll number can not be all zero
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string roll;
    int year;
    try
    {
        cout << "Enter the roll number: ";
        cin >> roll;
        cout << "Enter the year: ";
        cin >> year;
        if (roll.length() != 7)
            throw 1;
        if (roll[0] != '2' || roll[1] != '2')
            throw 2;
        if (roll[4] == '0' && roll[5] == '0' && roll[6] == '0')
            throw 3;
        cout << "Roll number is valid" << endl;
    }
    catch (int e)
    {
        switch (e)
        {
            case 1:
                cout << "Roll number must be 7 digits" << endl;
                break;
            case 2:
                cout << "First two digits must be the last two digits of current year" << endl;
                break;
            case 3:
                cout << "Last three digits can not be all zero" << endl;
                break;
        }
    }
    return 0;
}


