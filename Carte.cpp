#include"Carte.h"
#include<ctime>
#include<cstdlib>

using namespace std;


Carte::Carte()
{
   //srand
   m_couleur = (Couleur)(rand()%4);
   m_valeur = (Valeur)(rand()%13 + 2);

}

Carte::Carte(Couleur c, Valeur v) : m_couleur(c), m_valeur(v)
{
}



Carte::~Carte()
{
}

void Carte::afficher() const
{
    if(m_couleur==0)
    {
        if(m_valeur<=10)
            cout<<m_valeur<<" de Carreau"<<endl;
        else if(m_valeur ==11)
            cout<<"Valet de Carreau"<<endl;
        else if(m_valeur ==12)
            cout<<"Dame de Carreau"<<endl;
        else if(m_valeur ==13)
            cout<<"Roi de Carreau"<<endl;
        else if(m_valeur ==14)
            cout<<"As de Carreau"<<endl;
    }
    else if(m_couleur==1)
    {
        if(m_valeur<=10)
            cout<<m_valeur<<" de Coeur"<<endl;
        else if(m_valeur ==11)
            cout<<"Valet de Coeur"<<endl;
        else if(m_valeur ==12)
            cout<<"Dame de Coeur"<<endl;
        else if(m_valeur ==13)
            cout<<"Roi de Coeur"<<endl;
        else if(m_valeur ==14)
            cout<<"As de Coeur"<<endl;
    }
    else if(m_couleur==2)
    {
        if(m_valeur<=10)
            cout<<m_valeur<<" de Pique"<<endl;
        else if(m_valeur ==11)
            cout<<"Valet de Pique"<<endl;
        else if(m_valeur ==12)
            cout<<"Dame de Pique"<<endl;
        else if(m_valeur ==13)
            cout<<"Roi de Pique"<<endl;
        else if(m_valeur==14)
            cout<<"As de Pique"<<endl;
    }
    else if(m_couleur==3)
    {
        if(m_valeur<=10)
            cout<<m_valeur<<" de Trefle"<<endl;
        else if(m_valeur ==11)
            cout<<"Valet de Trefle"<<endl;
        else if(m_valeur ==12)
            cout<<"Dame de Trefle"<<endl;
        else if(m_valeur ==13)
            cout<<"Roi de Trefle"<<endl;
        else if(m_valeur ==14)
            cout<<"As de Trefle"<<endl;
    }
}

Couleur Carte::getCouleur() const
{
    return m_couleur;
}

Valeur Carte::getValeur() const
{
    return m_valeur;
}

void Carte::setCouleur(Couleur c)
{
    m_couleur = c;
}

void Carte::setValeur(Valeur v)
{
    m_valeur = v;
}

void Carte::jouerCarte(Carte carte)
{

////////////////////A compléter//////////////
}

//////////////////////////////////////////////////////////////////////
/////////////////////////////Opérator/////////////////////////////////
/////////////////////////////////////////////////////////////////////
bool operator==(Carte const& a, Carte const& b)
{
    return (int)a.getValeur()==(int)b.getValeur() && (int)a.getCouleur()==(int)b.getCouleur();
}

bool operator!=(Carte const& a, Carte const& b)
{
    return !(a==b);
}

bool operator<(Carte const &a, Carte const& b)
{
    return (int)a.getValeur()<(int)b.getValeur();
}

bool operator>(Carte const &a, Carte const& b)
{
    return (int)a.getValeur()>(int)b.getValeur();
}
