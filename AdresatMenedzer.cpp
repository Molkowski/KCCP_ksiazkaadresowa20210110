#include "AdresatMenedzer.h"
#pragma once

void AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    system ("cls");
    cout << ">>> DODAWANIE NOWEGO ADRESATA <<< " << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    if (plikZadresatami.dopiszAdresataDoPliku(adresat))
        cout << "Nowy adresat zostal dodany " << endl;
    else
        cout << "Blad. nie udalo sie dodac nowego adresata do pliku. " << endl;
    system("pause");

}

Adresat AdresatMenedzer::podajDaneNowegoAdresata()
{

    Adresat adresat;
    string imie, nazwisko, numerTelefonu, email, adres;

    adresat.ustawId((plikZadresatami.pobierzIdOstatniegoAdresata()+1));
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    imie = metodyPomocnicze.wczytajLinie();
    imie = metodyPomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);

    cout << "Podaj nazwisko: ";
    nazwisko = metodyPomocnicze.wczytajLinie();
    nazwisko = metodyPomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko) ;

    cout << "Podaj numer telefonu: ";
    numerTelefonu = metodyPomocnicze.wczytajLinie();

    cout << "Podaj email: ";
    email= metodyPomocnicze.wczytajLinie();

    cout << "Podaj adres: ";
    adres = metodyPomocnicze.wczytajLinie();

    adresat.ustawImie(imie);
    adresat.ustawNazwisko(nazwisko);
    adresat.ustawNumerTelefonu(numerTelefonu);
    adresat.ustawEmail(email);
    adresat.ustawAdres(adres);

    return adresat;

};

void AdresatMenedzer::wyswietlWszystkichAdresatow()
{
        for (int i =0; i< adresaci.size(); i++)
    {
        cout << adresaci[i].pobierzId() << endl;
        cout << adresaci[i].pobierzIdUzytkownika() << endl;
        cout << adresaci[i].pobierzImie() << endl;
        cout << adresaci[i].pobierzNazwisko() << endl;
        cout << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << adresaci[i].pobierzEmail() << endl;
        cout << adresaci[i].pobierzAdres() << endl;
    }
}

