//============================================================================
// Name        : PA_Project_21_22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <memory>
#include <exception>
#include <stdexcept>

#include "gestore/Gestore.h"

using namespace std;

int main() {
	unique_ptr<Gestore> gestore(new Gestore);
	string line;
	int scelta = -1;
	cout << "Benvenuto nel sistema di prenotazione della mensa!" << endl;
	cout << "Per selezionare l'operazione da svolgere digita il corrispondente numero nel menu." << endl;
	cout << "Digita -1 per terminare il programma." << endl;
	try {
		while (true) {
			cout << "Seleziona l'operazione che vuoi svolgere dal menu (-1 termina):" << endl;
			cout << "0 - Crea il tuo menu" << endl;
			cout << "1 - Stampa la lista delle opzioni dei menu " << endl;
			cout << "2 - Stampa la lista degli utenti " << endl;
			cout << "3 - Stampa la lista dei menu " << endl;
			getline(cin, line);
			scelta = stoi(line);
			if (scelta == -1) {
				break;
			}
			switch (scelta) {
			case 0:
				gestore->nuovo_menu();
				break;
			case 1:
				gestore->stampa_opzioni_menu();
				break;
			case 2:
				gestore->stampa_utenti();
				break;
			case 3:
				gestore->stampa_lista_menu();
				break;
			default:
				cout << "Scelta non valida!" << endl;
			}
		}
	} catch (const runtime_error &e) {
		cout << "Eccezione: " << e.what() << endl;
	} catch (const exception &e) {
		cout << "Eccezione: " << e.what() << endl;
	}

	cout << "Grazie per aver usato il nostro sistema di prenotazioni! " << endl;
	cout << "Arrivederci e buon appetito! " << endl;

	return 0;

}
