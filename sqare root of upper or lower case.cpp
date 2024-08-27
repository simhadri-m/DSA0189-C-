#include <iostream>
#include <cctype>
#include <string>

class StringConverter {
    std::string str;
public:
    StringConverter(const std::string& inputStr) : str(inputStr) {}

    void toUpperCase() {
        for (char& ch : str) ch = std::toupper(static_cast<unsigned char>(ch));
    }

    void toLowerCase() {
        for (char& ch : str) ch = std::tolower(static_cast<unsigned char>(ch));
    }

    std::string getString() const { return str; }
};

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    StringConverter converter(input);

    converter.toUpperCase();
    std::cout << "Uppercase: " << converter.getString() << std::endl;

    converter.toLowerCase();
    std::cout << "Lowercase: " << converter.getString() << std::endl;

    return 0;
}
