#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept> // For std::invalid_argument

using namespace std;

int hex2Dec(const string& hex);
int hexCharToDecimal(char ch);

int main()
{
    cout << "Enter a hex number: ";
    string hex;
    cin >> hex;

    try {
        cout << "The decimal value for hex number " << hex
             << " is " << hex2Dec(hex) << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

int hex2Dec(const string& hex)
{
    int decimalValue = 0;
    for (unsigned i = 0; i < hex.size(); i++) {
        decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]);
    }
    return decimalValue;
}

int hexCharToDecimal(char ch)
{
    ch = toupper(ch);

    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    } else if (ch >= 'A' && ch <= 'F') {
        return 10 + ch - 'A';
    } else {
        throw invalid_argument(string("Invalid hex character: ") + ch);
    }
}
