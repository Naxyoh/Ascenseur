#include "Deck.h"
#include "Joueur.h"

using namespace std;

Deck::Deck()
{
    for(int i = 0; i<4; i++)
    {
        for(int j = 2; j<=14; j++)
        {
            m_listeCarte.push_back(Carte((Couleur)i,(Valeur)j));
        }

    }
}

Deck::Deck(bool b) : m_listeCarte(0) // Sert à creer un deck vide
{

}

Deck::~Deck()
{


}


void Deck::ajouterCartes(vector<Carte> listeCarte)
{
    m_listeCarte = listeCarte;
}

void Deck::retirerCarte(int numCarte)
{
    m_listeCarte.erase(m_listeCarte.begin()+numCarte-1);

}

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
    for(size_t i = 0; i<m_listeCarte.size(); i++)
    {
        m_listeCarte[i].afficher();
    }
}

vector<Carte> Deck::getDeck()
{
    return m_listeCarte;
}

