#include "Echiquier.h"
#include "Piece.h"
#include <iostream>
#include <ostream>

using namespace std;

Echiquier::Echiquier() //initialisation
{
    dim=8;
    echectab=new Piece*[dim];
    for(int i=0;i<dim;i++)
    {
        echectab[i]=new Piece[dim];
        {
            for(int j=0;j<dim;j++)
            {
            Piece PV;
            PV.type_piece=Piecevide;
            echectab[i][j]=PV;
            }
        }
    }
    for(int i=0;i<dim;i++)
    {
        Piece Pb;
        Pb.type_piece=Pion;
        Pb.color=blanc;
        echectab[i][1]=Pb;

        Piece Pn;
        Pn.type_piece=Pion;
        Pn.color=noir;
        echectab[i][6]=Pn;
    }
        Piece Tb;
        Tb.type_piece=Tour;
        Tb.color=blanc;
        echectab[0][0]=Tb;
        echectab[7][0]=Tb;

        Piece Tn;
        Tn.type_piece=Tour;
        Tn.color=noir;
        echectab[0][7]=Tn;
        echectab[7][7]=Tn;

        Piece Cb;
        Cb.type_piece=Cavalier;
        Cb.color=blanc;
        echectab[1][0]=Cb;
        echectab[6][0]=Cb;

        Piece Cn;
        Cn.type_piece=Cavalier;
        Cn.color=noir;
        echectab[1][7]=Cn;
        echectab[6][7]=Cn;

        Piece Fb;
        Fb.type_piece=Fou;
        Fb.color=blanc;
        echectab[2][0]=Fb;
        echectab[5][0]=Fb;

        Piece Fn;
        Fn.type_piece=Fou;
        Fn.color=noir;
        echectab[2][7]=Fn;
        echectab[5][7]=Fn;

        Piece Db;
        Db.type_piece=Dame;
        Db.color=blanc;
        echectab[3][0]=Db;

        Piece Dn;
        Dn.type_piece=Dame;
        Dn.color=noir;
        echectab[3][7]=Dn;

        Piece Rb;
        Rb.type_piece=Roi;
        Rb.color=blanc;
        echectab[4][0]=Rb;

        Piece Rn;
        Rn.type_piece=Roi;
        Rn.color=noir;
        echectab[4][7]=Rn;


}
Echiquier::~Echiquier()
{
    if(echectab!=NULL)
    {
        for(int i=0;i<8;i++)
        {
            delete []echectab[i];
            delete []echectab;
        }
    }
}
void Echiquier::print()
{
    char echec_tab_indicel[8];
    char echec_tab_indicec[8];
    echec_tab_indicel[0]='8';
    echec_tab_indicel[1]='7';
    echec_tab_indicel[2]='6';
    echec_tab_indicel[3]='5';
    echec_tab_indicel[4]='4';
    echec_tab_indicel[5]='3';
    echec_tab_indicel[6]='2';
    echec_tab_indicel[7]='1';

    echec_tab_indicec[0]='A';
    echec_tab_indicec[1]='B';
    echec_tab_indicec[2]='C';
    echec_tab_indicec[3]='D';
    echec_tab_indicec[4]='E';
    echec_tab_indicec[5]='F';
    echec_tab_indicec[6]='G';
    echec_tab_indicec[7]='H';

    for(int k=0;k<dim;k++)
        {
                cout<<echec_tab_indicec[k]<<"  ";
        }
    for (int j=0; j<dim; j++)
        {
                cout<<endl;
                for (int i=0; i<dim; i++)
                        {
                            echectab[i][j].print();
                        }
                cout<<echec_tab_indicel[j];
        }
}

Echiquier::Echiquier(const Echiquier & Echec) //constructeur par copie
{
    dim=Echec.dim;
    echectab=new Piece*[dim];
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++) {echectab[i][j]=Echec.echectab[i][j];}
    }

}
Echiquier & Echiquier::operator=(const Echiquier & Echec) //operator par copie
{
    dim=Echec.dim;
    echectab=NULL;
    if(dim<=0)
    return *this;
    echectab=new Piece*[8];
     for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        echectab[i][j]=Echec.echectab[i][j];
    }
    return *this;

}
bool Echiquier::casevide(int l,int c)
{
    if(echectab[l][c].type_piece==Piecevide)
    return true;
    else
    return false;
}

