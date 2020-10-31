#include "AD.h"

int main()
{
    Arreglo_Dinamico<string>arreglo;

    std::cout<< "Strings insertados al inicio: "<<endl;
    arreglo.Insertar_inicio("4");
    arreglo.Insertar_inicio("3");
    arreglo.Insertar_inicio("2");
    arreglo.Insertar_inicio("1");
    for(size_t i=0;i<4;i++)
    {
        std::cout<< arreglo[i]<<endl;
    }
    system("pause");
    std::cout<<endl;

    std::cout<< "Strings insertados al final: "<<endl;
    arreglo.Insertar_final("5");
    arreglo.Insertar_final("6");
    arreglo.Insertar_final("7");
    arreglo.Insertar_final("8");
    for(size_t i=4;i<8;i++)
    {
        std::cout<< arreglo[i]<<endl;
    }
    system("pause");
    system("cls");

    std::cout<< "Strings del inicio eliminado: "<<endl;
    arreglo.Eliminar(1);
    arreglo.Insertar_inicio("4");
    arreglo.Insertar_inicio("3");
    arreglo.Insertar_inicio("2");
    arreglo.Insertar_inicio("1");
    arreglo.Eliminar_inicio();
    for(size_t i=0;i<3;i++)
    {
        std::cout<< arreglo[i]<<endl;
    }
    system("pause");
    std::cout<<endl;

    std::cout<< "String de la posicion 2 reemplazado por 10: "<<endl;
    arreglo.Insertar_inicio("4");
    arreglo.Insertar_inicio("2");
    arreglo.Insertar_inicio("3");
    arreglo.Insertar_inicio("1");
    arreglo.insertar("10",2); //imprim


    for(size_t i=0;i<4;i++)
    {
        std::cout<< arreglo[i]<<endl;
    }
    system("pause");
    std::cout<<endl;



    return 0;
}
