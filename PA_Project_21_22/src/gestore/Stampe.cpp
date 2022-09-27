/*
 * Stampe.cpp
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <memory>

#include "Stampe.h"

using namespace std;

void stampa_menu(menu_ref menu){
	cout << menu->get_string() <<endl;
}

void stampa_utente(utente_ref utente){
	cout << utente->get_string() <<endl;
}

void stampa_scelte_menu() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Menu disponibili: " << endl;
	cout << "Menu primo: primo a scelta + dessert/frutta a scelta + caffe -> 10�" << endl;
	cout << "Menu secondo: secondo a scelta + contorno a scelta + caffe -> 10�" << endl;
	cout << "Menu completo: primo a scelta + secondo a scelta + contorno a scelta + dessert/frutta + caffe -> 15�" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void stampa_scelte_menu_primo() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Dettaglio menu primo a 10�: " << endl;
	cout << "Primo a scelta tra: pizza, lasagne, pasta, riso" << endl;
	cout << "Dessert a scelta tra: tiramisu, cheesecake, frutta" << endl;
	cout << "Caffe" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void stampa_scelte_menu_secondo() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Dettaglio menu secondo a 10�: " << endl;
	cout << "Secondo a scelta tra: pollo, bistecca, branzino" << endl;
	cout << "Contorno a scelta tra: insalata, patate, legumi" << endl;
	cout << "Caffe" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void stampa_scelte_menu_completo() {
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Dettaglio menu completo 15�: " << endl;
	cout << "Primo a scelta tra: pizza, lasagne, pasta, riso" << endl;
	cout << "Secondo a scelta tra: pollo, bistecca, branzino" << endl;
	cout << "Contorno a scelta tra: insalata, patate, legumi" << endl;
	cout << "Dessert a scelta tra: tiramisu, cheesecake, frutta" << endl;
	cout << "Caffe" << endl;
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


