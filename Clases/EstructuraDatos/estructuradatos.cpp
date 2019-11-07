#include "estructuradatos.h"

template<class T>
nodo<T> *EstructuraDatos<T>::getIterador() const
{
    return iterador;
}
template<class T>
void EstructuraDatos<T>::setIterador(nodo<T> *value)
{
    iterador = value;
}
template<class T>
nodo<T> *EstructuraDatos<T>::getRaiz() const
{
    return raiz;
}
template<class T>
void EstructuraDatos<T>::setRaiz(nodo<T> *value)
{
    raiz = value;
}
template<class T>
EstructuraDatos<T>::EstructuraDatos()
{
    raiz = new nodo<T>();
    iterador = raiz;
}
/*
template<typename T>
void EstructuraDatos<T>::insertarInicio(T valor)
{
    nodo<T>* temporal;
    temporal = new nodo<T>;
    temporal->dato = valor;
    iterador->siguiente = temporal;
    iterador = temporal;
}

template<typename T>
void EstructuraDatos<T>::insertarFinal(T valor)
{

}

template<typename T>
void EstructuraDatos<T>::buscarElemento(T valor)
{

}

template<typename T>
void EstructuraDatos<T>::reportarLista()
{

}

template<typename T>
void EstructuraDatos<T>::eliminarElemento(T valor)
{

}

*/
