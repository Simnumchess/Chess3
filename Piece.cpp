#include "Piece.h"
#include "Echiquier.h"
#include <iostream>
#include <ostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Piece::getvaleurpiece()
{
    int v=1; //on decide la valeur du v
    switch(type_piece)
    {
        case Pion:
        return v;
        break;
        case Tour:
        return 5*v;
        break;
        case Cavalier:
        return 3*v;
        break;
        case Fou:
        return 3*v;
        break;
        case Dame:
        return 9*v;
        break;
        case Roi:
        return 0;
        break;
        case Piecevide:
        return 0;
        break;
    }
}

void Piece::print()
{
    switch(type_piece)
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
            depla_rela_l=P.depla_rela_l;
            depla_rela_c=P.depla_rela_c;
            val=P.val;
            position_c=P.position_c;
            position_l=P.position_l;
            return *this;
        }
}
//peut etre mettre une couleur neutre?
Piece::Piece()
    {
        type_piece=Piecevide;
        color=couleur();
        depla_rela_l=0;
        depla_rela_c=0;
        val=0;
        position_l=0;
        position_c=0;
    }
Piece::~Piece(){}
