#ifndef PELICULA_H
#define PELICULA_H
#include<iostream>
using namespace std;
class Pelicula
{
private:
    //ATRIBUTOS
    int id;
    string titulo;
    int duracion;
    bool estreno;
    string hora;
public:
    Pelicula();
    Pelicula(int id, string titulo, int duracion, bool estreno, string hora);
    string getDatos();
};

#endif // PELICULA_H
