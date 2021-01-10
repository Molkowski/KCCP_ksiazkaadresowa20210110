#pragma once

using namespace std;

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZuzytkownikami.h"
#include "MetodyPomocnicze.h"

class UzytkownikMenedzer
{

    PlikZuzytkownikami plikZuzytkownikami;

    vector <Uzytkownik> uzytkownicy; //vector o nazwie uzytkownicy przyjmujacy wartoœci z klasy Uzytkownik (id, login, haslo.
                                    //W momencie przypisania do niego wartosci w jednej z metod, jego wartosci sa dostepne dla pozostalych metod
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

    string wczytajLinie();


public:
    int idZalogowanegoUzytkownika;
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZuzytkownikami(nazwaPlikuZUzytkownikami)
    {
    idZalogowanegoUzytkownika = 0;
    uzytkownicy = plikZuzytkownikami.wczytajUzytkownikowZPliku();
    }; // <- Konstruktor z lista inicjalizacyjna klasy UzytkownikMenedzer,

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
    int pobierzIdZalogowanegoUzytkownika();

};


