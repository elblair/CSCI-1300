/* QUESTION 1 CODERUNNER
#include <iostream>

using namespace std; 

char shiftChar(char c, int shift) {
    int newNum = int(c) + shift;
    int newChar;
    if (c >= 97 && c<= 122) {
        if (newNum>122) {
            while (newNum>122) {
                newNum = newNum - 26;
            }
        }
        else if (newNum<97) {
            while (newNum<97) {
                newNum = newNum + 26;
            }
        }   
    }
    else {
        return c;
    }
    newChar = char(newNum);
    return newChar;
}

int main () {
    char c;
    int shift;
    cout << "Enter a letter to encrypt: " << endl;
    cin >> c;
    cout << "Enter a integer to shift the letter by: " << endl;
    cin >> shift;
    cout << "The encrypted letter is: " << shiftChar(c,shift) << endl; 
    return 0;
}
*/

/*QUESTION 2 CODERUNNER
#include <iostream>
#include <string>

using namespace std;

int getMethod2ShiftAmount(string key1){
    int numOfVowels = 0;
    int numOfChar = key1.length();
    int shiftValue;
    for (int i = 0; i < key1.length(); i++){
        if (key1[i]=='a' || key1[i]=='e' || key1[i]=='i' || key1[i]=='o'|| key1[i]=='u' || key1[i]=='y') {
            numOfVowels ++;
        }
    }
    shiftValue = (numOfVowels + numOfChar)%26;
    return shiftValue;
}
int main(){
    string key;
    cout << "Enter key 1:" << endl;
    cin >> key;
    cout << "The Method 2 Shift Value is: " << getMethod2ShiftAmount(key);
    return 0;
}
*/

/* QUESTION 3 CODERUNNER
#include <iostream> 
#include <string>

using namespace std;

int getMethod3ShiftAmount(string key1, string key2) {
    int shift = 0;
    int count = 0; 
    for (int i = 0; i < key1.length(); i++) {
        for (int j = 0; j < key2.length(); j++) {
            if (key2[j]==key1[i]) {
                count++;
            }
        }
    }
    shift = count % 26;
    return shift;
}

int main() {
    string key1;
    string key2;
    cout << "Enter key 1:" << endl;
    cin >> key1;
    cout << "Enter key 2:" << endl;
    cin >> key2;
    cout << "The Method 3 Shift Value is: " << getMethod3ShiftAmount(key1, key2);
    return 0;
}
*/

/* QUESTION 4 CODERUNNER
#include <iostream> 
#include <string> 

using namespace std;

char shiftChar(char c, int shift) {
    int newNum = int(c) + shift;
    int newChar;
    if (c >= 97 && c<= 122) {
        if (newNum>122) {
            while (newNum>122) {
                newNum = newNum - 26;
            }
        }
        else if (newNum<97) {
            while (newNum<97) {
                newNum = newNum + 26;
            }
        }   
    }
    else {
        return c;
    }
    newChar = char(newNum);
    return newChar;
}

int getMethod2ShiftAmount(string key1){
    int numOfVowels = 0;
    int numOfChar = key1.length();
    int shiftValue;
    for (int i = 0; i < key1.length(); i++){
        if (key1[i]=='a' || key1[i]=='e' || key1[i]=='i' || key1[i]=='o'|| key1[i]=='u' || key1[i]=='y') {
            numOfVowels ++;
        }
    }
    shiftValue = (numOfVowels + numOfChar)%26;
    return shiftValue;
}

int getMethod3ShiftAmount(string key1, string key2) {
    int shift = 0;
    int count = 0; 
    for (int i = 0; i < key1.length(); i++) {
        for (int j = 0; j < key2.length(); j++) {
            if (key2[j]==key1[i]) {
                count++;
            }
        }
    }
    shift = count % 26;
    return shift;
}

char encryptChar(char c, int method_choice, string key1, string key2) {
    if (method_choice == 1) {
        c = shiftChar(c,1);
    }
    else if (method_choice == 2) {
        int shiftM2 = getMethod2ShiftAmount(key1);
        c = shiftChar(c, shiftM2);
    }
    else if (method_choice == 3) {
        int shiftM3 = getMethod3ShiftAmount(key1, key2);
        c = shiftChar(c, shiftM3);
    }
    else {
        cout << "Invalid encryption method" << endl;
    }
    return c; 
}

int main() {
    char c;
    int methodChoice;
    string key1;
    string key2;
    cout << "Enter a letter to encrypt: " << endl;
    cin >> c;
    cout << "Enter key 1:" << endl;
    cin >> key1;
    cout << "Enter key 2:" << endl;
    cin >> key2;
    cout << "Select the Encryption Method to Use (1, 2, or 3):" <<endl;
    cin >> methodChoice;
    cout << "The encrypted letter is: " << encryptChar(c, methodChoice, key1, key2);
    return 0; 
}
*/

