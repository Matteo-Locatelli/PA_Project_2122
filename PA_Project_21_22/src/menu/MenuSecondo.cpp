/*
 * MenuSecondo.cpp
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

#include "MenuSecondo.h"

using namespace std;

enum Secondo : int {
	pizza = 0, lasagne = 1, pasta = 2, riso = 3
};

enum Dessert : int {
	tiramisu = 0, cheesecake = 1, frutta = 2
};

enum Caffe : int{
	no = 0, si = 1
};

MenuSecondo::MenuSecondo(utente_ref u, int prezzo , time_t data, Orario o, int secondo, int dessert, int caffe):
		Menu(u, prezzo, data, o){
	this->secondo = secondo;
	this->dessert = dessert;
	this->caffe = caffe;
}

MenuSecondo::MenuSecondo(menu_ref menu, int secondo, int dessert, int caffe) : Menu(*menu){
	this->secondo = secondo;
	this->dessert = dessert;
	this->caffe = caffe;
}

string MenuSecondo::get_string(){
	stringstream stream;

	return stream.str();
}

MenuSecondo::~MenuSecondo(){
	cout << "Elimino menu secondo" << endl;
}


