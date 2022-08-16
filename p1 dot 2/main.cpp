//
//  main.cpp
//  p1 dot 2
//
//  Created by Aryaman Bhatia on 16/08/22.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello, my name is Hal!\n";
    cout << "What is your name?\n";
    string user_name;
    getline(cin, user_name);
    cout << "Hello " << user_name << " I am glad to meet you!\n";
    
}

