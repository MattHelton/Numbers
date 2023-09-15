//
//  main.cpp
//  Numbers
//
//  Created by Matt on 9/15/23.
//

#include <iostream>
iterm
int add ( int a, int b)
{
    return a + b;
}

float subtract (int a, int b)
{
    return a - b;
}

int main()
{
    float a =2;
    int b = 545596151; // length of 9 or less
    long f = 3454353456; // length of 10 or more
    float c = 34265.43; // float can only be 6 digits total
    double d = 316.516; // double can only be 6 digits total
    float e = a / b; // division require more precise primitives
    std::string name = "Matt";
    
    
    std::cout << "Int b has the value: " << b << std::endl;
    std::cout << "Int c has the value: " << c << std::endl;
    std::cout << "Int d has the value: " << d << std::endl;
    std::cout << "Int e has the value: " << e << std::endl;
    std::cout << "Int f has the value: " << f << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Nine plus ten equals "<< add( 9, 10) << std::endl;
}
