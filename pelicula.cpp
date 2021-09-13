#include "pelicula.h"

Pelicula::Pelicula()
{
    this->id =0;
    this->titulo = "\0";
    this->duracion = 0;
    this->estreno = true;
    this->hora = "\0";
}

Pelicula::Pelicula(int id, string titulo, int duracion, bool estreno, string hora)
{
    this->id=id;
    this->titulo=titulo;
    this->duracion=duracion;
    this->estreno=estreno;
    this->hora=hora;
}
string Pelicula::getDatos()
{
    string estreno;
    if(this->estreno==true){
        estreno="*ESTRENO*";
    }else {
        estreno =" ";
    }
    return to_string (this->id)+" - ["+this->hora+"]" +this->titulo+ " ("+ to_string(this->duracion) +")  "+ (estreno)+"\n";
}
