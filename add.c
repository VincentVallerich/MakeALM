#include "add.h"

void append_to_file(int argc, const char *src) {
	FILE *s;
	unsigned int c;
	char msg[80];
 
	printf("Ajout par fonctions de librairie standard\n");
	if ((s=fopen(src,"a"))==NULL) {
		sprintf(msg,"Ouverture du fichier « %s »",src);
  		exit_error(msg);
	}
	while ((c=getc(s)) !=EOF) {
		if (putc(c,s) != c) exit_error("Erreur sur putc");
	}
	fclose(s);
}