#include <iostream>
#include "Usuario.h"
#include  <string>

using namespace std;

int main() {
	string usuario,contra;

	Usuario usuario1("woltak", "Goku2404");
	cout << "ingresar usuario: ";
	cin >> usuario;
	cout << "ingresar contrasena : ";
	cin >> contra;

	if (usuario1.Verificarlogin(usuario, contra))
		cout << "puedes pasar pa " << endl;
	else
		cout << "no podes entrar pa " << endl;
	return 0;
}