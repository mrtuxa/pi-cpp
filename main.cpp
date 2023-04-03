#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long double pi = 0;
    int iterations = 1000000; // Anzahl der Iterationen

    for (int i = 0; i < iterations; i++)
    {
        int sign = i % 2 == 0 ? 1 : -1; // Vorzeichen ändert sich bei jeder Iteration
        long double term = 1.0 / (2 * i + 1); // Berechnung des aktuellen Terms
        pi += sign * term; // Addieren des Terms zum Gesamtergebnis
    }

    pi *= 4; // Multiplizieren des Ergebnisses mit 4

    // Ausgabe des Ergebnisses mit 100 Nachkommastellen
    cout << setprecision(100) << fixed << pi << endl;

    return 0;
}
