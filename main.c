/*  Programme d'analyse (simple) de trace GPS.
	Auteur: David Marche
	Date : Septembre 2013

	Ce programme permet de lire un fichier de trace GPS et de realiser les calculs d’analyse suivants sur les données
	récupérées:
		- Distance totale parcourue
		- Ascension totale realisee
		- Altitude maximum/minimum atteinte
		- Pente maximale du parcours

	Supposition de simplification du probleme:
		- La trace se passe dans une seule journee. Calcul de temps seulement sur Heure,minute,seconde.
		- Le fichier de points doit se trouver dans le repertoire du projet

*/

#define _CRT_SECURE_NO_WARNINGS

// Librairies standard
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Librairies du projet
#include "config.h"
#include "test.h"
#include "menu.h"
#include "matrac_lib.h"
#include "menu.h"

/* ---------------------------------------------------------------------------------------------------------------------
	Fonction: charger
	Auteur:
	Description:
		Cette fonction saisi un nom de fichier de donnees GPS, lit et place toutes les donnees dans des tableaux
		statiques fournis en parametres. Le format du fichier est le suivant :
		No,Latitude,Longitude,Altitude,Date,Time
		1,49.192273,-123.178443,-44.6,2013/06/21,11:02:00
		2,49.192272,-123.178318,-44.6,2013/06/21,11:02:03
		3,49.192184,-123.178061,-41.7,2013/06/21,11:02:10
		...

	Parametres:
		tab_latitudes	    tableau a remplir avec les valeurs de latitude
		tab_longitudes		tableau a remplir avec les valeurs de longitude
		tab_altitudes		tableau a remplir avec les valeurs d'altitude
		taille_max		    nombre maximum de valeurs pouvant etre chargees dans les tableaux

	Valeur de retour:
		Le nombre de points lus, 0 si aucun, -1 si probleme lors de la lecture du fichier,
	Note:
		- Les tableaux donnees en parametre sont modifies.
	Cas particuliers:
		- S'il y a eu un problème lors de la lecture, la fonction renvoie -1 sinon elle retourne le nombre de points lus;
*/
int charger(double tab_latitudes[], double tab_longitudes[], double tab_altitudes[], int taille_max);

/* ---------------------------------------------------------------------------------------------------------------------
	Fonction: afficher
	Auteur:
	Description:
		Cette fonction affiche toutes les donnees de la trace presente en memoire avec la premiere ligne d'en-tete
		suivante:
			"index      lattitude     longitude   altitude"
	Parametres:
		tab_latitudes		tableau des valeurs de latitude
		tab_longitudes		tableau des valeurs de longitude
		tab_altitudes		tableau des valeurs d'altitude
		taille			    nombre de valeurs valides presentes dans les tableaux
	Valeur de retour:
		Aucune.
	Cas particuliers:
		- Quand la taille est nulle ou negative, seule la ligne d'en-tete est affichee.
*/
void afficher(double tab_latitudes[], double tab_longitudes[], double tab_altitudes[], int taille);

/* ---------------------------------------------------------------------------------------------------------------------
	Fonction: analyser
	Auteur:
	Description:
		Cette fonction affiche l'analyse de la trace. Elle affiche la distance totale parcourue, l'ascension effectuee,
		l'altidude maximale et minimale.
	Parametres:
		tab_latitudes		tableau des valeurs de latitude
		tab_longitudes		tableau des valeurs de longitude
		tab_altitudes		tableau des valeurs d'altitude
		taille			    nombre de valeurs presentes dans les tableaux
	Valeur de retour:
		Aucune.
	Cas particulier:
		Si la valeur de la taille est nulle ou negative, les valeurs affichees seront vides.

*/
void analyser(double tab_latitudes[], double tab_longitudes[], double tab_altitudes[], int taille);

/* ---------------------------------------------------------------------------------------------------------------------
	Fonction: calculer
	Auteur:
	Description:
		Cette fonction lit la taille de la fenetre pour calculer la pente maximale de la trace et affiche le resultat.

	Parametres:
		tab_latitudes		tableau des valeurs de latitude
		tab_longitudes		tableau des valeurs de longitude
		tab_altitudes		tableau des valeurs d'altitude
		taille			    nombre de valeurs presentes dans les tableaux
	Valeur de retour:
		aucune
*/
void calculer(double tab_latitudes[], double tab_longitudes[], double tab_altitudes[], int taille);

// Programme principal
int main()
{

	return EXIT_SUCCESS;
}
