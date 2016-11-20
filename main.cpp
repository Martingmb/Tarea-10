#include <iostream>
#include <fstream>


using namespace std;

void RecorridoAnchura(int iN, int iMatX[][20], int iArrX[])
{
    for(int iI= 0; iI<iN; iI++)
    {
        for(int iJ= 0; iJ<iN; iJ++)
        {
            if(iMatX[iI][iJ]==1)
            {
                iArrX[iI]= iJ+1;
            }
        }
    }
}

int main()
{
    ifstream a("Adyacencia.txt");
    int iN;
    int iArrA[20];
    int iMatA[20][20];
    a>>iN;
    for(int iI= 0; iI<iN; iI++)
    {
        for(int iJ= 0; iJ<iN; iJ++)
        {
            a>> iMatA[iI][iJ];
        }
    }

    for(int iI= 0; iI<iN; iI++)
    {
        for(int iJ= 0; iJ<iN; iJ++)
        {
            cout<< iMatA[iI][iJ]<< " ";
        }
        cout<< endl;
    }
    RecorridoAnchura(iN, iMatA, iArrA);
    for(int iI= 0; iI<iN; iI++)
    {
        cout<< iArrA[iI]<< " ";
    }

    return 0;

}
