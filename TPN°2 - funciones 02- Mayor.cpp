#include<bits/stdc++.h>
using namespace std;

int EstMayor(int a, int b, int c) 
{

int mayor = a;

    if (b > mayor) 
	{mayor = b;}

    if (c > mayor) 
	{mayor = c;}

return mayor;
}

int main() 
{
int num1, num2, num3;

    cout << "Ingresa el primer numero:";
    cin >> num1;

    cout << "Ingresa el segundo numero:";
    cin >> num2;

    cout << "Ingresa el tercer numero:";
    cin >> num3;

int mayor = EstMayor(num1, num2, num3);

    cout << "El numero mayor es:" << mayor << endl;

return 0;
}
