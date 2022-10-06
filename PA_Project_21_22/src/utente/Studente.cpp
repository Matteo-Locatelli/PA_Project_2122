/*
 * Studente.cpp
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

#include "Studente.h"

using namespace std;

int Studente::num_studenti = 0;

const string STUDENTE_PREFIX = "S";

Studente::Studente(string nome, string cognome) : Utente(nome, cognome){
	num_studenti++;
	codice_studente = STUDENTE_PREFIX + to_string(Utente::get_codice());
	cout << "Creo studente " << codice_studente << " " << Utente::get_string() <<endl;
}

string Studente::get_codice_studente(){
	return codice_studente;
}

string Studente::get_string(){
	stringstream streamer;
	streamer << "Codice studente: " << codice_studente << " " << Utente::get_string() <<endl;
	return streamer.str();
}

int Studente::compare_to(comparable_ref c){
	unique_ptr<Studente> other(dynamic_cast<Studente*>(c.get()));
	return this->get_cognome().compare(other->get_cognome());
}

Studente::~Studente(){
	cout << "Elimino studente " << codice_studente << " " << Utente::get_string();
}


