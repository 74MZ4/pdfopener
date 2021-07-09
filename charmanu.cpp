#include <iostream>
#include "header.h"


int main(){

    int x = 0;

    std::cout << "VIEL ERFOLG!!" << std::endl;
    std::cout << "Vorlesungsnummer: ";
    std::cin >> x;

    while(x < 1 || x > 14){

        std::cout << "Error! Number must be between 1-14, Enter another number: ";
        std::cin >> x;
    }

    inputFunc(x);

    return 0;
}