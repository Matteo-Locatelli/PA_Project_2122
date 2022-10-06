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

#include "Menu.h"
#include "../utente/Utente.h"
#include "../utente/Studente.h"
#include "../utente/Professore.h"

using namespace std;

enum Secondo : int;
enum Contorno : int;
enum Caffe : int;

class MenuSecondo : public virtual Menu {

private:
	Secondo secondo;
	Contorno contorno;
	Caffe caffe;
	static const int prezzo_menu_secondo;

public:
	MenuSecondo(utente_ref u, int prezzo , time_t data, Orario o, Secondo secondo, Contorno contorno, Caffe caffe);

	MenuSecondo(menu_ref menu, Secondo secondo, Contorno contorno, Caffe caffe);

	static int get_prezzo();

	Secondo get_secondo();

	void set_secondo(Secondo const s);

	Contorno get_contorno();

	void set_contorno(Contorno const c);

	virtual Caffe get_caffe();

	virtual void set_caffe(Caffe const c);

	static Secondo get_secondo_from_int(int const s);

	static Contorno get_contorno_from_int(int const c);

	static Caffe get_caffe_from_int(int const c);

	static string get_string_secondo_from_enum(Secondo const c);

	static string get_string_contorno_from_enum(Contorno const c);

	static string get_string_caffe_from_enum(Caffe const c);

	virtual string get_string();

	virtual ~MenuSecondo();
};

typedef shared_ptr<MenuSecondo> menu_secondo_ref;

#endif /* MENU_MENUSECONDO_H_ */
