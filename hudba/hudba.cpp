// hudba.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "hudheadcpp.h"
#include <iostream>

int main()
{

    add("Scooter", "Wicked!", 1996);
    add("POD", "Satellite", 2001);
    add("Nickelback", "Hesher", 1996);
    add("Disturbed", "Immortalized", 2015);
    add("Saliva", "Saliva", 1997);

    printf("Zotriedenie podla interpreta:\n\n");
    printf("--Interpret---Album-------Rok\n");
    show(NULL);
    printf("\n");

    char znak;
    printf("Zadajte pismeno na ktore sa ma zacinat interpret:\n\n");
    scanf_s("%c", &znak, 1);
    show(znak);

    //getchar();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
