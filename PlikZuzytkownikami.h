#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikZuzytkownikami
{

   const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
    vector <Uzytkownik> uzytkownicy;

public:
    PlikZuzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownicy);
    vector <Uzytkownik> wczytajUzytkownikowZPliku(); //metoda zwracajaca vector przyjmujacy wartosci zgodne z klasa Uzytkownik (id, login, haslo)

    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);

 };

