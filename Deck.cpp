#include "Deck.h"

using namespace std;

Deck::Deck() : m_listeCarte(0)
{
    
}



Deck::~Deck()
{


}

void Deck::initialiserDeck(Deck &deck)
{
	for(int i = 0; i<4; i++)
    {
        for(int j = 2; j<=14; j++)
        {
            deck.m_listeCarte.push_back(Carte((Couleur)i,(Valeur)j));
        }

    }
}
	


void Deck::ajouterCartes(vector<Carte> listeCarte)
{
    m_listeCarte = listeCarte;
}

//Carte Deck::piocherCarte(int val, int coul)
//{
//    Carte piochee = m_listeCarte[val+13*coul-1];
//    m_listeCarte.erase(m_listeCarte.begin()+(Valeur)val+13*(Valeur)coul-1);
//    return piochee;
//}

void Deck::piocherCarte(int nbCarte, Deck &pioche)
{
    vector<Carte> maMain;

    for(int i = 0; i<nbCarte; i++)
    {
        int indice = rand()%pioche.m_listeCarte.size();
        maMain.push_back(pioche.getDeck()[indice]);
        pioche.m_listeCarte.erase(pioche.m_listeCarte.begin()+indice);
    }
    m_listeCarte = maMain;
}

void Deck::ajouterCarte(Carte *carte)
{
    m_listeCarte.push_back(*carte);
}

void Deck::afficherDeck() const
{
    cout <<"Le deck contient :"<<endl;
    for(size_t i = 0; i<m_listeCarte.size(); i++)
    {
        m_listeCarte[i].afficher();
    }
}

vector<Carte> Deck::getDeck()
{
    return m_listeCarte;
}

