#ifndef LANGUAGE_TRANSLATOR_H
#define LANGUAGE_TRANSLATOR_H

#include <map>
#include <string>

using namespace std;

class LanguageTranslator
{
public:
    LanguageTranslator();
    void addTranslation(string englishWord, string translatedWord);
    string getTranslation(string englishWord) const;
    void printAll() const;

private:
    map<string, string> translations;
};

#endif