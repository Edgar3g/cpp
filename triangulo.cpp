#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int linha, coluna;

    cout << "\t";
    linha = 1;
    
    while (coluna < 8)
    {
        cout << "\t";
        coluna = 1;
        
        while (coluna < linha)
        {
            cout << "*";
            coluna += 1;
            
        }

        cout << endl;
        linha += 1;
        
    }
    
}