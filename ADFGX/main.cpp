#include <iostream>
#include <string>
#include <algorithm>

//TABLEAU DE POLYB ETENDU
const char poySquare[6][6]={
    'A','D','F','G','V','X',
    'G','T','B','0','S','I',
    '1','R','8','W','C','2',
    'N','3','Q','K','4','L',
    'U','5','Z','O','Y','E',
    '6','P','7','J','M','9',
};

//FONCTION POUR CHIFFRER UN CARACTERE AVEC LE CARRE DE POLYBE ETENDU
string adfgvxEncrypChar(char c){
    for(int i = 0;i<6;i++) {
        for(int j = 0;j<6;j++) {
            //retourne la combinaison ADFGVXS
           if(polybiusSquare[i][j==c]){

               return string(1,'A'+i)+string(1,'A'+j);

                 }
    }
}
    //si le caractere nest pas trouve retourne le caractere lui meme
    return string(1,c);
    }

    //focntion pour chiffrer un message avec ADFGVX
    string adfgvxEncryp(string text){
        string texte;
        for(char c:text){
            //convertit le caractere en combinaison adfgvx
            texte+=adfgvxEncrypChar(toupper(c));
        }
        return  texte;
    }


using namespace std;

int main()
{
    string message;

   cout << "Entrez votre chaine de caractere" <<endl;
   cin>>message;

   string code = adfgvxEncryp(message);
   cout << "le message chiffre est:"<<code<<endl;
    return 0;
}
