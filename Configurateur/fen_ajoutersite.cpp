#include "fen_ajoutersite.h"
#include "ui_fen_ajoutersite.h"

FEN_AjouterSite::FEN_AjouterSite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FEN_AjouterSite)
{
    ui->setupUi(this);
}

FEN_AjouterSite::~FEN_AjouterSite()
{
    delete ui;
}

void FEN_AjouterSite::on_buttonBox_accepted()
{

}
