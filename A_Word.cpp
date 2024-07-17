#include <iostream>  // Include the input-output stream library
#include <string>    // Include the string library
#include <cctype>    // Include the cctype library for character functions like islower, isupper, tolower, and toupper

using namespace std;

int main() {
    string s;    // Declare a string variable to store the input
    cin >> s;    // Read the input string from standard input
    int n = s.length();  // Get the length of the string
    int u = 0, l = 0;    // Initialize counters for uppercase (u) and lowercase (l) letters

    // Count the number of lowercase and uppercase letters
    for (int i = 0; i < n; i++) {
        if (islower(s[i]))   // Check if the character is lowercase
            l++;             // Increment the lowercase counter
        else if (isupper(s[i]))  // Check if the character is uppercase
            u++;             // Increment the uppercase counter
    }

    // Determine whether to convert the string to all lowercase or all uppercase
    if (l >= u) {  // If there are more lowercase letters or an equal number of lowercase and uppercase letters
        // Convert the string to all lowercase
        for (int i = 0; i < n; i++) {
            if (isupper(s[i])) {   // Check if the character is uppercase
                s[i] = tolower(s[i]);  // Convert the character to lowercase
            }
        }
    } else {  // If there are more uppercase letters
        // Convert the string to all uppercase
        for (int i = 0; i < n; i++) {
            if (islower(s[i])) {   // Check if the character is lowercase
                s[i] = toupper(s[i]);  // Convert the character to uppercase
            }
        }
    }

    cout << s << endl;  // Output the modified string

    return 0;  // Return 0 to indicate successful execution
}
 