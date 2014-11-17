#include "Joueur.h"

using namespace std;

Joueur::Joueur() : m_nom(""), m_annonce(0), m_pliEffectue(0), m_score(0), m_dealer(false), m_main(Deck(false))
{
    //ctor
}

Joueur::Joueur(string nom) : m_nom(nom), m_annonce(0), m_pliEffectue(0), m_score(0), m_dealer(false), m_main(Deck(false))
{
    //ctor
}

Joueur::~Joueur()
{
    //dtor
}

std::string Joueur::getNom()
{
    return m_nom;
}

void Joueur::setNom(std::string nom)
{
    m_nom = nom;
}

int  Joueur::getAnnonce()
{
    return m_annonce;
}

void Joueur::setAnnonce(int annonce)
{
    m_annonce = annonce;
}

int  Joueur::getPliEffectue()
{
    return m_pliEffectue;
}

void Joueur::setPliEffectue(int pli)
{
    m_pliEffectue = pli;
}

int  Joueur::getScore()
{
    return m_score;
}
void Joueur::setScore(int score)
{
    m_score = score;
}
bool Joueur::isDealer()
{
    return m_dealer;
}
void Joueur::setDealer(bool dealer)
{
    m_dealer = dealer;
}
Deck Joueur::getMain()
{
    return m_main;
}
void Joueur::setMain(Deck& main)
{
    m_main = main;
}

std::vector<Carte> Joueur::getCarteJouee()
{
    return m_carteJouee;
}

void Joueur::jouerCarte(int numCarte)
{
    vector<Carte> maMain = m_main.getDeck();
    Carte carteJouee = maMain[numCarte-1];
    m_main.retirerCarte(numCarte);
    m_carteJouee.push_back(carteJouee);

}

void Joueur::calculerPoint()
{
    if(m_pliEffectue == m_annonce)
    {
        m_score = 10*m_annonce; //Faut vérifier le nombre de point gagner
    }
    else
    {
        m_score = -5*(Abs(m_pliEffectue - m_annonce)); // Pareil faut vérifier le nombre de point et la fonction valeur absolue
    }
}

void Joueur::afficherJoueur()
{
    cout<<"Joueur : "<<m_nom<<endl;
    cout<<"Annonce : "<<m_annonce<<endl;
    cout<<"Pli effectue dans cette manche : "<<m_pliEffectue<<endl;
    cout<<"Dealer : "<<m_dealer<<endl;
    cout<<"Score : "<<m_score<<endl;
    cout<<"Main : "<<endl;
    m_main.afficherDeck();
    cout<<endl;

}
