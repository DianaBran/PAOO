#include <iostream>
#include "Book.h"
using namespace std;

int main() 
{
    // Test constructor normal
    cout << "1. Testare constructor normal:\n";
    Book carte1("Amintiri din copilarie", "Ion Creanga", 1892, 35.99);
     cout << "Carte creata: " << carte1.getTitlu() << " de " << carte1.getAutor() << " apărută în: " <<carte1.getAnPublicare() << " iar prețul este de: " <<carte1.getPret()<< "\n\n";

    // Test copy constructor
    cout << "2. Testare copy constructor:\n";
    Book carte2 = carte1;  // Aici se apelează copy constructor-ul
    cout << "Original: " << carte1.getTitlu() << ", pret: " << carte1.getPret() << "\n";
    cout << "Copie: " << carte2.getTitlu() << ", pret: " << carte2.getPret() << "\n\n";

    // Modificăm carte2
    cout << "3. Modificam carte2:\n";
    carte2.setPret(39.99);
    carte2.setAnPublicare(1893);
    cout << "Carte2 inainte de move: " << carte2.getTitlu() << ", pret: " << carte2.getPret() << "\n\n";

    // Test move constructor
    cout << "4. Testare move constructor:\n";
    cout << "Inainte de move:\n";
    cout << "Carte2: " << carte2.getTitlu() << ", pret: " << carte2.getPret() << "\n";
    
    Book carte3 = std::move(carte2);  // Aici se apelează move constructor-ul
    
    cout << "\nDupa move:\n";
    cout << "Carte3 (noul obiect): " << carte3.getTitlu() << ", pret: " << carte3.getPret() << "\n\n";
    

    return 0;
}