/* MD.TAHSIN HASIB 22-46026-1

    Write a C++ program with appropriate data structure to keep records of 15 students. 
    Each student will have the following information:

    1.Unique ID (you can use integer for this)
    2.Number of semesters complete
    3.Number of credits completed
    4.CGPA

    (i)   Print all the student’s ID whose CGPA is more than 3.50.
    (ii)  Print all the student’s ID who has completed more than 50 credits.
    (iii) Print all the student’s ID who has completed minimum 2 semesters and minimum 28 credits.

*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Student{
    int uId;
    int sem;
    int credit;
    float cgpa;
};

int main()
{
    struct Student s[15];
    int i, n = 0;
    bool isUsed[15] = {0};

    cout << "\n--------------------------------------------------\n";

    for(i = 0; i<14; i++){
        cout<< "Please enter the id of serial no of " << (i+1) << " student: "<< endl << endl;
        cout<< "Enter Student ID: ";
        cin>>n;

        if(n>= 0 || n<=14){
            if(isUsed[n] == false){

                s[n].uId = n;
                isUsed[n] = true;
                cout<< "Enter Completed Semester Numbers: ";
                cin>> s[n].sem;
                cout<< "Enter Completed Credits: " ;
                cin>> s[n].credit;
                cout<< "Enter CGPA: ";
                cin>> s[n].cgpa;
            }
            else{
                cout<< "Student ID already taken: "<<endl;
                i--;
            }
        }

        else{
            cout<< "Invalid! Valid ID from 0 to 14"<<endl;
            i--;
        }
    }

    cout<< "Students who have CGPA more than 3.50: "<<endl;

    for(int i=0; i<14; i++){
        if(s[i].cgpa> 3.50){
            cout<< "Student ID: "<< s[i].uId<<endl;
        }
    }

    cout<< "Students who have completed more than 50 credits: "<<endl;

    for(int i=0; i<14; i++){
        if(s[i].credit> 50){
            cout<< "Student ID: "<< s[i].uId<<endl;
        }
    }

    cout<< "Students who have completed minimum 2 semesters and minimum 28 credits: "<<endl;

    for(int i=0; i<14; i++){
        if(s[i].sem>= 2 && s[i].credit>=28){
            cout<< "Student ID: "<< s[i].uId<<endl;
        }
    }

    getch();
}
