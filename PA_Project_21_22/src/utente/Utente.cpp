/*
 * Utente.cpp
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

#include "Utente.h"

using namespace std;

int  Utente::numUtenti = 0;

Utente::Utente(string nome, string cognome){
	this->codice_utente = numUtenti++;
	this->nome = nome;
	this->cognome = cognome;
	cout << "Creo utente " << Utente::get_string();
}

int Utente::get_codice()
{
	return codice_utente;
}

string Utente::get_nome()
{
	return nome;
}

string Utente::get_cognome()
{
	return cognome;
}

void Utente::set_nome(string const nome)
{
	this->nome = nome;
}

void Utente::set_cognome(string const cognome)
{
	this->cognome = cognome;
}

string Utente::get_string(){
	stringstream streamer;
	streamer << "Nome: " << nome << " Cognome: " << cognome <<endl;
	return streamer.str();
}

Utente::~Utente(){
	cout << "ELimino utente " << Utente::get_string() <<endl;
}


