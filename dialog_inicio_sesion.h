_#ifndef DIALOG_INICIO_SESION_H
#define DIALOG_INICIO_SESION_H

#include <QDialog>
#include <Clases/EstructuraDatos/controladorusuario.h>
#include <Clases/Objetos/usuario.h>
namespace Ui {
class Dialog_inicio_sesion;
}

class Dialog_inicio_sesion : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_inicio_sesion(QWidget *parent = nullptr);
    ~Dialog_inicio_sesion();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Dialog_inicio_sesion *ui;
    ControladorUsuario<Usuario> *controlador_usuario; //controlador de Usuario
};

#endif // DIALOG_INICIO_SESION_H
