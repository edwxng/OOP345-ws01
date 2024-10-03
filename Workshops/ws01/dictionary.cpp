
#include "dictionary.h"
#include <iostream>
#include <fstream>

namespace seneca {
    Dictionary::Dictionary() = default;

    // Constructor to load the dictionary from a file
    Dictionary::Dictionary(const char* filename) {
        loadFromFile(filename);
    }

    // Function to load the dictionary from a file
    bool Dictionary::loadFromFile(const char* filename) {
        if (filename == nullptr) {
            std::cerr << "Error: Filename is null." << std::endl;
            return false;
        }

        std::ifstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Error: Unable to open file: " << filename << std::endl;
            return false;
        }

        std::string line;
        while (std::getline(file, line)) {
            size_t delimiterPos = line.find(" - ");
            if (delimiterPos != std::string::npos) {
                std::string word = line.substr(0, delimiterPos);
                std::string definition = line.substr(delimiterPos + 3);  // Skip over " - "
                m_definitions[word] = definition;
            }
        }

        file.close();
        return true;
    }

    // Function to search for a word in the dictionary and display its definition
    void Dictionary::searchWord(const std::string& word) const {
        auto it = m_definitions.find(word);
        if (it != m_definitions.end()) {
            std::cout << word << " - " << it->second << std::endl;
        }
        else {
            std::cout << word << " not found in the dictionary." << std::endl;
        }
    }

    // Optional: Display all words and definitions
    void Dictionary::displayAll() const {
        for (const auto& entry : m_definitions) {
            std::cout << entry.first << ": " << entry.second << std::endl;
        }
    }
}