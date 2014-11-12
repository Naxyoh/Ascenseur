#ifndef def_carte
#define def_carte

#include<iostream>
#include<string>

enum Couleur{carreau, coeur, pique, trefle};
enum Valeur{deux=2, trois, quatre, cinq, six, sept, huit, neuf, dix, J, Q, K, A};

class Carte
{
	public :

		Carte();
		Carte(Couleur c, Valeur v);
		~Carte();
		void afficher() const;

		Couleur getCouleur() const;
		Valeur getValeur() const;
		void setCouleur(Couleur c);
		void setValeur(Valeur v);
	protected :
	    Couleur m_couleur;
		Valeur m_valeur;
	private :


};

bool operator==(Carte const& a, Carte const& b);
bool operator!=(Carte const& a, Carte const& b);
bool operator<(Carte const &a, Carte const& b);

#endif //def_carte
