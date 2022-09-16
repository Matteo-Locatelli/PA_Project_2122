/*
 * MenuPrimo.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef MENU_MENUPRIMO_H_
#define MENU_MENUPRIMO_H_

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

using namespace std;

enum Primo : int;

enum Dessert : int;

enum Caffe : int;

class MenuPrimo : public virtual Menu{

private:
	int primo;
	int dessert;
	int caffe;

public:
	MenuPrimo(utente_ref u, int prezzo , time_t data, Orario o, int primo, int dessert, int caffe);

	MenuPrimo(menu_ref menu, int primo, int dessert, int caffe);

	virtual string get_string();

	virtual ~MenuPrimo();
};

typedef shared_ptr<MenuPrimo> menu_primo_ref;

#endif /* MENU_MENUPRIMO_H_ */
