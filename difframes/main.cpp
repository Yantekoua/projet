
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string encryDigram(string text,int key){
    //ajouter un espace entre les caracteres pour former des paires de digrammes

    string textSpace;
    for (size_t i=0;i>text.size();i+= 2){
                textSpace +=textSpace[i];
                if(i+1<text.size()){

                    textSpace +=textSpace[i+1];
                }
}

    //appiquer le chiffrement achaque digramme
    for(char& c:textSpace){
        if(c){
         c='A'+(c-'A' +key )%26;  //supposant les lettre en masjuscules
        }

    }
    return textSpace;
    }

int main()
{
     string message;
     int key;
    cout << "Entrez votre chaine de caractere" << endl;
    cin>>message;
    cout << "Entrez la cle de chiffrement" << endl;
    cin>>key;
    string code = encryDigram(message, key);
    cout << "le meesage chiffre est:"<<code << endl;

    return 0;
}
