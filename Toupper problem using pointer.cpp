#include <iostream>
#include <cctype>   // for toupper
using namespace std;

class String {
private:
    char str[100];   // fixed-size character array
public:
    void getdata() {
        cout << "Enter your sentence: ";
        cin.getline(str, 100);
    }

    void putdata() {
        cout << "String: " << str << endl;
    }

    void upit() {
        char *ptr = str;           // pointer to first character
        while (*ptr != '\0') {     // loop until null terminator
            *ptr = toupper(*ptr);  // convert to uppercase
            ptr++;                  // move pointer to next character
        }
    }
};

int main() {
    String c1;

    c1.getdata();   // input string
    c1.upit();      // convert to uppercase
    c1.putdata();   // display uppercase string

    return 0;
}
