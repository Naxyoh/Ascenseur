#ifndef JOUEUR_H
#define JOUEUR_H

#include "Deck.h"


class Joueur
{
    public:
        Joueur();
        Joueur(std::string);
        virtual ~Joueur();
        //Getter and Setter
        std::string getNom();
        void setNom(std::string);
        int getAnnonce();
        void setAnnonce(int);
        int getPliEffectue();
        void setPliEffectue(int);
        int getScore();
        void setScore(int);
        bool isDealer();
        void setDealer(bool);
        Deck getMain();
        void setMain(Deck&);
        std::vector<Carte> getCarteJouee();


        //fonction de jeu
        void jouerCarte(int);
        //affichage
        void afficherJoueur();

    protected:
        std::string m_nom;
        int m_annonce;
        int m_pliEffectue;
        int m_score;
        bool m_dealer;
        Deck m_main;
        std::vector<Carte> m_carteJouee;

    private:
};

#endif // JOUEUR_H
