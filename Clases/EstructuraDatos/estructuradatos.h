#ifndef ESTRUCTURADATOS_H
#define ESTRUCTURADATOS_H
#include <Clases/Objetos/usuario.h>
template<typename T>
struct nodo{
    T dato;
    nodo<T>* siguiente;
};

template<class T>
class EstructuraDatos
{
private:

    nodo<T>* raiz = nullptr;
    nodo<T>* iterador = nullptr;
public:

    virtual void insertarInicio(T valor) = 0;
    virtual void insertarFinal(T valor) = 0;
    virtual void buscarElemento(T* valor) = 0;
    virtual void reportarLista() = 0;
    virtual void eliminarElemento(T valor) = 0;
    EstructuraDatos();
    nodo<T> *getIterador() const;
    void setIterador(nodo<T> *value);
    nodo<T> *getRaiz() const;
    void setRaiz(nodo<T> *value);
};

template class EstructuraDatos<Usuario>;

#endif // ESTRUCTURADATOS_H
