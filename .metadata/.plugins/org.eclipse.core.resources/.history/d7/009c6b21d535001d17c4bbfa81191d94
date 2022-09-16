/*
 * Menu.cpp
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
#include <map>

#include "Menu.h"

using namespace std;

Menu::Menu(utente_ref u, int prezzo, time_t data, Orario o){
	this->u = u;
	this->prezzo = prezzo;
	this->data = data;
	this->o = o;
}

Menu::Menu(const Menu &menu){
	this->u = menu.u;
	this->prezzo = menu.prezzo;
	this->data = menu.data;
	this->o = menu.o;
}

time_t Menu::get_data(){
	return this->data;
}

void Menu::set_data(time_t const data){
	time_t now = time(0);
	if(data < now){
		throw invalid_argument( "La data deve essere futura!" );
	}
	this->data = data;
}

string Menu::get_ora(){
	return getStringFromEnum(this->o);
}

void Menu::set_ora(Orario o){
	this->o = o;
}

string Menu::get_string(){
	stringstream streamer;
	streamer << "Menu di " << this->u->get_string();

	streamer << " Prezzo: " << this->prezzo <<endl;

	tm* local_data_time = localtime(&data);
	streamer << " Data: ";
	if(local_data_time != NULL){
		int year = 1900 + local_data_time->tm_year;
		int month = 1 + local_data_time->tm_mon;
		int day = local_data_time->tm_mday;
		streamer << year << "-" << month << "-" << day << endl;
	} else {
		streamer << "null ";
	}

	streamer << " Orario: " << Menu::getStringFromEnum(this->o) <<endl;

	return streamer.str();
}

Menu::~Menu(){
	cout << "Elimino menu" <<endl;
}