/*QUESTION 5 CODERUNNER 
#include <iostream>
#include <string>
using namespace std;

char shiftChar(char c, int shift) {
    int newNum = int(c) + shift;
    int newChar;
    if (c >= 97 && c<= 122) {
        if (newNum>122) {
            while (newNum>122) {
                newNum = newNum - 26;
            }
        }
        else if (newNum<97) {
            while (newNum<97) {
                newNum = newNum + 26;
            }
        }   
    }
    else {
        return c;
    }
    newChar = char(newNum);
    return newChar;
}

int getMethod2ShiftAmount(string key1){
    int numOfVowels = 0;
    int numOfChar = key1.length();
    int shiftValue;
    for (int i = 0; i < key1.length(); i++){
        if (key1[i]=='a' || key1[i]=='e' || key1[i]=='i' || key1[i]=='o'|| key1[i]=='u' || key1[i]=='y') {
            numOfVowels ++;
        }
    }
    shiftValue = (numOfVowels + numOfChar)%26;
    return shiftValue;
}

int getMethod3ShiftAmount(string key1, string key2) {
    int shift = 0;
    int count = 0; 
    for (int i = 0; i < key1.length(); i++) {
        for (int j = 0; j < key2.length(); j++) {
            if (key2[j]==key1[i]) {
                count++;
            }
        }
    }
    shift = count % 26;
    return shift;
}

char decryptChar(char c, int method_choice, string key1, string key2) {
    if (method_choice == 1) {
        c = shiftChar(c,-1);
    }
    else if (method_choice == 2) {
        int shiftM2 = getMethod2ShiftAmount(key1);
        c = shiftChar(c, -shiftM2);
    }
    else if (method_choice == 3) {
        int shiftM3 = getMethod3ShiftAmount(key1, key2);
        c = shiftChar(c, -shiftM3);
    }
    else {
        cout << "Invalid decryption method" << endl;
    }
    return c; 
}

int main() {
    char c;
    int methodChoice;
    string key1;
    string key2;
    cout << "Enter a letter to encrypt: " << endl;
    cin >> c;
    cout << "Enter key 1:" << endl;
    cin >> key1;
    cout << "Enter key 2:" << endl;
    cin >> key2;
    cout << "Select the Encryption Method to Use (1, 2, or 3):" <<endl;
    cin >> methodChoice;
    cout << "The encrypted letter is: " << encryptChar(c, methodChoice, key1, key2);
    return 0; 
}
*/

