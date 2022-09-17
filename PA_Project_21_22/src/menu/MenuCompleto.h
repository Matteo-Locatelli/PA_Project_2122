/*
 * MenuCompleto.h
 *
 *  Created on: 17 ago 2022
 *      Author: matte
 */

#ifndef MENU_MENUCOMPLETO_H_
#define MENU_MENUCOMPLETO_H_

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <memory>
#include <vector>
#include <list>

#include "../utente/Utente.h"
#include "../utente/Studente.h"
#include "../utente/Professore.h"

#include "Menu.h"
#include "MenuPrimo.h"
#include "MenuSecondo.h"

using namespace std;

class MenuCompleto : public MenuPrimo, MenuSecondo {

};



#endif /* MENU_MENUCOMPLETO_H_ */
