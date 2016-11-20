#include <iostream>

using namespace std;

int main()
{
 int iCant, iNumero, iMatriz[50][50], iFila[50], iVec[50];
    //Variables para leer el archivo
    ifstream inArchivo;
    string sArchivo;
    
    //Se pregunta por el nombre del archivo
    cout << "Ingrese el nombre del archivo, no olvide poner '.txt' (nombre.txt) " << endl;
    cin >> sArchivo;
    
    //Se abre el archivo para leer y obtener los datos
    inArchivo.open(sArchivo.c_str()); //Checar el directorio
    
    inArchivo >> iCant;
    inArchivo.ignore();
    
    while(inArchivo)
    {
        for(int iI = 0; iI < iCant; iI++)
        {
            for(int iJ = 0; iJ < iCant; iJ++)
            {
                inArchivo >> iMatriz[iI][iJ];
            }
        }
    }
    //Se cierra el archivo
    inArchivo.close();
    
    //Desplegar valores
    cout << iCant << endl;
    for(int iI = 0; iI < iCant; iI++)
    {
        for(int iJ = 0; iJ < iCant; iJ++)
        {
            cout << iMatriz[iI][iJ];
        }
        cout << endl;
    }

}
