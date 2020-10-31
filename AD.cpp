#include "AD.h"

Arreglo_Dinamico::Arreglo_Dinamico()
{
    arreglo=new string[MAX];
    cont=0;
    tam=MAX;
}

Arreglo_Dinamico::~Arreglo_Dinamico()
{
    delete[] arreglo;
}

void Arreglo_Dinamico::Insertar_final(const string &v)
{
    if(cont==tam)
    {
        expandir();
    }
    arreglo[cont]=v;
    cont++;
}

void Arreglo_Dinamico::Insertar_inicio(const string &v)
{
    if(cont==tam)
    {
        expandir();
    }

    for(size_t i=cont;i>0;i--)
    {
        arreglo[i]=arreglo[i-1];
    }
    arreglo[0]=v;
    cont++;
}

void Arreglo_Dinamico::expandir()
{
    string *nuevo=new string[tam+MAX];
    tam=tam+MAX;
    for(size_t j=0;j<cont;j++)
    {
        nuevo[j]=arreglo[j];
    }
    delete[] arreglo;
    arreglo=nuevo;
}

size_t Arreglo_Dinamico::size()
{
    return cont;
}
