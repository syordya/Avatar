#include "usuario.h"

QString Usuario::getUser() const
{
    return user;
}

void Usuario::setUser(const QString &value)
{
    user = value;
}

QString Usuario::getContrasena() const
{
    return contrasena;
}

void Usuario::setContrasena(const QString &value)
{
    contrasena = value;
}

int Usuario::getIdRol() const
{
    return idRol;
}

void Usuario::setIdRol(int value)
{
    idRol = value;
}

Usuario::Usuario()
{

}
