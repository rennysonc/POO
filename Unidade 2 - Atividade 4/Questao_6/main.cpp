#include <iostream>
#include "Gato.h"
#include "Cachorro.h"

int main()
{
    Animal animalDesconhecido("Prea Venenoso");
    Gato gatoh("Gato ");
    Cachorro doghh("Cachorro ");

    std::cout << "Gato, mie!: " << gatoh.mia() << "\nGato, caminhe!: " << gatoh.caminhar() << std::endl;
    std::cout << "Cachorro, late!: " << doghh.late() << "\nCachorro, caminhe!: " << doghh.caminhar() << std::endl;

    return 0;
}