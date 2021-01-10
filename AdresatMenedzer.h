#pragma once

#include <iostream>
#include <vector>
#include "PlikZadresatami.h"
#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZadresatami plikZadresatami;

    MetodyPomocnicze metodyPomocnicze;

    void wyswietlDaneAdresata(Adresat adresat);


public:
    Adresat podajDaneNowegoAdresata();
AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika )
 : plikZadresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
 {
 adresaci = plikZadresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
 };
void dodajAdresata();
void wyswietlWszystkichAdresatow();

};

