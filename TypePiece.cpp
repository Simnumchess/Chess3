#include "Echiquier.h"
#include <iostream>
#include <ostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

TypePiece::TypePiece()
    {
        Nom_piece=Piecevide;
        val=0;
        depla_rela_l=0;
        depla_rela_c=0;
    }
TypePiece& TypePiece::operator=(const TypePiece & P)
{
        if (this==&P) return *this;
        else
        {
            Nom_piece=P.Nom_piece;
            val=P.val;
            depla_rela_l=P.depla_rela_l;
            depla_rela_c=P.depla_rela_l;
            return *this;
        }
}
TypePiece::~TypePiece(){}
