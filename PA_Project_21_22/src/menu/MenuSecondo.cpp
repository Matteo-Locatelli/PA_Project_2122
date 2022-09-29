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

int MenuSecondo::get_prezzo(){
	return prezzo_menu_secondo;
}

Secondo MenuSecondo::get_secondo(){
	return this->secondo;
}

void MenuSecondo::set_secondo(Secondo const s){
	this->secondo = s;
}

Contorno MenuSecondo::get_contorno(){
	return this->contorno;
}

void MenuSecondo::set_contorno(Contorno const c){
	this->contorno = c;
}

Caffe MenuSecondo::get_caffe(){
	return this->caffe;
}

void MenuSecondo::set_caffe(Caffe const c){
	this->caffe = c;
}

Secondo MenuSecondo::get_secondo_from_int(int s){
	if (s==0) {
		return Secondo::pollo;
	} else if (s==1) {
		return Secondo::bistecca;
	} else {
		return Secondo::branzino;
	}
}

Contorno MenuSecondo::get_contorno_from_int(int c){
	if (c==0) {
		return Contorno::insalata;
	} else if (c==1) {
		return Contorno::patate;
	} else {
		return Contorno::legumi;
	}
}

Caffe MenuSecondo::get_caffe_from_int(int c){
	if (c==0) {
		return Caffe::no;
	} else {
		return Caffe::si;
	}
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

	streamer << Menu::get_string() << endl;

	streamer << "Secondo: " << MenuSecondo::get_string_secondo_from_enum(this->secondo) << endl;
	streamer << "Contorno: " << MenuSecondo::get_string_contorno_from_enum(this->contorno) << endl;
	streamer << "Caffe: " << MenuSecondo::get_string_caffe_from_enum(this->caffe) << endl;

	return streamer.str();
}

MenuSecondo::~MenuSecondo(){
	cout << "Elimino menu secondo" << endl;
}


