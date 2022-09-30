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
	Primo primo;
	Dessert dessert;
	Caffe caffe;
	static const int prezzo_menu_primo = 10;

public:
	MenuPrimo(utente_ref u, int prezzo , time_t data, Orario o, Primo primo, Dessert dessert, Caffe caffe);

	MenuPrimo(menu_ref menu, Primo primo, Dessert dessert, Caffe caffe);

	static int get_prezzo();

	virtual Primo get_primo();

	virtual void set_primo(Primo const p);

	virtual Dessert get_dessert();

	virtual void set_dessert(Dessert const d);

	virtual Caffe get_caffe();

	virtual void set_caffe(Caffe const c);

	static Primo get_primo_from_int(int p);

	static Dessert get_dessert_from_int(int d);

	static Caffe get_caffe_from_int(int c);

	static string get_string_primo_from_enum(Primo const p);

	static string get_string_dessert_from_enum(Dessert const d);

	static string get_string_caffe_from_enum(Caffe const c);

	virtual string get_string();

	virtual ~MenuPrimo();
};

typedef shared_ptr<MenuPrimo> menu_primo_ref;

#endif /* MENU_MENUPRIMO_H_ */
