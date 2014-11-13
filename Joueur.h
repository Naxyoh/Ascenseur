#ifndef JOUEUR_H
#define JOUEUR_H

#include "Deck.h"


class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();

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
        void setMain(Deck);

    protected:


        std::string m_nom;
        int m_annonce;
        int m_pliEffectue;
        int m_score;
        bool m_dealer;
        Deck m_main;

    private:
};

#endif // JOUEUR_H
