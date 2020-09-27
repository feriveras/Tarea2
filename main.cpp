#include <iostream> 
using namespace std;

void Quicksort(int* arr, int izq, int der)
{
    int i = izq, j = der, tmp; //Definicion de variables
    int p = arr[(izq + der) / 2];

    while (i <= j) //Regla que el metodo sigue 
    {
        while (arr[i] < p) i++;
        while (arr[j] > p) j--;
        if (i <= j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++; j--;
        }
    }

    if (izq < j)
        Quicksort(arr, izq, j); //Se acomodan los valores de acuerdo a su tamano
    if (i < der)
        Quicksort(arr, i, der);
}

int main()
{
    //Los datos que se muestran en pantalla
    cout << "Seleccionamos el metodo Quicksort!\n\n";
    cout << "Lista a ordenar:\n";
    cout << "21, 7, 11, -1, 30, 8, 13, -21, 0, 121\n\n";
    cout << "La lista se ha ordenado correctamente:\n\n";
    int arreglo[10] = { 21, 7, 11, -1, 30, 8, 13, -21, 0, 121 };//Se crea el arreglo

    Quicksort(arreglo, 0, 9); //Se llama la funcion y se establece el tamano del arreglo

    for (int i = 0; i < 10; i++)
        cout << arreglo[i] << " "; //Imprime los datos

    system("pause"); //Pausa y espera al usuario
    return 0;
}