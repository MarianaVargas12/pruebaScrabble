#define NODO_H
#include "ficha.h"
#include <iostream>

class nodo {
private:

    ficha* valor = nullptr;
    nodo* siguiente = nullptr;
    nodo* anterior = nullptr;
    nodo* arriba = nullptr;
    nodo* abajo = nullptr;
    int x= 0;
    int y=0;
    bool estado=false;
    bool puntosAsignados=false;
    int puntuacion;

public:
    void setValor(ficha ficha);
    ficha getValor();
    void setSiguiente(nodo* nodo);
    nodo* getSiguiente();
    void setAnterior(nodo* nodo);
    nodo* getAnterior();
    void setArriba(nodo* nodo);
    nodo* getArriba();
    void setAbajo(nodo* nodo);
    nodo* getAbajo();
    void setX(int x);
    void setY(int y);
    int getX();
    int gety();
    void setEstado(bool estado);
    bool getEstado();
    void setPuntosAsignados(bool estado);
    bool getPuntosAsignados();
    void setPuntuacion(int puntuacion);
    int getPuntuacion();
    
    

    nodo(ficha* ficha,nodo*siguiente);
    nodo();

};
