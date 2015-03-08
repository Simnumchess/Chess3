#ifndef ECHIQUIER_H_INCLUDED
#define ECHIQUIER_H_INCLUDED
#include "Piece.h"
//#include "position_echecs.h"
using namespace std;

class Echiquier
{
    public:
    int dim;
    Piece **echectab; //le tableau 8*8 de pointeurs de pieces
    bool casevide(int l,int c); //prend une case de coordonee (l,c) et regarde si la case est vide
    void print(); //print un echiquier
    Echiquier(); //initialisation d'un echiquier
    Echiquier(const Echiquier &); //operateur par copie
    Echiquier & operator=(const Echiquier &); //operateur=
    ~Echiquier(); //destructeur d'un echiquier
};


#endif // ECHIQUIER_H_INCLUDED
