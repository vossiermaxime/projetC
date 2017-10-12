#include <stdio.h>
#include <stdlib.h>
#include "table.h"


int main(
         )
{
    PTable_entry liste;

	store(&liste, 1, "test 1");
	store(&liste, 2, "test 2");
	store(&liste, 4, "test 4");

	// Recherche de valeur existante
	display(liste,1);
	display(liste,4);

	// Recherche de valeur non existante
	//display(liste, 8);

    return 0;
}
