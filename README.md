Ascenseur
=========

On sépare selon un schéma : User => Controleur => Applicatif => Etat => Vue => User

Le User c'est celui qui agit sur le controleur via une interface grapique (faite via Qt)

Le Controleur est celui qui agit sur l'applicatif, il décide d'effectuer des changements sur les éléments du jeu.

L'Applicatif est la partie qui se charge de modifier les éléments du jeu.

L'Etat correspond à la situation dans laquelle est une classe donnée,nombre de carte, nombre de point etc... C'est l'applicatif qui le gère. Elle ne contient que des setter et des getter.

La Vue correspond à l'affichage des états.
