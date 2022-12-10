#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    struct EmployeeRecord{
        char name[5];
        int age;
        float salary;
    };
    
    EmployeeRecord x = {"Sam", 22, 1234.56};

    cout << "\n";
    cout << x.age << "\n";
    cout << x.name << "\n";
    cout << x.salary << "\n";
    
    getch();
}