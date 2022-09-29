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

	/** SE SI USANO 2 LISTE
	//init studenti
	lista_studenti.push_back(make_shared<Studente>("Mario", "Rossi"));
	lista_studenti.push_back(make_shared<Studente>("Giuseppe", "Bianchi"));
	lista_studenti.push_back(make_shared<Studente>("Matteo", "Locatelli"));

	//init professori
	professore_ref t1(new Professore("Angelo", "Gargantini"));
	lista_professori.push_back(t1);
	lista_professori.push_back(make_shared<Professore>("Pluto", "Plutone"));
	lista_professori.push_back(make_shared<Professore>("Pippo", "Plutone"));
	 */

	// init con 1 sola lista
	studente_ref s1(new Studente("Matteo", "Locatelli"));
	lista_utenti.push_back(s1);
	lista_utenti.push_back(make_shared<Studente>("Mario", "Rossi"));
	lista_utenti.push_back(make_shared<Studente>("Giuseppe", "Bianchi"));
	professore_ref t1(new Professore("Angelo", "Gargantini"));
	lista_utenti.push_back(t1);
	lista_utenti.push_back(make_shared<Professore>("Pluto", "Plutone"));
	lista_utenti.push_back(make_shared<Professore>("Pippo", "Plutone"));

	//init menu
	lista_menu_primo.push_back(make_shared<MenuPrimo>(lista_utenti.at(0), MenuPrimo::get_prezzo(), time(0),
			Menu::get_orario_from_int(0), MenuPrimo::get_primo_from_int(0),
			MenuPrimo::get_dessert_from_int(0), MenuPrimo::get_caffe_from_int(0)));
	lista_menu_secondo.push_back(make_shared<MenuSecondo>(lista_utenti.at(1), MenuSecondo::get_prezzo(), time(0)+100000,
			Menu::get_orario_from_int(0), MenuSecondo::get_secondo_from_int(0),
			MenuSecondo::get_contorno_from_int(0), MenuSecondo::get_caffe_from_int(0)));
	lista_menu_completo.push_back(make_shared<MenuCompleto>(lista_utenti.at(2), MenuCompleto::get_prezzo(), time(0)+200000,
			Menu::get_orario_from_int(1), MenuPrimo::get_primo_from_int(1), MenuSecondo::get_secondo_from_int(1),
			MenuSecondo::get_contorno_from_int(1), MenuPrimo::get_dessert_from_int(1), MenuPrimo::get_caffe_from_int(1)));
}


/*
 * Metodi per creare nuovi menu
 */

void Gestore::nuovo_menu(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Sei nella sezione per scegliere il tuo menu! " << endl;
	cout << "Premi invio per procedere e '!' per annullare." << endl;
	cin.ignore();
	string line;
	int scelta = -1;
	while(scelta == -1){
		cout << "Scegli il tipo di menu" << endl;
		cout << "0 - Menu primo" << endl;
		cout << "1 - Menu secondo" << endl;
		cout << "2 - Menu completo" << endl;
		cout << "3 - Annulla scelta" << endl;
		getline(cin, line);
		if(line == "\0"){
			scelta = -1;
			continue;
		}
		scelta = stoi(line);
		switch(scelta){
		case 0:
			nuovo_menu_primo();
			break;
		case 1:
			nuovo_menu_secondo();
			break;
		case 2:
			nuovo_menu_completo();
			break;
		case 3:
			return;
		default:
			cout << "Scelta non valida." << endl;
			scelta = -1;
			break;
		}
	}
}

void Gestore::nuovo_menu_primo(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Selezione di un nuovo menu primo " << endl;
	utente_ref utente = utente_scelto();	// selezione dell'utente
	if (utente == nullptr) {
		return;
	}

}

void Gestore::nuovo_menu_secondo(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Selezione di un nuovo menu secondo " << endl;
	utente_ref utente = utente_scelto();	// selezione dell'utente
	if (utente == nullptr) {
		return;
	}
}

void Gestore::nuovo_menu_completo(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Selezione di un nuovo menu completo  " << endl;
	utente_ref utente = utente_scelto();	// selezione dell'utente
	if (utente == nullptr) {
		return;
	}
}

utente_ref Gestore::utente_scelto(){
	int scelta = -2;
	string line;
	cout << "Sei nella sezione di scelta di un utente: " << endl;
	cout << "Seleziona l'utente dalla lista oppure insersci '-1' per crearne uno nuovo: " << endl;
	int index = 0;
	for(auto& el: lista_utenti){
		cout << index << " - " << el->get_string();
		index++;
	}
	getline(cin, line);
	if (line == "!" || line == "\0") {
		return nullptr;
	}
	scelta = stoi(line);
	utente_ref utente_scelto;
	if(scelta == -1){
		utente_scelto = registra_nuovo_utente();
	}
	else if (scelta < index && scelta >= 0){
		utente_scelto = lista_utenti.at(scelta);
	} else {
		stampa_errore();
		return nullptr;
	}
	return utente_scelto;
}


/*
 * Metodi per la creazione di nuovi studenti e professori
 */

utente_ref Gestore::registra_nuovo_utente(){
	string nome, cognome, line;
	int ruolo = -1;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Sei nella sezione di registrazione di un nuovo utente: " << endl;
	cout << "Inserisci il nome dell'utente: " << endl;
	getline(cin, nome);
	cout << "Inserisci il cognome dell'utente: " << endl;
	getline(cin, cognome);
	utente_ref utente_creato;
	cout << "Selezionare il ruolo dell'utente: " << endl;
	cout << " 0 - Studente " << endl;
	cout << " 1 - Professore " << endl;
	cout << " 2 - Reset " << endl;
	getline(cin, line);
	if (line == "!" || line == "\0") {
		return nullptr;
	}
	ruolo = stoi(line);
	if (ruolo==0){
		utente_creato = make_shared<Studente>(nome, cognome);
	} else if (ruolo == 1){
		utente_creato = make_shared<Professore>(nome, cognome);
	} else {
		return nullptr;
	}
	lista_utenti.push_back(utente_creato);
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	return utente_creato;
}

/* SE 2 LISTE
studente_ref Gestore::registra_nuovo_studente(){
	string nome, cognome;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Sei nella sezione di registrazione di un nuovo studente: " << endl;
	cout << "Inserisci il nome dello studente: " << endl;
	getline(cin, nome);
	cout << "Inserisci il cognome dello studente: " << endl;
	getline(cin, cognome);
	studente_ref studente_creato = make_shared<Studente>(nome, cognome);

	//lista_studenti.push_back(studente_creato); se 2 liste

	lista_utenti.push_back(studente_creato);
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

	// lista_professori.push_back(professore_creato); se 2 liste

	lista_utenti.push_back(professore_creato);
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	return professore_creato;
}
 */


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
	cout << "Lista menu primo: " << endl;
	for(auto& el: lista_menu_primo){
		stampa_menu(el);
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void Gestore::stampa_lista_menu_secondo(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Lista menu secondo: " << endl;
	for(auto& el: lista_menu_secondo){
		stampa_menu(el);
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}

void Gestore::stampa_lista_menu_completo(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Lista menu completo: " << endl;
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

void Gestore::stampa_utenti(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Lista utenti: " << endl;
	for(auto& el: lista_utenti){
		stampa_utente(el);
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;

	/**	SE 2 LISTE
	 	stampa_studenti();
		stampa_professori();

	 */

}

/* STAMPE SE 2 LISTE

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
 */


/*
 * Distruttore
 */

Gestore::~Gestore(){
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "Elimino gestore" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
}
