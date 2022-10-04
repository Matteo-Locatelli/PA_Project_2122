/*
 * Studente.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef UTENTE_STUDENTE_H_
#define UTENTE_STUDENTE_H_

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <cstdlib>
#include <ctime>
#include <memory>

#include "Utente.h"

using namespace std;

class Studente : public Utente {

private:
	static int num_studenti;

	string codice_studente;

public:
	Studente(string nome, string cognome);

	string get_codice_studente();

	virtual string get_string();

	virtual ~Studente();
};

typedef shared_ptr<Studente> studente_ref;

#endif /* UTENTE_STUDENTE_H_ */
