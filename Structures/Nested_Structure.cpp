#include<iostream>
#include<conio.h>
using namespace std;


struct Smartphone{                                                  //user defined structure/ data type
    string name;
    int storageSpace;
    string color;
    float price;
};


struct Person{
    string name;
    int age;
    Smartphone sphn;
};


void printSmartphoneInfo(Smartphone s){                             //used function for reusing code
    cout << "Name: " << s.name << "\n";
    cout << "Storage: " << s.storageSpace << "GB" << "\n";
    cout << "Color: " << s.color << "\n";
    cout << "Price: " << s.price << "\n";
}

void printPersonInfo(Person p){                                     //used function for Person to print Smartphone as well
    cout << "Person Name: " << p.name << "\n";
    cout << "Person Age: " << p.age << "\n";
    printSmartphoneInfo(p.sphn);
}

int main()
{
    Smartphone smartphone;

    smartphone.name = "Iphone 12";
    smartphone.storageSpace = 32;
    smartphone.color = "Black";
    smartphone.price = 999.99;

    Smartphone smartphone2;

    smartphone2.name = "Samsung Galaxy 12";
    smartphone2.storageSpace = 64;
    smartphone2.color = "Gold";
    smartphone2.price = 888.99;

    
    cout << "\n";
    Person p;
    p.name = "Tahsin";
    p.age = 21;
    p.sphn = smartphone2;
    printPersonInfo(p);


    getch();
}