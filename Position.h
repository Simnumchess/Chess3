#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

#ifndef Position_H_INCLUDED
#define Position_H_INCLUDED
#include "Position.h"
#include "Echiquier.h" //pas nécessaire?
#include "Coup.h"
#include <iostream>
#include <ostream>
#include "Piece.h"//pas necessaire?
#include "Position_abs.h"

enum Joueur{humain,ordinateur};

class Position
{
    public :
/*
    Coup* liste_coup; //liste des coups permettant de passer de l'échiquier de référence à la position temporaire
    //int valeur_position (Echiquier e_ref); //echiquier de reference



*/
    //int getvaleur(int alpha, int beta) const; //renvoie la valeur d'une position

    //Position* pos_soeur;
    //Position* pos_fille;
    //Joueur joueur_pos;
    Echiquier e_ref;
    int val_pos_ordinateur; //renvoie la valeur de la position de l'ordinateur
    int val_pos_humain; //renvoir la valeur de la position du huamin
/*
    Position* get_pos_suiv(); //constructeur de toutes les positions suivantes a une profondeur donnee
    //Position_abs* position_suivante (int profondeur); //générateur de toutes les positions suivantes à une profondeur donnée
*/
    Position ();
    ~Position();
    Position & operator=(const Position &); //operateur = pour une position
    Position(const Position & p); //operateur par copie

};

#endif // Position_H_INCLUDED



#endif // POSITION_H_INCLUDED
