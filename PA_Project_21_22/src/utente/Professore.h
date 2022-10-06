/*
 * Professore.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef UTENTE_PROFESSORE_H_
#define UTENTE_PROFESSORE_H_

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <cstdlib>
#include <ctime>
#include <memory>

#include "Utente.h"
#include "../gestore/Comparable.h"

using namespace std;

class Professore : public Utente, public Comparable {

private:
	static int num_professori;

	string codice_professore;

public:
	Professore(string nome, string cognome);

	string get_codice_professore();

	virtual string get_string();

	int compare_to(comparable_ref c);

	virtual ~Professore();
};

typedef shared_ptr<Professore> professore_ref;

#endif /* UTENTE_PROFESSORE_H_ */
