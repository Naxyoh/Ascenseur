#include"Deck.h"
#include "Joueur.h"


using namespace std;

int main()
{
    srand(time(NULL));

//	Carte taCarte = Carte(pique, J);
//    Carte maCarte = Carte(coeur, J);
//    bool v = maCarte==taCarte;
//    cout<<v<<endl;
//	taCarte.afficher();
//    taCarte.setCouleur(pique);
//    taCarte.setValeur(A);
//    taCarte.afficher();
//    if(maCarte<taCarte)
//    {
//        cout<<"taCarte est plus grande"<<endl;
//    }
//    else{cout<<"maCarte est plus grande"<<endl;}
//cout<<endl;
//    Deck myDeck = Deck();
//    Deck maMain = Deck(false);
//    Deck taMain = Deck(false);
//
//    myDeck.afficherDeck();
//    cout<<endl;
//    cout<<"Le deck contient "<<myDeck.getDeck().size()<<" cartes"<<endl;
//cout<<endl;
////    Carte cartePiochee = myDeck.piocherCarte(4,1);
////    cartePiochee.afficher();
//
//
//
//    maMain.piocherCarte(10, myDeck);
//    cout<<endl;
//    taMain.piocherCarte(10, myDeck);
//    cout<<endl;
//cout<<"Ma Main : "<<endl;
//    maMain.afficherDeck();
//    cout<<endl;
//    cout<<"Ta Main : "<<endl;
//    taMain.afficherDeck();
//    cout<<endl;
//    cout<<"Le deck : "<<endl;
//    myDeck.afficherDeck();
//
//    Joueur Yoan = Joueur();
//    Yoan.setNom("Yoan");
//    cout<<"Nom : "<<Yoan.getNom()<<endl;
//    Yoan.setMain(maMain);
//    Yoan.getMain().afficherDeck();
//
//    for(size_t i = 0; i<myDeck.getDeck().size();i++)
//    {
//        //cout<<rand()%4 + 1<<endl;
//        delete &myDeck.getDeck()[i];
//    }
//
//    for(size_t i = 0; i<maMain.getDeck().size();i++)
//    {
//        delete &maMain.getDeck()[i];
//    }
//
//    for(size_t i = 0; i<taMain.getDeck().size();i++)
//    {
//        delete &taMain.getDeck()[i];
//    }

    int NbrManche = 0;
    int NbrJoueur = 0;

    Carte carteGagnante1 = Carte((Couleur)0, (Valeur)0);
    carteGagnante1.afficher();
    vector<Joueur*> listeJoueur;
    cout<<"Combien de joueur etes-vous ? ";
    cin>>NbrJoueur;
    for(int i = 0; i<NbrJoueur; i++)
    {
       string nomJoueur;
       cout<<"Nom du Joueur "<<i+1<<" ? ";
       cin>>nomJoueur;
       listeJoueur.push_back(new Joueur(nomJoueur));
    }

    for(size_t i = 0; i<listeJoueur.size();i++)
    {
        listeJoueur[i]->afficherJoueur();
    }


    cout<<"Combien de manche voulez-vous jouer ? ";
    cin>>NbrManche;


    while(NbrManche--)
    {
        Deck pioche = Deck();
        Deck Atout = Deck(true);
        Atout.piocherCarte(1, pioche);
        cout<<"L'atout est : ";
        Atout.afficherDeck();

        for(size_t i = 0; i<listeJoueur.size();i++) // Souci : on change de main entre de levée...
        {
            Deck maMain = Deck(true);
            maMain.piocherCarte(NbrManche+1, pioche);
            listeJoueur[i]->setMain(maMain);
        }

        for(size_t i = 0; i<listeJoueur.size();i++)
        {
            listeJoueur[i]->afficherJoueur();
        }

        for(size_t i = 0; i<listeJoueur.size();i++)
        {
            cout<<listeJoueur[i]->getNom()<<", combien pensez vous faire de levees ? ";
            int nbrLevee = 0;
            cin>>nbrLevee;
            listeJoueur[i]->setAnnonce(nbrLevee);
        }

        while(listeJoueur[1]->getMain().getDeck().size())
        {
            Carte carteGagnante = Carte((Couleur)0, (Valeur)0);
            string joueurGagnant = "";

            for(size_t i = 0; i<listeJoueur.size();i++)
            {

                for(size_t j = 0; j<listeJoueur.size();j++)
                {
                    listeJoueur[j]->afficherJoueur();
                }
                cout<<listeJoueur[i]->getNom()<<", quelle carte voulez-vous jouer ? (Rentrez sa position) : ";
                int numCarte =0;
                cin>>numCarte;
                listeJoueur[i]->jouerCarte(numCarte);
                carteGagnante = listeJoueur[0]->getCarteJouee()[NbrManche-listeJoueur[1]->getMain().getDeck().size()];
                joueurGagnant = listeJoueur[0]->getNom();
                if(listeJoueur[i]->getCarteJouee()[NbrManche-listeJoueur[1]->getMain().getDeck().size()]>carteGagnante)
                {
                    carteGagnante = listeJoueur[i]->getCarteJouee()[NbrManche-listeJoueur[1]->getMain().getDeck().size()];
                    joueurGagnant = listeJoueur[i]->getNom();
                }

            }
            cout<<joueurGagnant<<" gagne la levee avec ";
            carteGagnante.afficher();
            cout<<endl;

        }



    }

//    Joueur Justine = Joueur("Justine");
//    Joueur Yoan = Joueur("Yoan");
//
//    Deck pioche = Deck();
//    Deck mainYoan = Deck(false);
//    Deck mainJustine = Deck(false);
//
//    Yoan.afficherJoueur();
//    //Justine.afficherJoueur();
//
//    mainYoan.piocherCarte(5, pioche);
//   // mainJustine.piocherCarte(5, pioche);
//
//    //Justine.setMain(mainJustine);
//    Yoan.setMain(mainYoan);
//Yoan.afficherJoueur();
//    Yoan.jouerCarte(2);
//
//    Yoan.afficherJoueur();
//    //Justine.afficherJoueur();

    for(size_t i = 0; i<listeJoueur.size();i++)
    {
        delete &listeJoueur[i];
    }

    return 0;
}
