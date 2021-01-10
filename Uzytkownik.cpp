#include "Uzytkownik.h"
#pragma once

    void Uzytkownik::ustawId(int noweId)
    {
        id = noweId;
    }
    void Uzytkownik::ustawLogin(string nowyLogin)
    {
        login = nowyLogin;
    }
    void Uzytkownik::ustawHaslo(string nowehaslo)
    {
        haslo = nowehaslo;
    }

    int Uzytkownik::pobierzId()
    {
        return id;
    }
    string Uzytkownik::pobierzLogin()
    {
        return login;
    }
    string Uzytkownik::pobierzHaslo()
    {
        return haslo;
    }
