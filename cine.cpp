#include "cine.h"

Cine::Cine()
{
    this->idPelicula = 0;

    this->cartelera[0] = new Pelicula(1," El Rey Leon ",117,1,"14:30");
    this->cartelera[1] = new Pelicula(2," Spiderman: Lejos de Casa ",130,1,"16:00");
    this->cartelera[2] = new Pelicula(3," Annabelle 3: Vuelve a Casa ",106,1,"18:20");
    this->cartelera[3] = new Pelicula(4," Avengers: End Game ",188,0,"16:15");
    this->cartelera[4] = new Pelicula(5," Toy Story 4 ",100,0,"11:30");
}
void Cine::mostrarCartelera()
{
    cout << "\n- - C A R T E L E R A - -" << endl;
    for(int i = 0; i <this->peliculasIngresadas; i++){
        cout << cartelera[i]->getDatos();
    }
    cout << endl;
}
