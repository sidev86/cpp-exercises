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

    cout << "***LANGUAGE TRANSLATOR (VER 1.0)***\n"
         << endl;
    while (true)
    {
        clrscr();
        printMenu();
        cout << "\nSelect a menu option by typing the option number: ";
        cin >> menuChoice;

        switch (menuChoice)
        {
        case 1:
            addUpdateTranslation(translator);
            break;
        case 2:
            retrieveTranslation(translator);
            break;
        case 3:
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
    cin.get();

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

    cout << "Insert the english word to translate: ";
    cin >> englishWord;
    cout << "\nInsert the translated word: ";
    cin >> translatedWord;

    translator.addTranslation(englishWord, translatedWord);
    cout << "Translator Updated." << endl;
}

void retrieveTranslation(const LanguageTranslator &translator)
{
    string englishWord;
    cout << "Type the english word to translate: ";
    cin >> englishWord;
    cout << "\nChecking the translation for the word '" << englishWord << "'" << endl;

    cout << englishWord << " ->  " << translator.getTranslation(englishWord) << endl;
}