#include "Position.h"

/*
int Position::getvaleur(int alpha,int beta) const// la fonction qui renvoie la valeur d'une position
{
    int cont_ordinateur=0;
    int cont_humain=0;
    int val_pos_ordinateur=0;
    int val_pos_humain=0;

    for(int l=0;l<8;l++)
    {
        for(int c=0;c<8;c++)
        {
             if(e_ref.echectab[c][l].type_piece.Nom_piece!=Piecevide&&e_ref.echectab[c][l].color==noir)
            {
                cont_ordinateur++;
                val_pos_ordinateur+=e_ref.echectab[c][l].getvaleurpiece();
            }
            if(e_ref.echectab[c][l].type_piece.Nom_piece!=Piecevide&&e_ref.echectab[c][l].color==blanc)
            {
                cont_humain++;
                val_pos_humain+=e_ref.echectab[c][l].getvaleurpiece();
            }
        }
    }
    int valeur=0;
    valeur=alpha*(val_pos_humain-val_pos_ordinateur)+beta*(cont_humain-cont_ordinateur);
    return valeur;
}
*/
Position::~Position()
{

}

/*
Position::~Position()
{
    if(pos_soeur!=NULL)
    {
            delete []pos_soeur;
    }
        if(pos_fille!=NULL)
    {
            delete []pos_fille;
    }

}
*/

Position::Position(Echiquier E) //constructeur de la position initiale
{
    echiquier_ref=E;
    val_pos_humain=0;
    val_pos_ordinateur=0;
}

Position::Position(const Position & p) //operateur par copie
{
    e_ref=p.e_ref;
    //joueur_pos=p.joueur_pos;
    //pos_soeur=p.pos_soeur;
    //pos_fille=p.pos_fille;
}

Position & Position::operator=(const Position & p) //operateur = pour une piece
{
    if (this==&p) return *this;
    else{
    e_ref=p.e_ref;
    //joueur_pos=p.joueur_pos;
    //pos_soeur=p.pos_soeur;
    //pos_fille=p.pos_fille;
    return *this;}
}
