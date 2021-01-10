#pragma once

#include <iostream>
#include <sstream>
#include <algorithm>

#include "Uzytkownik.h"

using namespace std;

class MetodyPomocnicze
{
public:
   static string konwerjsaIntNaString(int liczba);
   int konwersjaStringNaInt(string liczba);
   string wczytajLinie();
   string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
   char wczytajZnak();
   int wczytajLiczbeCalkowita();
};

