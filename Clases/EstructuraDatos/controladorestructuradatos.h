#ifndef CONTROLADORESTRUCTURADATOS_H
#define CONTROLADORESTRUCTURADATOS_H

#include <Clases/EstructuraDatos/estructuradatos.h>
template <typename NodoUsuario,typename NodoObjeto,typename NodoLugar>
class ControladorEstructuraDatos
{
private:
    EstructuraDatos<NodoUsuario> *usuario_db;
    EstructuraDatos<NodoObjeto> *objeto_db;
    EstructuraDatos<NodoLugar> *lugar_db;

public:
    ControladorEstructuraDatos();

};

#endif // CONTROLADORESTRUCTURADATOS_H
