#include <iostream>
using namespace std;
main(void)
{
    int num1, num2, num3;

    cout << "Entre com três números: ";
    cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3)
        cout << "O maior valor é: " << num1<<endl;
    else if(num2 > num1 && num2 > num3)
        cout << "O maior número é: "<< num2<<endl;
    else if(num3 > num1 && num3 > num2)
        cout << "O maior número é: "<< num3 <<endl;
    else
        cout << "Não foi possivel encontrar o maior número :( "<<endl;
}