/* QUESTION 6 CODERUNNER 
#include <iostream>
#include <string>
using namespace std;

char shiftChar(char c, int shift) {
    int newNum = int(c) + shift;
    int newChar;
    if (c >= 97 && c<= 122) {
        if (newNum>122) {
            while (newNum>122) {
                newNum = newNum - 26;
            }
        }
        else if (newNum<97) {
            while (newNum<97) {
                newNum = newNum + 26;
            }
        }   
    }
    else {
        return c;
    }
    newChar = char(newNum);
    return newChar;
}

int getMethod2ShiftAmount(string key1){
    int numOfVowels = 0;
    int numOfChar = key1.length();
    int shiftValue;
    for (int i = 0; i < key1.length(); i++){
        if (key1[i]=='a' || key1[i]=='e' || key1[i]=='i' || key1[i]=='o'|| key1[i]=='u' || key1[i]=='y') {
            numOfVowels ++;
        }
    }
    shiftValue = (numOfVowels + numOfChar)%26;
    return shiftValue;
}

int getMethod3ShiftAmount(string key1, string key2) {
    int shift = 0;
    int count = 0; 
    for (int i = 0; i < key1.length(); i++) {
        for (int j = 0; j < key2.length(); j++) {
            if (key2[j]==key1[i]) {
                count++;
            }
        }
    }
    shift = count % 26;
    return shift;
}

char encryptChar(char c, int method_choice, string key1, string key2) {
    if (method_choice == 1) {
        c = shiftChar(c,1);
    }
    else if (method_choice == 2) {
        int shiftM2 = getMethod2ShiftAmount(key1);
        c = shiftChar(c, shiftM2);
    }
    else if (method_choice == 3) {
        int shiftM3 = getMethod3ShiftAmount(key1, key2);
        c = shiftChar(c, shiftM3);
    }
    else {
        cout << "Invalid encryption method" << endl;
    }
    return c; 
}

string encryptMessage(string message, int method_choice, string key1, string key2) {
    char cTemp;
    int shift;
    if (method_choice == 4)
    {
        for (int i = 0; i < message.length(); i++) {
            if (i % 3 == 0) {
                cTemp = message[i];
                message[i]= shiftChar(cTemp,1);

            }
            else if (i % 3 == 1) {
                cTemp = message[i];
                message[i] = encryptChar(cTemp, 2, key1, key2);

            }
            else if (i % 3 == 2) {
                cTemp = message[i];
                message[i] = encryptChar(cTemp, 3, key1, key2);
            }

        }
    }
    else if (method_choice == 3){
        for (int i = 0; i < message.length(); i++) {
            cTemp = message[i];
            shift = getMethod3ShiftAmount(key1,key2);
            message[i] = shiftChar(cTemp, shift);
        }
    }
    else if (method_choice == 2) {
        // cout << "working with : " << message << endl;
        // cout << "entrered preopr" << endl;
        int length = message.length();
        for (int i = 0; i < length; i++) {
            cTemp = message[i];
            shift = getMethod2ShiftAmount(key1);
            // cout << "shift is " << shift << endl;
            message[i] = shiftChar(cTemp, shift);

        }
    }
    else if (method_choice == 1) {
        for (int i = 0; i < message.length(); i++) {
            cTemp = message[i];
            message[i] = shiftChar(cTemp,1);
        }
    }
    else {
        cout << "Invalid encryption method" << endl;
    }
    return message;
}

int main() {
    string mes;
    int methodChoice;
    string key1;
    string key2;
    cout << "Enter a message to encrypt: " << endl;
    getline(cin, mes);
    cout << "Enter key 1:" << endl;
    getline(cin, key1);
    cout << "Enter key 2:" << endl;
    cin >> key2;
    cout << "Select the Encryption Method to Use (1, 2, 3, or 4):" <<endl;
    cin >> methodChoice;
    cout << "The encrypted letter is: " << encryptMessage(mes, methodChoice, key1, key2);
    return 0; 
}
*/

