/*
 * Professore.cpp
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <cstdlib>
#include <ctime>

#include "Professore.h"

using namespace std;

unsigned int Professore::num_professori = 0;

Professore::Professore(string nome, string cognome) : Utente(nome, cognome){
	num_professori++;
	codice_professore = PROFESSORE_PREFIX + to_string(Utente::get_codice());
	cout << "Creo professore " << codice_professore << " " << Utente::get_string() <<endl;
}

string Professore::get_codice_professore(){
	return codice_professore;
}

string Professore::get_string(){
	stringstream streamer;
	streamer << "Codice professore: " << codice_professore << " " << Utente::get_string() <<endl;
	return streamer.str();
}

Professore::~Professore(){
	cout << "Elimino professore " << codice_professore << " " << Utente::get_string() <<endl;
}


