#pragma once

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer; //tworzenie obiektu o nazwie uzytkownikMenedzer w klasie UzytkownikMenedzer
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
    adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;

    };
    // Konstruktor KsiazkaAdresowa z lista inicjalizacyjna
    // uzytkownikMenedzer - nazwa zmiennej
    // nazwaPlikuZUzytkownikami - wartosc zmiennej
    // {} cialo konstruktora w którym jest zawarta metoda wczytajUzytkownikowZPlik() w klasie uzytkownikMenedzer

    void podajDaneNowegoAdresata();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

};