/* QUESTION 7 CODERUNNER 
#include <iostream>
#include <string>
using namespace std;

char shiftChar(char c, int shift) {
    int newNum = int(c) + shift;
    int newChar;
    if (c >= 97 && c<= 122) {
        if (newNum>122) {
            while (newNum>122) {
                newNum = newNum - 26;
            }
        }
        else if (newNum<97) {
            while (newNum<97) {
                newNum = newNum + 26;
            }
        }   
    }
    else {
        return c;
    }
    newChar = char(newNum);
    return newChar;
}

int getMethod2ShiftAmount(string key1){
    int numOfVowels = 0;
    int numOfChar = key1.length();
    int shiftValue;
    for (int i = 0; i < key1.length(); i++){
        if (key1[i]=='a' || key1[i]=='e' || key1[i]=='i' || key1[i]=='o'|| key1[i]=='u' || key1[i]=='y') {
            numOfVowels ++;
        }
    }
    shiftValue = (numOfVowels + numOfChar)%26;
    return shiftValue;
}

int getMethod3ShiftAmount(string key1, string key2) {
    int shift = 0;
    int count = 0; 
    for (int i = 0; i < key1.length(); i++) {
        for (int j = 0; j < key2.length(); j++) {
            if (key2[j]==key1[i]) {
                count++;
            }
        }
    }
    shift = count % 26;
    return shift;
}

char decryptChar(char c, int method_choice, string key1, string key2) {
    if (method_choice == 1) {
        c = shiftChar(c,-1);
    }
    else if (method_choice == 2) {
        int shiftM2 = getMethod2ShiftAmount(key1);
        c = shiftChar(c, -shiftM2);
    }
    else if (method_choice == 3) {
        int shiftM3 = getMethod3ShiftAmount(key1, key2);
        c = shiftChar(c, -shiftM3);
    }
    else {
        cout << "Invalid decryption method" << endl;
    }
    return c; 
}

string decryptMessage(string message, int method_choice, string key1, string key2) {
    char cTemp;
    int shift;
    if (method_choice == 4)
    {
        for (int i = 0; i < message.length(); i++) {
            if (i % 3 == 0) {
                cTemp = message[i];
                message[i]= shiftChar(cTemp,-1);

            }
            else if (i % 3 == 1) {
                cTemp = message[i];
                message[i] = decryptChar(cTemp, 2, key1, key2);

            }
            else if (i % 3 == 2) {
                cTemp = message[i];
                message[i] = decryptChar(cTemp, 3, key1, key2);
            }

        }
    }
    else if (method_choice == 3){
        for (int i = 0; i < message.length(); i++) {
            cTemp = message[i];
            shift = getMethod3ShiftAmount(key1,key2);
            message[i] = shiftChar(cTemp, -shift);
        }
    }
    else if (method_choice == 2) {
        // cout << "working with : " << message << endl;
        // cout << "entered proper" << endl;
        int length = message.length();
        for (int i = 0; i < length; i++) {
            cTemp = message[i];
            shift = getMethod2ShiftAmount(key1);
            // cout << "shift is " << shift << endl;
            message[i] = shiftChar(cTemp, -shift);

        }
    }
    else if (method_choice == 1) {
        for (int i = 0; i < message.length(); i++) {
            cTemp = message[i];
            message[i] = shiftChar(cTemp,-1);
        }
    }
    else {
        cout << "Invalid decryption method" << endl;
    }
    return message;
}

int main() {
    string mes;
    int methodChoice;
    string key1;
    string key2;
    cout << "Enter a message to encrypt: " << endl;
    getline(cin, mes);
    cout << "Enter key 1:" << endl;
    getline(cin, key1);
    cout << "Enter key 2:" << endl;
    cin >> key2;
    cout << "Select the Decryption Method to Use (1, 2, 3, or 4):" <<endl;
    cin >> methodChoice;
    cout << "The decrypted letter is: " << decryptMessage(mes, methodChoice, key1, key2);
    return 0; 
}
*/

//QUESTION 8 CODERUNNER 

#include <iostream>
#include <string>
using namespace std;

char shiftChar(char c, int shift) {
    int newNum = int(c) + shift;
    int newChar;
    if (c >= 97 && c<= 122) {
        if (newNum>122) {
            while (newNum>122) {
                newNum = newNum - 26;
            }
        }
        else if (newNum<97) {
            while (newNum<97) {
                newNum = newNum + 26;
            }
        }   
    }
    else {
        return c;
    }
    newChar = char(newNum);
    return newChar;
}

int getMethod2ShiftAmount(string key1){
    int numOfVowels = 0;
    int numOfChar = key1.length();
    int shiftValue;
    for (int i = 0; i < key1.length(); i++){
        if (key1[i]=='a' || key1[i]=='e' || key1[i]=='i' || key1[i]=='o'|| key1[i]=='u' || key1[i]=='y') {
            numOfVowels ++;
        }
    }
    shiftValue = (numOfVowels + numOfChar)%26;
    return shiftValue;
}

