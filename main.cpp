/* A C++ PROGRAM FOR CREATING 8 CHARACTERS RANDOM PASSORDS */
#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

// Function to generate a random password
string generatePassword() {
  // Set the password length
  const int length = 8;

  // Sets the characters that can be used in the password
  const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; //these are alpha numeric characters

  // Initialize the password string
  string password = ""; //Values are initialize here

  // Seed the random number generator with the current time
  srand(time(NULL));

  // Generate the password
  for (int i = 0; i < length; i++) {
    // Pick a random character from the charset
    char c = charset[rand() % charset.length()];

    // Add the character to the password
    password += c; //Password is store in C
  }

  // Return the password
  return password;
}

int main() {
  // Generate a random password
  string password = generatePassword();

  // Print the password
  cout << "The password is: " << password << endl;

  return 0;
}
