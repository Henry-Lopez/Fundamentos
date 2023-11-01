#include "Usuario.h"
#include <string>

using namespace std;

Usuario::Usuario(string _login, string _password)
{
	login = _login;
	password = _password;
}
bool Usuario::Verificarlogin(string _login, string _password)
{
	bool aux;
	if ((login == _login) && (password == _password));
	aux = true;
	return aux;

}