#include "Piece.h"
#include "Echiquier.h"
#include <iostream>
#include <ostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void Piece::print()
{
    switch(type_piece.Nom_piece)
    {
        case Pion:
        if(color==blanc)
        cout<<"Pb"<<" ";
        else cout<<"Pn"<<" ";
        break;

        case Tour:
        if(color==blanc)
        cout<<"Tb"<<" ";
        else cout<<"Tn"<<" ";
        break;

        case Cavalier:
        if(color==blanc)
        cout<<"Cb"<<" ";
        else cout<<"Cn"<<" ";
        break;

        case Fou:
        if(color==blanc)
        cout<<"Fb"<<" ";
        else cout<<"Fn"<<" ";
        break;

        case Dame:
        if(color==blanc)
        cout<<"Db"<<" ";
        else cout<<"Dn"<<" ";
        break;

        case Roi:
        if(color==blanc)
        cout<<"Rb"<<" ";
        else cout<<"Rn"<<" ";
        break;

        case Piecevide:
        cout<<"   ";//3espaces car 2lettres et un espace
        break;
    }
}

Piece& Piece::operator=(const Piece & P)
{
        if (this==&P) return *this;
        else
        {
            type_piece=P.type_piece;
            color=P.color;
            position_l=P.position_l;
            position_c=P.position_c;
            return *this;
        }
}
//peut etre mettre une couleur neutre?
Piece::Piece()
    {
        type_piece.Nom_piece=Piecevide;
        type_piece.val=0;
        type_piece.depla_rela_l=0;
        type_piece.depla_rela_c=0;
        color=couleur();
        position_l=0;
        position_c=0;
    }
Piece::~Piece(){}
