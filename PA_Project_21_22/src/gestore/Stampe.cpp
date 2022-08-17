/*
 * Stampe.cpp
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#include "Stampe.h"

#include <vector>
#include <string>
#include <list>
#include <iostream>


using namespace std;

void stampa_menu() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Dettaglio menu: " << endl;
	cout << "Menu" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void stampa_menu_primo() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Dettaglio menu: " << endl;
	cout << "Menu primo" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void stampa_menu_secondo() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Dettaglio menu: " << endl;
	cout << "Menu secondo" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void stampa_menu_completo() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Dettaglio menu: " << endl;
	cout << "Menu completo" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void stampa_errore() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Errore: scelta non valida " << endl;
	cout << "Reset" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void stampa_errore_data_passata() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "La data deve essere futura: " << endl;
	cout << "Errore data passata" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}


