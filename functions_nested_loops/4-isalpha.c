#include "main.h"

/**
 * _isalpha - Imprimir el alfabeto
 * @c: Caracter para revisar
 * Return: 1 para el afabeto o 0 para lo demás
 */

int _isalpha(int c)

{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);

}
