#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

typedef struct
{
    /* data */
    int zone;
    int case;
}position;

void jouer(){

}

int main() 
{
    int f01[2];//tube de communication entre le joueur 0 et le joueur 1
    int f12[2];//tube de communication entre le joueur 1 et le joueur 2
    int f23[2];//tube de communication entre le joueur 2 et le joueur 3
    int f34[2];//tube de communication entre le joueur 0 et le joueur 1
    int fp[2];//tube de communication entre le joueur 0 et le joueur 1
    position pj0p1;//position du premier pion du joueur 0
    position pj0p2;//position du deuxieme pion du joueur 0
    position pj1p1;//position du premier pion du joueur 1
    position pj1p2;//position du deuxieme pion du joueur 1
    position pj2p1;//position du premier pion du joueur 2
    position pj2p2;//position du deuxieme pion du joueur 2
    position pj3p2;//position du premier pion du joueur 3
    position pj3p2;//position du deuxieme pion du joueur 3
    int pidj0;
    int pidj1;
    int pidj2;
    int pidj3;
    switch (pidj0=fork())
    {
    case -1:
        fprintf(stderr, "Erreur du premier fork\n");
        exit(-1);
    case 0:

    default:
        switch (pidj1=fork())
        {
        case -1:
            fprintf(stderr, "Erreur du deuxieme fork\n");
            exit(-1);
        case 0:
            fprintf(stderr, "Erreur de fork\n");
            exit(-1);

        default:
        }
        switch (pidj2=fork())
            {
            case -1:
                fprintf(stderr, "Erreur du troisieme fork\n");
                exit(-1);
            case 0:
                

            default:
        }
        switch (pidj3=fork())
                {
                case -1:
                    fprintf(stderr, "Erreur du quatrieme fork\n");
                    exit(-1);
                case 0:
                    /*instruction pour le joueur 

                default:
        }
        wait(NULL)
    }
}
