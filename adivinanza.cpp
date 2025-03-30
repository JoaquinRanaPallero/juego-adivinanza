#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int minimo, maximo, intentos, numeroSecreto, intentoUsuario;

    // 1. Pedir datos al usuario
    cout << "Ingrese el limite inferior del rango: ";
    cin >> minimo;
    cout << "Ingrese el limite superior del rango: ";
    cin >> maximo;
    cout << "Ingrese la cantidad de intentos: ";
    cin >> intentos;

    // 2. Generar número aleatorio
    srand(time(0));
    numeroSecreto = rand() % (maximo - minimo + 1) + minimo;

    // 3. Proceso de adivinanza
    for (int i = 1; i <= intentos; i++) {
        cout << "Intento " << i << " de " << intentos << ". Ingrese su numero: ";
        cin >> intentoUsuario;

        if (intentoUsuario == numeroSecreto) {
            cout << "¡Felicidades! Adivinaste el numero." << endl;
            return 0;
        } else if (intentoUsuario < numeroSecreto) {
            cout << "El numero es mayor." << endl;
        } else {
            cout << "El numero es menor." << endl;
        }
    }

    // 4. Si no adivina
    cout << "Lo siento, se acabaron los intentos. El numero era: " << numeroSecreto << endl;

    return 0;
}
