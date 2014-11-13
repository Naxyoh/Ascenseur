#include "Joueur.h"

Joueur::Joueur() : m_nom(""), m_annonce(0), m_dealer(false), m_main(Deck()), m_pliEffectue(0), m_score(0)
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
void Joueur::setMain(Deck main)
{
    m_main = main;
}
