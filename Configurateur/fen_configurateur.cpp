#include "fen_configurateur.h"
#include "ui_fen_configurateur.h"

FEN_Configurateur::FEN_Configurateur(QWidget *parent) : QMainWindow(parent),ui(new Ui::FEN_Configurateur)
{
    ui->setupUi(this);
    configurateur = new Configurateur(this);//Instanciation de la classe Superviseur
}

FEN_Configurateur::~FEN_Configurateur()
{
    delete ui;
    //delete configurateur;
}

void FEN_Configurateur::on_PB_valider_clicked()
{
   // bool(ui->LE_adresseIP->setInputMask("   .   .   .   ");
    adresse_Saisie = ui->LE_adresseIP->text();// Récupération de l'adresse IP..
    nomSite_Saisie = ui->LE_nomSite->text();// Récupération du nom du site distant

    configurateur->Add(nomSite_Saisie,adresse_Saisie);// A spécifier


}

void FEN_Configurateur::on_PB_annuler_clicked()
{
    //A faire
}