int getMethod3ShiftAmount(string key1, string key2) {
    int shift = 0;
    int count = 0; 
    for (int i = 0; i < key1.length(); i++) {
        for (int j = 0; j < key2.length(); j++) {
            if (key2[j]==key1[i]) {
                count++;
            }
        }
    }
    shift = count % 26;
    return shift;
}

char encryptChar(char c, int method_choice, string key1, string key2) {
    if (method_choice == 1) {
        c = shiftChar(c,1);
    }
    else if (method_choice == 2) {
        int shiftM2 = getMethod2ShiftAmount(key1);
        c = shiftChar(c, shiftM2);
    }
    else if (method_choice == 3) {
        int shiftM3 = getMethod3ShiftAmount(key1, key2);
        c = shiftChar(c, shiftM3);
    }
    else {
        cout << "Invalid encryption method" << endl;
    }
    return c; 
}

char decryptChar(char c, int method_choice, string key1, string key2) {
    if (method_choice == 1) {
        c = shiftChar(c,-1);
    }
    else if (method_choice == 2) {
        int shiftM2 = getMethod2ShiftAmount(key1);
        c = shiftChar(c, -shiftM2);
    }
    else if (method_choice == 3) {
        int shiftM3 = getMethod3ShiftAmount(key1, key2);
        c = shiftChar(c, -shiftM3);
    }
    else {
        cout << "Invalid decryption method" << endl;
    }
    return c; 
}

string decryptMessage(string message, int method_choice, string key1, string key2) {
    char cTemp;
    int shift;
    if (method_choice == 4)
    {
        for (int i = 0; i < message.length(); i++) {
            if (i % 3 == 0) {
                cTemp = message[i];
                message[i]= shiftChar(cTemp,-1);

            }
            else if (i % 3 == 1) {
                cTemp = message[i];
                message[i] = decryptChar(cTemp, 2, key1, key2);

            }
            else if (i % 3 == 2) {
                cTemp = message[i];
                message[i] = decryptChar(cTemp, 3, key1, key2);
            }

        }
    }
    else if (method_choice == 3){
        for (int i = 0; i < message.length(); i++) {
            cTemp = message[i];
            shift = getMethod3ShiftAmount(key1,key2);
            message[i] = shiftChar(cTemp, -shift);
        }
    }
    else if (method_choice == 2) {
        // cout << "working with : " << message << endl;
        // cout << "entrered preopr" << endl;
        int length = message.length();
        for (int i = 0; i < length; i++) {
            cTemp = message[i];
            shift = getMethod2ShiftAmount(key1);
            // cout << "shift is " << shift << endl;
            message[i] = shiftChar(cTemp, -shift);

        }
    }
    else if (method_choice == 1) {
        for (int i = 0; i < message.length(); i++) {
            cTemp = message[i];
            message[i] = shiftChar(cTemp,-1);
        }
    }
    else {
        cout << "Invalid decryption method" << endl;
    }
    return message;
}

string encryptMessage(string message, int method_choice, string key1, string key2) {
    char cTemp;
    int shift;
    if (method_choice == 4)
    {
        for (int i = 0; i < message.length(); i++) {
            if (i % 3 == 0) {
                cTemp = message[i];
                message[i]= shiftChar(cTemp,1);

            }
            else if (i % 3 == 1) {
                cTemp = message[i];
                message[i] = encryptChar(cTemp, 2, key1, key2);

            }
            else if (i % 3 == 2) {
                cTemp = message[i];
                message[i] = encryptChar(cTemp, 3, key1, key2);
            }

        }
    }
    else if (method_choice == 3){
        for (int i = 0; i < message.length(); i++) {
            cTemp = message[i];
            shift = getMethod3ShiftAmount(key1,key2);
            message[i] = shiftChar(cTemp, shift);
        }
    }
    else if (method_choice == 2) {
        // cout << "working with : " << message << endl;
        // cout << "entrered preopr" << endl;
        int length = message.length();
        for (int i = 0; i < length; i++) {
            cTemp = message[i];
            shift = getMethod2ShiftAmount(key1);
            // cout << "shift is " << shift << endl;
            message[i] = shiftChar(cTemp, shift);

        }
    }
    else if (method_choice == 1) {
        for (int i = 0; i < message.length(); i++) {
            cTemp = message[i];
            message[i] = shiftChar(cTemp,1);
        }
    }
    else {
        cout << "Invalid encryption method" << endl;
    }
    return message;
}

