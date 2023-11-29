#include <iostream>
#include <string>

using namespace std;

// Fonction pour calculer l'inverse multiplicatif modulo m
int modInverse(int a, int m) {
    a = a % m;
    for (int x = 1; x < m; x++)
        if ((a * x) % m == 1)
            return x;
    return 1;
}

// Fonction pour chiffrer un caractère selon le chiffrement affine
char encryptChar(char ch, int a, int b) {
    if (isalpha(ch)) {
        char base = (isupper(ch)) ? 'A' : 'a';
        return (char)((a * (ch - base) + b) % 26 + base);
    }
    return ch;
}

// Fonction pour chiffrer une chaîne de caractères selon le chiffrement affine
string encrypt(string text, int a, int b) {
    string result = "";
    for (char ch : text) {
        result += encryptChar(ch, a, b);
    }
    return result;
}

int main() {
    // Clé de chiffrement (a, b)
    int a = 5;
    int b = 8;
    char ch ='bonjour coment vous allez';

    // Texte à chiffrer
    string plaintext = "Hello, World!";

    // Chiffrer le texte
    string ciphertext = encrypt(plaintext, a, b);

    // Afficher le résultat
    char encryptChar(char ch, int a, int b);

    cout << "Texte clair : " << plaintext << endl;
    cout << "Texte chiffré : " << ciphertext << endl;

    int d,e;
    char c;
    cout << "entrez la premiere cle de chiffrement "  << endl;
    cin>>d;

    cout << "entrez la premiere cle de chiffrement "  << endl;
    cin>>e;

    cout << "entrez la chaine a  dechiffre "  << endl;
    cin>>c;

    char code =  encryptChar( c, d,e);
    cout << "le message chiffre est: " <<code << endl;



    return 0;
}

