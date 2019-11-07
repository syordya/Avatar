#ifndef USUARIO_H
#define USUARIO_H
#include <QString>

class Usuario
{
private:
    QString user = "";
    QString contrasena = "";
    int idRol = 0;
public:
    Usuario();
    QString getUser() const;
    void setUser(const QString &value);
    QString getContrasena() const;
    void setContrasena(const QString &value);
    int getIdRol() const;
    void setIdRol(int value);
};

#endif // USUARIO_H
