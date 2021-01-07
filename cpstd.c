#include "cpstd.h"

void usage(int argc, char *argv[]) {
	printf("Usage : %s source dest\n",argv[0]);
	exit(EXIT_FAILURE);
}

void cp_file(int argc, char *argv[]) {
	FILE *sfrom,*sto;
	unsigned int c;
	char msg[80];
 
	if (argc != 3) usage(argc,argv);
	printf("Copie par fonctions de librairie standard\n");
	if ((sfrom=fopen(argv[1],"r"))==NULL) {
		sprintf(msg,"Ouverture du fichier « %s »",argv[1]);
  		exit_error(msg);
	}
	if ((sto=fopen(argv[2],"w"))==NULL) {
		sprintf(msg,"Ouverture du fichier « %s »",argv[2]);
  		exit_error(msg);
	}
	while ((c=getc(sfrom)) !=EOF) {
		if (putc(c,sto) != c) exit_error("Erreur sur putc");
	}
	if (ferror(sfrom) || ferror(sto)) exit_error("Erreur lors de la copie");
	fclose(sfrom);
	fclose(sto);
}