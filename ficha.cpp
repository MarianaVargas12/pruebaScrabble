#include "ficha.h"
#include "QGraphicsScene"

ficha::ficha (QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
}
    //Asignar imagen a la ficha
    ficha::ficha(char letra){
        switch (letra) {
        case 'A': setPixmap(QPixmap(":/imagenes/A.png"));
            break;
        case 'B': setPixmap(QPixmap(":/imagenes/B.png"));
            break;
        case 'C': setPixmap(QPixmap(":/imagenes/C.png"));
            break;
        case 'D': setPixmap(QPixmap(":/imagenes/D.png"));
            break;
        case 'E': setPixmap(QPixmap(":/imagenes/E.png"));
            break;
        case 'F': setPixmap(QPixmap(":/imagenes/F.png"));
            break;
        case 'G': setPixmap(QPixmap(":/imagenes/G.png"));
            break;
        case 'H': setPixmap(QPixmap(":/imagenes/H.png"));
            break;
        case 'I': setPixmap(QPixmap(":/imagenes/I.png"));
            break;
        case 'J': setPixmap(QPixmap(":/imagenes/J.png"));
            break;
        case 'K': setPixmap(QPixmap(":/imagenes/K.png"));
            break;
        case 'L': setPixmap(QPixmap(":/imagenes/L.png"));
            break;
        case 'M': setPixmap(QPixmap(":/imagenes/M.png"));
            break;
        case 'N': setPixmap(QPixmap(":/imagenes/N.png"));
            break;
        case 'O': setPixmap(QPixmap(":/imagenes/O.png"));
            break;
        case 'P': setPixmap(QPixmap(":/imagenes/P.png"));
            break;
        case 'Q': setPixmap(QPixmap(":/imagenes/Q.png"));
            break;
        case 'R': setPixmap(QPixmap(":/imagenes/R.png"));
            break;
        case 'S': setPixmap(QPixmap(":/imagenes/S.png"));
            break;
        case 'T': setPixmap(QPixmap(":/imagenes/T.png"));
            break;
        case 'U': setPixmap(QPixmap(":/imagenes/U.png"));
            break;
        case 'V': setPixmap(QPixmap(":/imagenes/V.png"));
            break;
        case 'W': setPixmap(QPixmap(":/imagenes/W.png"));
            break;
        case 'X': setPixmap(QPixmap(":/imagenes/X.png"));
            break;
        case 'Y': setPixmap(QPixmap(":/imagenes/Y.png"));
            break;
        case 'Z': setPixmap(QPixmap(":/imagenes/Z.png"));
            break;
        case ' ': setPixmap(QPixmap(":/imagenes/blanca.png"));
            break;
        }

    }
    void ficha::setValor(int valor){
        this->valor = valor;
    }
    void ficha::setLetra(char letra){
        this->letra = letra;
    }
    char ficha::getLetra(){
        return this->letra;
    }
    int ficha::getValor(){
        return this->valor;
    }

    void ficha:: mouseMoveEvent(QGraphicsSceneMouseEvent *event){
        this->setX(event->scenePos().x());
        this->setY(event->scenePos().y());
    }
    void ficha::mousePressEvent(QGraphicsSceneMouseEvent *event){

    }
    void ficha::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

    }
