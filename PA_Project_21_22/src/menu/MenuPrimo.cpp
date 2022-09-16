/*
 * MenuPrimo.cpp
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <ctime>
#include <memory>
#include <vector>
#include <list>

#include "../utente/Utente.h"
#include "../utente/Studente.h"
#include "../utente/Professore.h"

#include "MenuPrimo.h"

using namespace std;

enum Primo : int {
	pizza = 0, lasagne = 1, pasta = 2, riso = 3
};

enum Dessert : int {
	tiramisu = 0, cheesecake = 1, frutta = 2
};

enum Caffe : int{
	no = 0, si = 1
};

MenuPrimo::MenuPrimo(utente_ref u, int prezzo , time_t data, Orario o, int primo, int dessert, int caffe):
		Menu(u, prezzo, data, o){
	this->primo = primo;
	this->dessert = dessert;
	this->caffe = caffe;
}

MenuPrimo::MenuPrimo(menu_ref menu, int primo, int dessert, int caffe) : Menu(*menu){
	this->primo = primo;
	this->dessert = dessert;
	this->caffe = caffe;
}

string MenuPrimo::get_string(){
	stringstream stream;

	return stream.str();
}

MenuPrimo::~MenuPrimo(){
	cout << "Elimino menu primo" << endl;
}

