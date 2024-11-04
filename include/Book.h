#ifndef BOOK_H //previn includerea multipla a fisierului
#define BOOK_H

#include <string>


//definim clasa Book
class Book
{
    private: //membrii privati - parte pentru incapsulare
        std::string* titlu;
        std::string* autor;
        int* an_publicare;
        float* pret;

    public: //metode publice - interfata clasei
    //constructor - creeaza o noua carte
        Book(const std::string& titlu_carte,
             const std::string& autor_carte,
             int an,
             float pret_carte);

        ~Book(); //destructor - curata memoria cand obiectul este sters

        Book(const Book& other); //copy constructor - face o copie a unei carti deja existente 

        Book(Book&& other) noexcept; //move constructor - muta datele dintr-o parte in alta

    // Getters - funcții pentru a citi datele private
        std::string getTitlu() const;
        std::string getAutor() const;
        int getAnPublicare() const;
        float getPret() const;
    
    // Setters - funcții pentru a modifica datele private
        void setTitlu(const std::string& titlu_nou);
        void setAutor(const std::string& autor_nou);
        void setAnPublicare(int an_nou);
        void setPret(float pret_nou);
};

#endif