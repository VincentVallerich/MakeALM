#include "../header/cpstd.h"

void usage(int argc, const char *argv[]) {
	printf("Usage : %s source dest\n",argv[0]);
	exit(EXIT_FAILURE);
}

void cp_file(int argc, const char *src, const char *dest) {
	FILE *sfrom,*sto;
	unsigned int c;
	char msg[80];
 
	printf("Copie par fonctions de librairie standard\n");
	if ((sfrom=fopen(src,"r"))==NULL) {
		sprintf(msg,"Ouverture du fichier « %s »",src);
  		exit_error(msg);
	}
	if ((sto=fopen(dest,"w"))==NULL) {
		sprintf(msg,"Ouverture du fichier « %s »",dest);
  		exit_error(msg);
	}
	while ((c=getc(sfrom)) != EOF) {
		if (putc(c,sto) != c) exit_error("Erreur sur putc");
	}
	if (ferror(sfrom) || ferror(sto)) exit_error("Erreur lors de la copie");
	fclose(sfrom);
	fclose(sto);
}