

#include <iostream>
#include "Clientes.h"
using namespace std;

int main()
{
    string nit, nombres, apellidos, direccion,fecha_nacimiento;
    int telefono;

    cout << "Ingrese Nit: ";
    getline(cin, nit);
    cout << "Ingrese Nombres: ";
    getline(cin, nombres);
    cout << "Ingrese Apellidos: ";
    getline(cin, apellidos);
    cout << "Ingrese Direccion: ";
    getline(cin, direccion);
    cout << "Ingrese Telefono: ";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese Fecha de nacimiento: ";
    cin >> fecha_nacimiento;
    
    Clientes c = Clientes(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
    c.crear();
    c.leer();

    system("pause");
    return 0;
}
