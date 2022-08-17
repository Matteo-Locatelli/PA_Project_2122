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

void Gestore::stampa_lista_menu(){
	cout << "Menu disponibili: " << endl;
	cout << "Menu primo: primo a scelta + frutta/dolce + caffe -> 10�" << endl;
	cout << "Menu primo: secondo a scelta + frutta/dolce + caffe -> 10�" << endl;
	cout << "Menu primo: primo a scelta + secondo a scelta + frutta/dolce + caffe -> 15�" << endl;
}

void Gestore::stampa_lista_menu_primo(){
	cout << "Menu primo: " << endl;

}

void Gestore::stampa_lista_menu_secondo(){
	cout << "Menu secondo: " << endl;

}

void Gestore::stampa_lista_menu_completo(){
	cout << "Menu completo: " << endl;

}

Gestore::~Gestore(){

}
