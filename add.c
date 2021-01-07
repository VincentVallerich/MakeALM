#include "add.h"

void append_to_file(int argc, char *argv[]) {
	FILE *s;
	unsigned int c;
	char msg[80];
 
	if (argc != 3) usage(argc,argv);
	printf("Ajout par fonctions de librairie standard\n");
	if ((s=fopen(argv[1],"r"))==NULL) {
		sprintf(msg,"Ouverture du fichier « %s »",argv[1]);
  		exit_error(msg);
	}
	while ((c=getc(s)) !=EOF) {
		if (putc(c,s) != c) exit_error("Erreur sur putc");
	}
	if (ferror(sf)) exit_error("Erreur lors de la copie");
	fclose(s);
}