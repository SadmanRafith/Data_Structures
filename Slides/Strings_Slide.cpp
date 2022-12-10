#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
 
int main()
{

    /*
        An array to contain 5 character values ('H', 'e', 'l', 'l', 'o') of 
        type char called mimo could be represented like this: 
        
        char mimo [5]={ 'H', 'e', 'l', 'l', 'o'};

    */

    char mimo[5] = {'h','e','l','l','o'};
    cout << mimo[0];                            //value of index=0

    /*
        But, to represent the same text as string in C/C++ double quotation (") 
        is used to bound the text. And, a NULL character is added at the end of 
        the text. So, because of this NULL, we need to declare an additional 
        slot in the array. 
        
        char mimo [6]= "Hello";

    */

    char minu[6] = "Hello";                     // 'h', 'e', 'l', 'l', 'o', '/0'
                                                //  0    1    2    3    4     5

    //null-terminated sequences of characters
    cout << "\n\n";

    char Question[] = "Please enter first name: ";
    char Greeting[] = "Hello";
    char FirstName[80];

    cout << Question;

    //cin >> FirstName;                         //***Notes Below***
    cin.get(FirstName, 80);

    cout << Greeting << " , " << FirstName;


    /*
        Instead of asking for the first name only, if we would have asked for the 
        whole name, this program might not work properly. That is, if we would have 
        given input John Rambo instead of only John the output will be as follows – 

            Please, enter your first name: John Rambo
            Hello, John!

        Still it shows John after Hello, not John Rambo. As we know, that cin always stops 
        at white spaces during taking input. So, after taking John as input cin receives a 
        space indicating the end of input. So it never even goes for Rambo. To overcome this, 
        there is another function cin.get() which takes only 2 parameters: variable name of 
        the string and its size (maximum size of the character array). 


        So just writing cin.get(FirstName,80); instead of cout<<Question; will give the 
        following output –

            Please, enter your first name: John Rambo
            Hello, John Rambo!

    */

    //String Handeling functions
    char s1[] = "Tahsin";
    char s2[] = "Hasib";
    char str[] = "Fariha";

    /*
        strlen(str) calculates the length of str; the total number of characters from
        the given starting adddress by str until null encounters.
    */

    cout << "\n\n-----------------strlen(str)------------------\n";
    cout << strlen(str);

    /*
        strcmp(s1, s2) compares two strings; 

            if s1 and as2 are equal then strcmp returns 0;
            if s1 is alphabetically(compares ASCII value) lower than s2 then returns <0
            if s1 is alphabetically(compares ASCII value) bigger than s2 then returns >0 
    */


    cout << "\n\n-----------------strcmp(s1, s2)------------------\n";
    cout << strcmp(s1, s2);

    /*
        strcpy(s1, s2) copies a string s2 to another string s1; all the characters from
        the given starting index by s2 until a NULL encounters, will be copied in
        sequencially from the NULL character at the end of s1
    */

    cout << "\n\n-----------------strcpy(s1, s2)------------------\n";
    cout << strcpy(s1, s2);

    /*
        strcat(s1, s2) concatenates(joins) two strings; joins string s2 with string s1
        in the string s1;
    */

    cout << "\n\n-----------------strcat(s1, s2)------------------\n";
    cout << strcat(s1, s2);


    getch();
}