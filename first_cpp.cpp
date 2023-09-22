// author-akshat khatri
// date-20-08-2023
//  using basic input and output in my first cpp program

#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    char gender;
    bool is_married = false;

    cout << "please enter your name" << endl;
    getline(cin, name);
    cout << "enter your age" << endl;
    cin >> age;
    cout << "enter your gender" << endl;
    cin >> gender;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;

    cout << "is married"
         << " - " << std::boolalpha << is_married;
    return 0;
}
