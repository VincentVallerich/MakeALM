#ifndef _TD_LIB_H
#define _TD_LIB_H

#include <stdlib.h>

/*
 * Définit deux macros de debuggage et une fonction de 
 * sortie sur erreur :
 *
 * trace() (utilisable comme fonction) :
 *		affiche le nom du fichier source et le n° de la ligne 
 *		où cette fonction apparaît sous la forme :
 *			Fichier:Ligne>
 * debug(x) (utilisable comme fonction) :
 *		affiche le nom du fichier source, le n° de la ligne 
 *		et le message formaté (cf. printf) passé en argument, 
 *		où cette fonction apparaît, sous la forme :
 *			Fichier:Ligne> x
 * exit_error
 *		comme debug (ou printf), affiche le message formaté.
 *
 * Mise en œuvre : option de compilation :
 *		-DDEBUG
 *
 */
 
#include <stdio.h>

#ifdef DEBUG

#define debug(x, ...) do { \
	printf("%s:%d:%s> ",__FILE__,__LINE__,__func__); \
	printf(x, ##__VA_ARGS__); \
	printf("\n"); \
} while (0)

#define trace() do { \
	printf("%s:%d> Trace\n",__FILE__,__LINE__); \
} while (0)

#else

#define debug(x, ...)
#define trace()

#endif

#define MAX_ERR 100

void exit_error(const char *fmt, ...);

#endif