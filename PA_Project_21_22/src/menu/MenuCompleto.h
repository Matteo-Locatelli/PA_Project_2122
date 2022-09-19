/*
 * MenuCompleto.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef MENU_MENUCOMPLETO_H_
#define MENU_MENUCOMPLETO_H_

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <memory>
#include <vector>
#include <list>

#include "../utente/Utente.h"
#include "../utente/Studente.h"
#include "../utente/Professore.h"

#include "Menu.h"
#include "MenuPrimo.h"
#include "MenuSecondo.h"

using namespace std;

class MenuCompleto : public MenuPrimo, public MenuSecondo {
public:
	MenuCompleto(utente_ref u, int prezzo , time_t data, Orario o,
			Primo primo, Secondo secondo, Contorno contorno, Dessert dessert, Caffe caffe);

	MenuCompleto(menu_ref menu,
			Primo primo, Secondo secondo, Contorno contorno, Dessert dessert, Caffe caffe);

	virtual string get_string();

	~MenuCompleto();
};

typedef shared_ptr<MenuCompleto> menu_completo_ref;

#endif /* MENU_MENUCOMPLETO_H_ */