int main() {
    int menuChoice = 0;
    int input = 0;
    string key1;
    string key2;
    string mes;
    while (1) {
        cout << "Please input 1-6 followed by enter to navigate the menu: " << endl;
        cout << "1. Set Encryption Key 1" << endl;
        cout << "2. Set Encryption Key 2" << endl;
        cout << "3. Select Encryption Method" << endl;
        cout << "4. Encrypt Message" << endl;
        cout << "5. Decrypt Message" << endl;
        cout << "6. Exit Program" << endl; 
        cin >> menuChoice;
        while (cin.fail() || menuChoice<1 || menuChoice>6) {
            cout << "Invalid input" << endl;
            cin.clear(); //clears fail state
            cin.ignore(10000, '\n'); // clear the input buffer
            cin >> menuChoice;
        }
        if (menuChoice == 1) {
            cout << "Enter key:" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            getline(cin, key1);
            // tests invalid input  
            while (cin.fail() == true || key1.length() == 0) {
                cout << "Invalid key" << endl;
                // cin.clear(); //clear error state
                // cin.ignore(10000, '\n'); // ignores first 10000 inputs previous
                cout << "Enter key:" << endl;
                getline(cin, key1);
            }
            cout << "Successfully set encryption key1 to " << key1 << endl;
        }
        else if (menuChoice == 2) {
            cout << "Enter key:" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            getline(cin, key2);
            // tests invalid input  
            while (cin.fail() == true || key2.length() == 0) {
                cout << "Invalid key" << endl;
                // cin.clear(); //clear error state
                // cin.ignore(10000, '\n'); // ignores first 10000 inputs previous
                cout << "Enter key:" << endl;
                getline(cin, key2);
            }
            cout << "Successfully set encryption key2 to " << key2 << endl;
        }
        else if (menuChoice == 3) {
            cout << "Please input 1-4 to decide encryption technique." << endl;
            cout << "1. Method1 only (shift by 1)" << endl;
            cout << "2. Method2 only (shift by first key)" << endl;
            cout << "3. Method3 only (shift by both keys)" << endl;
            cout << "4. Mix of Method1, Method2, Method3" << endl;
            cin >> input;
            while (cin.fail() || input != 1 && input != 2 && input != 3 && input != 4) {
                cout << "Invalid encryption choice" << endl;
                cin.clear();
                cin.ignore(10000, '\n'); // clear the input buffer
                cin >> input; //read a whole line
            }
            cout << "Successfully set encryption type to " << input << endl;
        }
        else if (menuChoice == 4) {
            if (key1.empty() || key2.empty() || input == 0) {
                cout << "You cannot do this until you set both keys and choose an encryption method" << endl;
            }
            else {
                cout << "Enter your message to encrypt:" << endl;
                cin.ignore(10000, '\n'); // clear the input buffer
                getline(cin, mes); //read a whole line
                cout << encryptMessage(mes, input, key1, key2) << endl;
            }
        }
        else if (menuChoice == 5) {
            if (key1.empty() || key2.empty() || input == 0) {
                cout << "You cannot do this until you set both keys and choose an encryption method" << endl;
            }
            else {
                cout << "Enter your message to decrypt:" << endl;
                cin.ignore(); // clear the input buffer
                getline(cin, mes); //read a whole line 
                cout << decryptMessage(mes, input, key1, key2) << endl;
            }
        }
        else if (menuChoice == 6) {
            cout << "Goodbye." << endl;
            break;
            return 0;
        }
        else {
            cout << "Invalid input" << endl;
            return 0;
        }
    }
}
