#include "add.h"

void append_to_file(int argc, const char *src, const char *str) {
	FILE *s;
	unsigned int c;
	char msg[80];
 
	printf("Ajout par fonctions de librairie standard\n");
	if ((s=fopen(src,"a"))==NULL) {
		sprintf(msg,"Ouverture du fichier « %s »",src);
  		exit_error(msg);
	}
	for (int i=0; i < strlen(str); i++) {
		if (putc(str[i],s) != str[i]) exit_error("Erreur sur putc");
	}
	printf("Ajout de << %s >> dans le fichier << %s >>", str, src);
	fclose(s);
}