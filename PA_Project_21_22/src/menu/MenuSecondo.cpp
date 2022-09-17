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

#include "MenuSecondo.h"

using namespace std;

enum Secondo : int {
	pollo = 0, bistecca = 1, branzino = 2
};

enum Contorno : int {
	insalata = 0, patate = 1, legumi = 2
};

enum Caffe : int{
	no = 0, si = 1
};

MenuSecondo::MenuSecondo(utente_ref u, int prezzo , time_t data, Orario o, Secondo secondo, Contorno contorno, Caffe caffe):
		Menu(u, prezzo, data, o){
	this->secondo = secondo;
	this->contorno = contorno;
	this->caffe = caffe;
}

MenuSecondo::MenuSecondo(menu_ref menu, Secondo secondo, Contorno contorno, Caffe caffe) : Menu(*menu){
	this->secondo = secondo;
	this->contorno = contorno;
	this->caffe = caffe;
}

string MenuSecondo::get_string_secondo_from_enum(Secondo const s){
	if(s==Secondo::pollo){
		return "Pollo";
	} else if (s==Secondo::bistecca){
		return "Bistecca";
	} else if (s==Secondo::branzino){
		return "Branzino";
	} else {
		return "Errore";
	}
}

string MenuSecondo::get_string_contorno_from_enum(Contorno const c){
	if(c==Contorno::insalata){
		return "Insalata";
	} else if (c==Contorno::patate){
		return "Patate";
	} else if (c==Contorno::legumi){
		return "Legumi";
	} else {
		return "Errore";
	}
}

string MenuSecondo::get_string_caffe_from_enum(Caffe const c){
	if(c==Caffe::no){
		return "No";
	} else if (c==Caffe::si){
		return "Si";
	} else {
		return "Errore";
	}
}

string MenuSecondo::get_string(){
	stringstream streamer;

	streamer << Menu::get_string() <<endl;

	streamer << "Primo: " << MenuSecondo::get_string_secondo_from_enum(this->secondo);
	streamer << "Dessert: " << MenuSecondo::get_string_contorno_from_enum(this->contorno);
	streamer << "Primo: " << MenuSecondo::get_string_caffe_from_enum(this->caffe);
	streamer << endl;

	return streamer.str();
}

MenuSecondo::~MenuSecondo(){
	cout << "Elimino menu secondo" << endl;
}


