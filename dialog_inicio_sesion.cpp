#include "dialog_inicio_sesion.h"
#include "ui_dialog_inicio_sesion.h"
#include <Clases/EstructuraDatos/controladorusuario.h>
#include <Clases/Objetos/usuario.h>
Dialog_inicio_sesion::Dialog_inicio_sesion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_inicio_sesion)
{
    ui->setupUi(this);
    controlador_usuario = new ControladorUsuario<Usuario>();
}

Dialog_inicio_sesion::~Dialog_inicio_sesion()
{
    delete ui;
}

void Dialog_inicio_sesion::on_buttonBox_accepted()
{

}
