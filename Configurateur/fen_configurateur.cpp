#include "fen_configurateur.h"
#include "ui_fen_configurateur.h"

FEN_Configurateur::FEN_Configurateur(QWidget *parent) : QMainWindow(parent),ui(new Ui::FEN_Configurateur)
{
    ui->setupUi(this);//Mettre en place les widgets sur la fenêtre
    configurateur = new Configurateur(this);//Allocation dynamique, on créé l'objet de type Configurateur
     //configurateur est un pointeur vers la classe Configurateur

}

FEN_Configurateur::~FEN_Configurateur()
{
    delete ui;
    delete configurateur;//On libère la case mémoire
}

void FEN_Configurateur::on_PB_sauvegarder_clicked()
{
  //Fonction vérifiant si l'adresse saisie est correcte
    if(IP.setAddress(ui->LE_ip->text()))
    {
       ipSaisie= ui->LE_ip->text();// Récupération de l'adresse IP..
       nomSaisie= ui->LE_nom->text();// Récupération du nom du site distant
       configurateur->Add(nomSaisie,ipSaisie);// A spécifier
       ui->CB_collecteur->addItem(nomSaisie+" - "+ipSaisie);
    }
    else
    {
        //Affichage d'un message d'alerte
        QMessageBox alerte;
        alerte.setWindowTitle("Attention");
        alerte.setText("L'adresse IP saisie est invalide!");
        alerte.setIcon(QMessageBox::Warning);
        alerte.exec();
    }


}


void FEN_Configurateur::on_PB_annuler_clicked()
{
    //A faire
    ui->LE_ip->setText("");
    ui->LE_nom->setText("");
}









