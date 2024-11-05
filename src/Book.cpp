#include "Book.h"
#include <iostream>

using namespace std;

// Constructor - aici inițializăm toți membrii
Book::Book(const string& titlu_carte, const string& autor_carte, int an, float pret_carte)
 {
    // Alocăm memorie pentru fiecare membru și îl inițializăm
    titlu = new string(titlu_carte);
    autor = new string(autor_carte);
    an_publicare = new int(an);
    pret = new float(pret_carte);
}

Book::~Book() // Destructor - aici eliberăm toată memoria alocată
{
    // Ștergem memoria alocată pentru fiecare
    delete titlu;
    delete autor;
    delete an_publicare;
    delete pret;
}

Book::Book(const Book& other)// Copy constructor - creează o copie completă a obiectului
 {
    // Alocăm memorie nouă și copiem valorile
    titlu = new string(*other.titlu);
    autor = new string(*other.autor);
    an_publicare = new int(*other.an_publicare);
    pret = new float(*other.pret);
}

Book::Book(Book&& other) noexcept // Move constructor - mută resursele de la un obiect la altul
{
    // Preluăm pointerii de la celălalt obiect
    titlu = other.titlu;
    autor = other.autor;
    an_publicare = other.an_publicare;
    pret = other.pret;
    
    // Setăm pointerii originali la nullptr pentru a evita ștergerea dublă
    other.titlu = nullptr;
    other.autor = nullptr;
    other.an_publicare = nullptr;
    other.pret = nullptr;
}

// Implementarea getter-elor
string Book::getTitlu() const
{
    return *titlu;
}

string Book::getAutor() const 
{
    return *autor;
}

int Book::getAnPublicare() const
 {
    return *an_publicare;
}

float Book::getPret() const 
{
    return *pret;
}

// Implementarea setter-elor
void Book::setTitlu(const string& titlu_nou)
 {
    *titlu = titlu_nou;
}

void Book::setAutor(const string& autor_nou)
 {
    *autor = autor_nou;
}

void Book::setAnPublicare(int an_nou) 
{
    *an_publicare = an_nou;
}

void Book::setPret(float pret_nou) 
{
    *pret = pret_nou;
}