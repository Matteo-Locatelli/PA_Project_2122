/*
 * MenuSecondo.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef MENU_MENUSECONDO_H_
#define MENU_MENUSECONDO_H_

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

enum Secondo : int;

enum Contorno : int;

enum Caffe : int;

class MenuSecondo : public virtual Menu{

private:
	Secondo secondo;
	Contorno contorno;
	Caffe caffe;

public:
	MenuSecondo(utente_ref u, int prezzo , time_t data, Orario o, Secondo secondo, Contorno contorno, Caffe caffe);

	MenuSecondo(menu_ref menu, Secondo secondo, Contorno contorno, Caffe caffe);

	virtual string get_string_secondo_from_enum(Secondo const c);

	virtual string get_string_contorno_from_enum(Contorno const n);

	virtual string get_string_caffe_from_enum(Caffe const c);

	virtual string get_string();

	virtual ~MenuSecondo();
};

typedef shared_ptr<MenuSecondo> menu_secondo_ref;



#endif /* MENU_MENUSECONDO_H_ */
