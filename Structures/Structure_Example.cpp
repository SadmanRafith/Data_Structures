#include<iostream>
#include<conio.h>
using namespace std;


struct Smartphone{                                                  //user defined structure/ data type
    string name;
    int storageSpace;
    string color;
    float price;
};


void printSmartphoneInfo(Smartphone s){                             //used function for reusing code
    cout << "Name: " << s.name << "\n";
    cout << "Storage: " << s.storageSpace << "GB" << "\n";
    cout << "Color: " << s.color << "\n";
    cout << "Price: " << s.price << "\n";
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
    cout << "Name: " << smartphone.name << "\n";
    cout << "Storage: " << smartphone.storageSpace << "GB" << "\n";
    cout << "Color: " << smartphone.color << "\n";
    cout << "Price: " << smartphone.price << "\n";

    cout << "\n";
    printSmartphoneInfo(smartphone);
    cout << "\n";
    printSmartphoneInfo(smartphone2);

    getch();
}