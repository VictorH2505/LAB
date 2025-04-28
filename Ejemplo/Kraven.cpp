#include <iostream>

using namespace std;

int main () {
    string nombre = "";
    cout<<"ingresa si eres un animal, un malo o una persona"<< endl;
    cin>>nombre; 
   // verifica si son animales
   if (nombre == "animal")
   {
       // Si lo son, muestre el mensaje de que los protegería
       cout<<"Estas bajo la proteccion de Kraven el cazador"<< endl;
   }
   // verifica si son malos
   else if (nombre == "malo")
   {
       // Si lo son, muestre el mensaje de que están en su lista
       cout<<"Estas en su lista de cazeria, prepara tu ataud"<< endl;
   }
   // verifica si son personas corrientes
   else if(nombre == "persona")
   {
       // Si lo son, muestre un mensaje de saludo
       cout<<"Kraven solo te saludara, mientras no te interpongas en su cazeria..."<< endl;
   }

    return 0;
}