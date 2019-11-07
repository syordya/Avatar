#include "controladorusuario.h"
#include <Clases/Objetos/usuario.h>


template<class NodoUsuario>
void ControladorUsuario<NodoUsuario>::insertarInicio(NodoUsuario valor)
{
    nodo<NodoUsuario>* temporal;
    nodo<NodoUsuario>* temporal_2;

    temporal = new nodo<NodoUsuario>;
    temporal->dato = valor;

    temporal_2 = this->getIterador();
    temporal_2->siguiente = temporal;
    temporal_2 = temporal;
}

template<class NodoUsuario>
void ControladorUsuario<NodoUsuario>::insertarFinal(NodoUsuario valor)
{

}

template<class NodoUsuario>
void ControladorUsuario<NodoUsuario>::buscarElemento(NodoUsuario* valor)
{
    nodo<NodoUsuario>* temporal = this->getRaiz();

    while(temporal != NULL)
    {
        if( temporal->dato == valor->dato){

        }
    }


}

template<class NodoUsuario>
void ControladorUsuario<NodoUsuario>::reportarLista()
{

}

template<class NodoUsuario>
void ControladorUsuario<NodoUsuario>::eliminarElemento(NodoUsuario valor)
{

}


template class ControladorUsuario<Usuario>;
