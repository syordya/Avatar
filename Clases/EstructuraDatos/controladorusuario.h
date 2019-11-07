#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H

#include <Clases/EstructuraDatos/estructuradatos.h>
#include <Clases/Objetos/usuario.h>

template <class NodoUsuario>
class ControladorUsuario : public EstructuraDatos<NodoUsuario>
{

private:

    void insertarInicio(NodoUsuario valor);
    void insertarFinal(NodoUsuario valor);
    void buscarElemento(NodoUsuario* valor);
    void reportarLista();
    void eliminarElemento(NodoUsuario valor);


public:
    bool existe_usuario(QString user,QString Paswoord);
    bool eliminar_usuario(QString id);
    Usuario* get_usuario_actual();
    ControladorUsuario();
};

#endif // CONTROLADORUSUARIO_H
