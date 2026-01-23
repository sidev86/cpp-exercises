#include "LanguageTranslator.h"
#include <iostream>

void printMenu();
void addUpdateTranslation(LanguageTranslator &translator);
void retrieveTranslation(const LanguageTranslator &translator);
void printAllTranslations();
void clrscr();

int main()
{

    int menuChoice;
    LanguageTranslator translator;

    while (true)
    {
        clrscr();
        cout << "***LANGUAGE TRANSLATOR (VER 1.0)***\n"
             << endl;
        printMenu();
        cout << "\nSelect a menu option by typing the option number: ";
        cin >> menuChoice;

        switch (menuChoice)
        {
        case 1:
            addUpdateTranslation(translator);
            cin.get();
            break;
        case 2:
            retrieveTranslation(translator);
            cin.get();
            break;
        case 3:
            clrscr();
            translator.printAll();
            cin.get();
            break;
        case 0:
            return 1;
        default:
            cout << "Invalid Option!" << endl;
            break;
        }
    }
    return 0;
}

void clrscr()
{
    cout << "\033[2J\033[1;1H";
}

void printMenu()
{
    cout << "1. Add or update a translation" << endl;
    cout << "2. Retrieve a translation" << endl;
    cout << "3. Print all translations" << endl;
    cout << "0. Exit program" << endl;
}

void addUpdateTranslation(LanguageTranslator &translator)
{
    string englishWord;
    string translatedWord;

    clrscr();

    cout << "Insert the english word to translate: ";
    cin >> englishWord;
    cout << "\nInsert the translated word: ";
    cin >> translatedWord;

    translator.addTranslation(englishWord, translatedWord);
    cout << "Translator Updated." << endl;
    cin.get();
}

void retrieveTranslation(const LanguageTranslator &translator)
{
    string englishWord;
    clrscr();
    cout << "Type the english word to translate: ";
    cin >> englishWord;
    cout << "\nChecking the translation for the word '" << englishWord << "'" << endl;

    cout << englishWord << " ->  " << translator.getTranslation(englishWord) << endl;
    cin.get();
}