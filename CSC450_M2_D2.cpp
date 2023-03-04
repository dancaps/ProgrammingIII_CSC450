//#include<stdio.h>
//
//int main(int argc, char** argv)
//{
//    printf(argv[1]); // The IDE is telling me this is a security flaw
//
//    return 0;
//}


#include<iostream>

using namespace std;


int main() {

    char input1[2];
    char input2[2];

    cout << "Enter input 1: ";
    cin >> input1;
    cout << "Enter input 2: ";
    cin >> input2;
    cout << "This is the input 1: " << input1 << endl;
    cout << "This is the input 2: " << input2 << endl;

    cout << "The memory location of input 1: " << &input1 << endl;
    cout << "The memory location of input 1: " << &input2 << endl;

    int differenceInBytes = (&input2 - &input1) * sizeof(int);
    cout << differenceInBytes << endl;
    return 0;
}

//#include <cstdio>
//#include <cstring>
//#include <iostream>
//
//const char *PASSWORD_FILE = "rictro";
//
//int main()
//{
//    char input[8];
//    char password[8];
//
//    std::sscanf(PASSWORD_FILE, "%s", password);
//
//    std::cout << "Enter password: ";
//    std::cin >> input;
//
//     //Debug prints:
//     std::cout << "Address of input: " << &input << "\n";
//     std::cout << "Address of password: " << &password << "\n";
//     std::cout << "Input: " << input << "\n";
//     std::cout << "Password: " << password << "\n";
//
//    if (std::strncmp(password, input, 8) == 0)
//        std::cout << "Access granted\n";
//    else
//        std::cout << "Access denied\n";
//
//    return 0;
//}