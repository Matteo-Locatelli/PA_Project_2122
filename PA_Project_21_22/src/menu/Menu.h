/*
 * Menu.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef MENU_MENU_H_
#define MENU_MENU_H_

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

using namespace std;

enum Orario : int;

class Menu {

private:
	utente_ref u;
	int prezzo;
	time_t data;
	Orario o;

public:
	Menu(utente_ref u, int prezzo , time_t data, Orario o);

	Menu(const Menu &menu);

	virtual utente_ref get_utente();

	virtual void set_utente(utente_ref const utente);

	virtual time_t get_data();

	virtual void set_data(time_t const data);

	virtual Orario get_ora();

	virtual void set_ora(Orario const o);

	virtual string get_string_orario_from_enum(Orario const o);

	static Orario get_orario_from_int(int o);

	virtual string get_string();

	virtual ~Menu();
};

typedef shared_ptr<Menu> menu_ref;

#endif /* MENU_MENU_H_ */
