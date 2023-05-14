/*CONVERTIR NUMEROS ARABICOS A ROMANOS*/
#include <iostream>
#include <string>

std::string convertir_num(int &numero);

int main (void)
{
    int number;
    std::cout << "INGRESE EL NUMERO ARABICO, -1 PARA SALIR";
    std::cin >> number;

    while(number != -1 )
    {
        if( number <= 1000 )
        {
        std::cout << "EL NUMERO ROMANO ES : " << convertir_num(number);    
        std::cout << "\nINGRESE EL NUMERO ARABICO, -1 PARA SALIR: ";
        std::cin >> number;
        } else{ 
        std::cout << "PINCHE NUMERO MAS LARGO QUE MI POLLA ALV QUE FLOJERA HACER UN ALGORITMO PARA ESO Xd";
        std::cout << "\nINGRESE EL NUMERO ARABICO, -1 PARA SALIR: ";
        std::cin >> number;
        }
    }
    
}

std::string convertir_num( int &numero)
{
    std::string numero_conver = {""};
    double arabico [ ] = { 1000, 900 , 500 , 400 , 100 , 90 , 50, 40, 10, 9 , 5, 4, 1};
    std::string roman [ ] = {"M", "CM", "D" , "CD" , "C" , "XC" , "L", "XL" , "X" , "IX" , "V" , "IV" , "I"};
    bool escape{true};

        for(int i{0} ; i < 13 ; ++i) //AQUI VA A DESPLAZAR TODAS LAS POSICIONES DEL VECTOR
        {
            while( numero >= arabico [ i ] )
            {
                numero_conver += roman [ i ];
                numero -= arabico [ i ];
                
            }
        }

    return numero_conver;
}