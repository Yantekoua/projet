#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char *argv[])
{
    int a, i;
   char str[75];

   cout<<"Entrez la chaine"<<end;
   cin>>str;
   cout<<"chosissez votre option"<<endl;
   cin>>a;
   switch (a) {
   case 1:
       for(i=o;i<75 &&str[i] !='\0';i++){
           str[i] = (str[i]+3)%26;
            cout<<"Message decrypter:\n"<<str<<endl;
       }
       break;
   case 2:
       for(i=o;i<75 &&str[i] !='\0';i++){
           str[i] = (str[i]-3)%26;
            cout<<"Message crypter:\n"<<str<<endl;
       }
       break;
   default:
       cout<<"invalid"<<end;
       break;
   }
    return 0;
}
