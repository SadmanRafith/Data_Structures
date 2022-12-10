#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct abc {
    int x;
    char y;
};
 
int main()
{
    struct abc a = {0,1};
    struct abc *ptr = &a;

    cout << "\n";
    cout << ptr->x << " " << ptr->y << "\n";
    cout << (*ptr).x << " " << (*ptr).y << "\n";

    /*
        Similarly, ptr->x is equivalent to (*ptr).y
    */

    printf("%d", ptr->x);
    cout << " ";
    printf("%d", ptr->y);
    cout << "\n";
    printf("%d", (*ptr).x);
    cout << " ";
    printf("%d", (*ptr).y);


    getch();
}