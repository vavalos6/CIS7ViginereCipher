// File:   main.cpp
// Author: Jeanine Rodriguez, Valerie Avalos, & Gianni Rahman
// Created on November 20, 2020, 4:20 PM
// Purpose: C++ Template
 
//System Libraries
#include <iostream>
#include <string>
using namespace std;
 
//Main Execution
int main() {
//variables
int selection, s, i, j;
string message, keyword;
string newKey, encrypted, decrypted;
 //prompt user for input for encryption or decryption
cout << "Would you like to Encrypt or Decrypt? \n"
        "Press 1 to Encrypt or 2 to Decrypt.\n";
cin >> selection;
 
//Check user selection
//Selection 1 is encryption
while(selection != 1 && selection != 2)
 {
   cout << "Please enter a valid selection.\n";
   cin >> selection;
 }
 
if (selection == 1)
{
 cout << "Encryption Selected.\nPlease enter message for encryption: ";
 cin >> message;
 //Capitalizes message
 for (i = 0; i < message.length(); i++)
   message[i] = toupper(message[i]);
 
 //Grab keyword to be used from User
 cout << "\nPlease enter Keyword: ";
 cin >> keyword;
 //Capitalizes keyword
 for (i = 0; i < keyword.length(); i++)
   keyword[i] = toupper(keyword[i]);
 
 //ENCRYPTION
 for(i = 0; i < message.length(); ++i)
   encrypted[i] = ((message[i] + keyword[i]) % 26) + 'A';
 
 //Output Cipher Text
 for (i = 0; i < message.length(); ++i)
 {
   cout << encrypted[i];
 }
}
 
//Selection 2 is Decryption
else if (selection == 2)
{
 cout << "Decryption Selected.\nPlease enter message for decryption: ";
 cin >> message;
 //For loop to capitalize all characters
 for (int i = 0; i < message.length(); i++)
   message[i] = toupper(message[i]);
 
 cout << "Please enter Keyword: ";
 cin >> keyword;
 for (int i = 0; i < keyword.length(); i++)
 {
   keyword[i] = toupper(keyword[i]);
 }
 
 //DECRYPTION
 for(i = 0; i < message.length(); ++i)
   decrypted[i] = ((message[i] - keyword[i]+26) % 26) + 'A';
 
 //Output Plain Text
 for (i = 0; i < message.length(); ++i)
   cout << decrypted[i];
 }
 
return 0;
}
 
