#ifndef DECK_H
#define DECK_H

#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"Carte.h"

class Deck
{
    public:
        Deck();
        Deck(bool); // Sert à initialiser un deck vierge
        virtual ~Deck();
        void ajouterCartes(std::vector<Carte>); //ajoute une liste de carte à un deck
        void ajouterCarte(Carte*); // ajoute une seule carte à un deck
        void retirerCarte(int);
        void piocherCarte(int, Deck&); // tirer un nombre de carte
        void afficherDeck() const; //affiche le contenu d'un deck
        std::vector<Carte> getDeck();
    protected:
        std::vector<Carte> m_listeCarte;
    private:
};

#endif // DECK_H
