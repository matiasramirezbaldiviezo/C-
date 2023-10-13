#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Almacenamos el valor del punto
struct Punto
{
    int x, y;
};

// Para encontrar la orientaci�n de los puntos ordenados (p, q, r):
// La funci�n devuelve los siguientes valores:
// 0 si p, q y r son colineales
// 1 sentido horario
// 2 sentido anti-horario
int orientacion(Punto p, Punto q, Punto r)
{
    int valor = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (valor == 0)
    {
        return 0;  // Los puntos son colineales
    }
    else if (valor > 0)
    {
        return 1;  // Los puntos forman una vuelta a la izquierda
    }
    else
    {
        return 2;  // Los puntos forman una vuelta a la derecha
    }
}

// Imprime el convex hull de un conjunto de n puntos
void convexHull(Punto puntos[], int n)
{

    //si solo son 3 puntos los puntos seran las 3 esquinas
    if (n < 3)
        return;

    // Inicializamos el vector de puntos para el convex hull
    vector<Punto> hull;

    // Encontramos el punto m�s a la izquierda
    int l = 0;
    for (int i = 1; i < n; i++)
    {
        if (puntos[i].x < puntos[l].x)
        {
            l = i;
        }
    }

    // Comenzamos desde el punto m�s a la izquierda y continuamos en sentido antihorario
    // hasta volver al punto de partida
    int p = l, q;

    do
    {
        // A�adimos el punto actual al resultado
        hull.push_back(puntos[p]);

        // Buscamos un punto 'q' tal que la orientaci�n (p, x, q) sea en sentido antihorario
        q = (p + 1) % n;
        for (int i = 0; i < n; i++)
        {
            if (orientacion(puntos[p], puntos[i], puntos[q]) == 2)
            {
                q = i;
            }
        }

        // Ahora q es el punto m�s antihorario con respecto a p
        // Establecemos p en q para la siguiente iteraci�n
        p = q;
    } while (p != l);

    // Mostramos el resultado
    cout << "El arco convexo de los puntos dados seran : ";
    for (int i = 0; i < hull.size(); i++)
    {
        cout << "(" << hull[i].x << "," << hull[i].y << ") ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //cuantos puntos seran?
    int t;
    cin>>t;
    Punto puntos[t];
    for (int i = 0; i < t; i++)
    {
        cin >> puntos[i].x;
        cin >> puntos[i].y;
    }

    int n = sizeof(puntos) / sizeof(puntos[0]);
    convexHull(puntos, n);
    return 0;
}

