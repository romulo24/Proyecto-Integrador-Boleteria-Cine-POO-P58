#ifndef CINE_H
#define CINE_H
#include "pelicula.h"
class Cine
{
private:
    const float PRECIO_BOLETO = 3.15;
    int idPelicula;
    static const int peliculasIngresadas = 5;
    Pelicula *cartelera[peliculasIngresadas];
public:
    Cine();
    void mostrarCartelera();
};

#endif // CINE_H
