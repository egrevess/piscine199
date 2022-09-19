#include <stdio.h>

int main(int argc, char **argv, char **environ)
{
	(void) argc;
	(void) argv;
	printf("Nombre d'argument = %d\n",argc);
	printf("valeur de l'argument = %s\n",argv[0]);

	char	*str = argv[1];
}

// argc pour compter le nombre de parametres (il commence a 1, meme si on ne met rien de dans )
// argv pour value , un pointeur sur chaque adresse des paras
// char environ , permet d'acceder a shell , pour l'instant on n'en a pas besoin.
// On peut mettre des noms rendom pour les para mais par convention c'est ceux la.
// premirere valeur de l'arg c'est a.out puis ceux qu'on rajoute 
