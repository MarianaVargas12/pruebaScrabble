#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

class lista
{
public:
    nodo* Head = 0;
    void insertarFinal(nodo *nuevoNodo);
    void insertarInicio(nodo* nuevoNodo);
    void display();

    lista();
};

#endif // LISTA_H
