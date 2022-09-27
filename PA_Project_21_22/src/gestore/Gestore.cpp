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
#include <memory>

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

void Gestore::nuovo_menu(){

}

void Gestore::nuovo_menu_primo(){

}

void Gestore::nuovo_menu_secondo(){

}

void Gestore::nuovo_menu_completo(){

}


/*
 * Metodi per la creazione di nuovi studenti e professori
 */

studente_ref Gestore::registra_nuovo_studente(){
	string nome, cognome;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Sei nella sezione di registrazione di un nuovo studente: " << endl;
	cout << "Inserisci il nome dello studente: " << endl;
	getline(cin, nome);
	cout << "Inserisci il cognome dello studente: " << endl;
	getline(cin, cognome);
	studente_ref studente_creato = make_shared<Studente>(nome, cognome);
	lista_studenti.push_back(studente_creato);
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	return studente_creato;
}

professore_ref Gestore::registra_nuovo_professore(){
	string nome, cognome;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Sei nella sezione di registrazione di un nuovo professore: " << endl;
	cout << "Inserisci il nome del professore: " << endl;
	getline(cin, nome);
	cout << "Inserisci il cognome del professore: " << endl;
	getline(cin, cognome);
	professore_ref professore_creato = make_shared<Professore>(nome, cognome);
	lista_professori.push_back(professore_creato);
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	return professore_creato;
}


/*
 * Metodi per la stampa delle liste di menu e dei relativi utenti
 */

void Gestore::stampa_lista_menu(){
	stampa_lista_menu_primo();
	stampa_lista_menu_secondo();
	stampa_lista_menu_completo();
}

void Gestore::stampa_lista_menu_primo(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Menu primo: " << endl;
	for(auto& el: lista_menu_primo){
		stampa_menu(el);
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void Gestore::stampa_lista_menu_secondo(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Menu secondo: " << endl;
	for(auto& el: lista_menu_secondo){
		stampa_menu(el);
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void Gestore::stampa_lista_menu_completo(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Menu completo: " << endl;
	for(auto& el: lista_menu_completo){
		stampa_menu(el);
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}


/*
 * Metodi per la stampa dei vari menu e delle relative opzioni
 */

void Gestore::stampa_opzioni_menu(){
	stampa_scelte_menu();
}

void Gestore::stampa_opzioni_menu_primo(){
	stampa_scelte_menu_primo();
}

void Gestore::stampa_opzioni_menu_secondo(){
	stampa_scelte_menu_secondo();
}

void Gestore::stampa_opzioni_menu_completo(){
	stampa_scelte_menu_completo();
}


/*
 * Metodi per stampare la lista di studenti e professori registrati
 */

void Gestore::stampa_studenti(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Lista studenti: " << endl;
	for(auto& el: lista_studenti){
		stampa_utente(el);
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void Gestore::stampa_professori(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Lista professori: " << endl;
	for(auto& el: lista_professori){
		stampa_utente(el);
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}


/*
 * Distruttore
 */

Gestore::~Gestore(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Elimino gestore" << endl;
}
