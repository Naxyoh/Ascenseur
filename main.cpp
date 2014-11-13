#include"Deck.h"
#include "Joueur.h"

using namespace std;

int main()
{
    srand(time(NULL));
	Carte taCarte = Carte(pique, J);
    Carte maCarte = Carte(coeur, J);
    bool v = maCarte==taCarte;
    cout<<v<<endl;
	taCarte.afficher();
    taCarte.setCouleur(pique);
    taCarte.setValeur(A);
    taCarte.afficher();
    if(maCarte<taCarte)
    {
        cout<<"taCarte est plus grande"<<endl;
    }
    else{cout<<"maCarte est plus grande"<<endl;}
cout<<endl;
    Deck myDeck = Deck();
    Deck maMain = Deck(false);
    Deck taMain = Deck(false);

    myDeck.afficherDeck();
    cout<<endl;
    cout<<"Le deck contient "<<myDeck.getDeck().size()<<" cartes"<<endl;
cout<<endl;
//    Carte cartePiochee = myDeck.piocherCarte(4,1);
//    cartePiochee.afficher();



    maMain.piocherCarte(10, myDeck);
    cout<<endl;
    taMain.piocherCarte(10, myDeck);
    cout<<endl;
cout<<"Ma Main : "<<endl;
    maMain.afficherDeck();
    cout<<endl;
    cout<<"Ta Main : "<<endl;
    taMain.afficherDeck();
    cout<<endl;
    cout<<"Le deck : "<<endl;
    myDeck.afficherDeck();

    Joueur Yoan = Joueur();
    Yoan.setNom("Yoan");
    cout<<"Nom : "<<Yoan.getNom()<<endl;

    for(size_t i = 0; i<myDeck.getDeck().size();i++)
    {
        //cout<<rand()%4 + 1<<endl;
        delete &myDeck.getDeck()[i];
    }

    for(size_t i = 0; i<maMain.getDeck().size();i++)
    {
        delete &maMain.getDeck()[i];
    }

    for(size_t i = 0; i<taMain.getDeck().size();i++)
    {
        delete &taMain.getDeck()[i];
    }

    return 0;
}
