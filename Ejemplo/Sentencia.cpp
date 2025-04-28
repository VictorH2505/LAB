#include <iostream>

using namespace std; 
int main() {
    int temperatura = 10; 
    // verifica si la temperatura es menor a 15 grados
    if (temperatura < 15)
    {
        // Si es menor, muestra el mensaje de que hace frío
        cout<<"Hace frio, ponte un abrigo"<< endl;
    }
    // verifica si la temperatura es mayor a 25 grados
    else if (temperatura > 25)
    {
        // Si es mayor, muestra el mensaje de que hace calor
        cout<<"hace calor, no necesitas abrigo"<< endl;
    }
    // Si no se cumplen las condiciones anteriores
    else
    {
        // Muestra un mensaje para una temperatura agradable
        cout<<"El clima es agradable, disfruta tu dia"<< endl;
    }

    return 0; 
}