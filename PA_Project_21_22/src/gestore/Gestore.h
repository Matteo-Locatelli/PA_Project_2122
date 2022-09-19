/*
 * Gestore.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef GESTORE_GESTORE_H_
#define GESTORE_GESTORE_H_

#include <vector>
#include <string>

#include "../menu/Menu.h"
#include "../menu/MenuCompleto.h"
#include "../menu/MenuPrimo.h"
#include "../menu/MenuSecondo.h"

class Gestore {

private:

	void init();

public:

	Gestore();

	void nuovo_menu_primo();

	void nuovo_menu_secondo();

	void nuovo_menu_completo();

	void stampa_lista_menu();

	void stampa_lista_menu_primo();

	void stampa_lista_menu_secondo();

	void stampa_lista_menu_completo();

	void stampa_opzioni_menu();

	void stampa_opzioni_menu_primo();

	void stampa_opzioni_menu_secondo();

	void stampa_opzioni_menu_completo();

	~Gestore();
};

#endif /* GESTORE_GESTORE_H_ */
