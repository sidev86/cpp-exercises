#include "LanguageTranslator.h"
#include <iostream>

LanguageTranslator::LanguageTranslator()
{
}

void LanguageTranslator::addTranslation(string englishWord, string translatedWord)
{
  translations[englishWord] = translatedWord;
}
string LanguageTranslator::getTranslation(string englishWord) const
{
  auto it = translations.find(englishWord);
  if (it != translations.end())
  {
    return it->second;
  }
  else
  {
    return "NOT FOUND.";
  }
}
void LanguageTranslator::printAll() const
{
  if (translations.size() == 0)
  {
    cout << "No entries in translator found!" << endl;
    cin.get();
  }
  for (const auto &pair : translations)
  {
    cout << pair.first << ": " << pair.second << endl;
  }
}