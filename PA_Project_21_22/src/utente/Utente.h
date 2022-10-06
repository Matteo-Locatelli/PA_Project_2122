/*
 * Utente.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef UTENTE_UTENTE_H_
#define UTENTE_UTENTE_H_

#include <string>
#include <vector>
#include <memory>
#include <list>
#include <iostream>
#include <assert.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Utente {

private:
	static int  numUtenti;

	int codice_utente;

	string nome;

	string cognome;

protected:
	int get_codice();

public:
	Utente(string nome, string cognome);

	string get_nome();

	string get_cognome();

	void set_nome(string const nome);

	void set_cognome(string cognome);

	virtual string get_string();

	virtual bool operator > (Utente other)
	{
		return this->get_cognome() > other.get_cognome();
	}

	virtual ~Utente();

};

typedef shared_ptr<Utente> utente_ref;

#endif /* UTENTE_UTENTE_H_ */
