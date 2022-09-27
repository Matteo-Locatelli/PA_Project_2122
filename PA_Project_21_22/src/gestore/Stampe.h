/*
 * Stampe.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef GESTORE_STAMPE_H_
#define GESTORE_STAMPE_H_

#include <vector>
#include <string>
#include <iostream>
#include <memory>

#include "../menu/Menu.h"
#include "../menu/MenuPrimo.h"
#include "../menu/MenuSecondo.h"
#include "../menu/MenuCompleto.h"
#include "../utente/Utente.h"
#include "../utente/Studente.h"
#include "../utente/Professore.h"

using namespace std;

void stampa_menu(menu_ref menu);

void stampa_utente(utente_ref utente);

void stampa_scelte_menu();

void stampa_scelte_menu_primo();

void stampa_scelte_menu_secondo();

void stampa_scelte_menu_completo();

void stampa_errore();

void stampa_errore_data_passata();

#endif /* GESTORE_STAMPE_H_ */
