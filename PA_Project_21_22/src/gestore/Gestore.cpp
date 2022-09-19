/*
 * Gestore.cpp
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#include "Gestore.h"

#include <iostream>
#include <vector>
#include <string>

#include "../menu/Menu.h"
#include "../menu/MenuCompleto.h"
#include "../menu/MenuPrimo.h"
#include "../menu/MenuSecondo.h"

#include "Stampe.h"

using namespace std;

Gestore::Gestore(){
	init();
}

void Gestore::init(){

}

void Gestore::nuovo_menu_primo(){

}

void Gestore::nuovo_menu_secondo(){

}

void Gestore::nuovo_menu_completo(){

}

void Gestore::stampa_lista_menu(){
	stampa_lista_menu_primo();
	stampa_lista_menu_secondo();
	stampa_lista_menu_completo();
}

void Gestore::stampa_lista_menu_primo(){
	cout << "Menu primo: " << endl;
	// stampare lista degli utenti con menu primo
}

void Gestore::stampa_lista_menu_secondo(){
	cout << "Menu secondo: " << endl;
	// stampare lista utenti con menu secondo
}

void Gestore::stampa_lista_menu_completo(){
	cout << "Menu completo: " << endl;
	// stampare lista utenti con menu completo
}

void Gestore::stampa_opzioni_menu(){
	stampa_menu();
}

void Gestore::stampa_opzioni_menu_primo(){
	stampa_menu_primo();
}

void Gestore::stampa_opzioni_menu_secondo(){
	stampa_menu_secondo();
}

void Gestore::stampa_opzioni_menu_completo(){
	stampa_menu_completo();
}

Gestore::~Gestore(){
	cout << "Elimino gestore" << endl;
}
