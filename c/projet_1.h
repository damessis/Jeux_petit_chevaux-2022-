#ifndef PROJET_1
#define PROJET_1

/*------------------------------------------------------------------------------------------------------------------*/


/*chaque pion est detient certaines informations pour l'identifierde maniere unique*/
struct Joueur {
		pid_t pid; // le nom du joueur a qui appartient ce pion en l'occurence dans notre programme les joueur sont des processus fils du programme main 
    //chaque joueur a 2 pion et chaque pion est identifié par sa zone et sa case 
    int pion1[2];//a l'indice 0 on stocke la zone du pion et a l'indice 1 on stocke la case
    int pion2[2];
};
 
 
/*------------------------------------------------------------------------------------------------------------------*/


//fonction qui permet de creer un joueur
void initialiser_joueur(struct Joueur tableauJoueur[], int joueur, pid_t pid);

/*------------------------------------------------------------------------------------------------------------------*/


int de(int dernier_lance);
void caseSuivante(int joueur, int pion, int de, Joueur* tabJoueurs, int nbJoueur);
void sortieEcurie(int joueur, int pion, Joueur* tabJoueurs);
int joueurPrecedent(int joueur, int nbJoueur);
void avancerPion(int joueur, int de, Joueur* tabJoueurs, int nbJoueur);


/*------------------------------------------------------------------------------------------------------------------*/


//fonction qui associe les joueur et leur pions(initialisé) a un processus
void initPlateau(int nbJoueur,struct Joueur tableauDeJoueur[],int tableauDeTubes[4][2],int tableauDeTubes2[4][2]);


/*------------------------------------------------------------------------------------------------------------------*/
#endif
