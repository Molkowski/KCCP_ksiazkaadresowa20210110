#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZadresatami
{
MetodyPomocnicze metodyPomocnicze;

const string NAZWA_PLIKU_Z_ADRESATAMI;
int idOstatniegoAdresata;

bool czyPlikJestPusty(fstream &plikTekstowy);
string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
string pobierzLiczbe(string tekst, int pozycjaZnaku);
Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami); //brak kodu do tej funkcji
int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami); // brak kodu to tej funkcji


public:
    PlikZadresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        idOstatniegoAdresata = 0;
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku( int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
};
