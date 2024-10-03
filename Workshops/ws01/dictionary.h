#include <iostream>
#include <fstream>
#include <string>
#include <map>

#ifndef SENECA_DICTIONARY_H
#define SENECA_DICTIONARY_H

namespace seneca {
    class Dictionary {
        std::map<std::string, std::string> m_definitions;  // Map to store words and their definitions

    public:
        // Default constructor
        Dictionary();

        // Constructor to load the dictionary from a file
        Dictionary(const char* filename);

        // Function to load the dictionary from a file
        bool loadFromFile(const char* filename);

        // Function to search for a word in the dictionary and display its definition
        void searchWord(const std::string& word) const;

        // Optional: Display all words and definitions (useful for debugging or review)
        void displayAll() const;

    };












}

#endif