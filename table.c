#include <stdlib.h>
#include <string.h>
#include "table.h"

// Stocke dans table la valeur v sous la cle k
void store(PTable_entry *table, int k, char v[]) {
    PTable_entry te = (PTable_entry) malloc(sizeof(Table_entry));
    te->key = k;
    te->val = (char*) malloc(strlen(v) + 1);
    strcpy(te->val, v);
    te->next = *table;
    *table = te;
}

// Retourne la valeur se trouvant dans table sous la cle k ou NULL si la
// clé n'existe pas
char* lookup(PTable_entry table, int k) {
    PTable_entry pe = table;
    while (pe != NULL && pe->key != k) {
        pe = pe->next;
     }
    if (pe != NULL)
        return pe->val;
    else
        return NULL;
}

void display(PTable_entry table, int k){
    PTable_entry pe = table;
    if (lookup(pe, k) != NULL)
	{
		printf("%s\n", lookup(pe, k));
	} else {
		printf("Valeur inconnue \n");
	}
}
