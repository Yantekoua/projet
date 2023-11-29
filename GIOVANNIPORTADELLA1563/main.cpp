#include <iostream>
#include <string>

using namespace std;
void encrypt(char* texte,const char* key){
    for(size_t i=0;i<std::strlen(texte);i++){
         if(isalpha(texte[i])){
             char base=isupper(texte[i])?'A':'a';
             char offset = key[i%strlen(key)]-'A';
             texte[i]=(texte[i] -base +offset)%26+base;
         }
    }
}

int main()
{
    const int buffersize =100;
    char text[buffersize];
    char key[buffersize];
    std:: cout << "Entrez le mot chiiffrer:" ;
    std::cin.getline(text,buffersize);

    std:: cout << "Entrez la cle de chiffrement:" ;
    std::cin.getline(key,buffersize);
     encrypt(text,key);
    std:: cout << "Texte chifre est :"<<encrypt(text,key)<<std::endl ;

    return 0;
}
