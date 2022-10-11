#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int credits;
    float cgpa;
};

int main()
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Number of Credits Completed: ";
    cin >> s.credits;
    cout << "CGPA: ";
    cin >> s.cgpa;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Credits: " << s.credits << endl;
    cout << "CGPA: " << s.cgpa << endl;
    return 0;
}
