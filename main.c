#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*#include "capture_son.h"
#include "analyse_son.h"
#include "emission_son.h"
#include "../api/lib/libfmodex.so"*/


int main(int argc, char *argv[]) {

	if (seuil > /* valeur fixée */) {


FILE * fichier;

  char freqEch, lengthSig, amplitude;

/* ouverture du fichier en ecriture */

fichier = fopen("son.txt", "w");

	if (fichier == NULL) {
		perror("erreur en creation du fichier");
		return 1;
	}


 // stockage des donnees issues de la ligne de commandes
	if(argc != 4){
    		printf("frequence d'echantillonnage longueur du signal amplitude su signal\n");
    		exit(1);
  	}

// [freqEch, lengthSig, amplitude] = capture_son(/*données*/);

 freqEch = atoi(argv[1]); //permet de copier la séquence de texte à une destination
 lengthSig = atoi(argv[2]);
 amplitude = atoi(argv[3]);


 // ajouter les donnees dans le fichier texte

    fprintf(fichier, "\n%s %s %s", freqEch, lengthSig, amplitude);
 

 /* fermeture du fichier */

fclose(fichier);
return 0;
	}

	else {

	return 0;

	}
 
}



 
