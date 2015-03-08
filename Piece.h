#ifndef PIECE_H_INCLUDED
#define PIECE_H_INCLUDED

enum type {Roi, Dame, Tour, Cavalier, Fou, Pion, Piecevide};
enum couleur {noir,blanc};

using namespace std;

class Piece
{
    public:

    couleur color; //definition de la couleur d'une piece: {blanc, noir}
    int depla_rela_l; //la position d'une piece en ligne apres un deplacement
    int depla_rela_c; //la position d'une piece en colone apres un deplacement
    type type_piece; //definition du type d'une piece: {Roi, Dame, Tour, Cavalier, FOu, Pion, Piecevide}
    int val; //valeur d'une piece: val_roi=0; val_pion=v; val_reine=9*v; val_tour=5*v; val_fou=3*v; val_cavalier=3*v
    int position_l; //la position d'une piece en ligne apres un deplacement
    int position_c; //la position d'une piece en colone apres un deplacement

    void print(); //print d'une piece selon son type
    //int i; //numéro de ligne de la piece avant déplacement
    //int j; //numéro de la colonne de la piece avant déplacement
    //bool deplacement(); //regarde si on peut faire un deplacement
    //int val; //valeur d'une piece: val_roi=0; val_pion=v; val_reine=9*v; val_tour=5*v; val_fou=3*v; val_cavalier=3*v
    int getvaleurpiece(); //renvoie la valeur d'une piece selon son type
    Piece(); //constructeur d'une piece
    ~Piece();
    Piece & operator=(const Piece &); //operateur=
};

#endif // PIECE_H_INCLUDED
