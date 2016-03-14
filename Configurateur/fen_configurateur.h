#ifndef FEN_CONFIGURATEUR_H
#define FEN_CONFIGURATEUR_H

#include <QMainWindow>
#include <QHostAddress>
#include "configurateur.h"

namespace Ui {
class FEN_Configurateur;
}

class FEN_Configurateur : public QMainWindow
{
    Q_OBJECT

public:
    explicit FEN_Configurateur(QWidget *parent = 0);
    ~FEN_Configurateur();

private slots:
    void on_PB_sauvegarder_clicked();// Slot bouton sauvegarder
    void on_PB_annuler_clicked();// Slot bouton annuler

private:
    Ui::FEN_Configurateur *ui;
    QString ipSaisie;
    QString nomSaisie;
    Configurateur *configurateur;// Représente la classe Configurateur et va permettre l'accès aux attributs et aux méthodes de celle-ci
    //On utilisera configurateur pour envoyer des données à la classe Configurateur
    //Pointeur configurateur vers la classe Configurateur
    QHostAddress IP;

    QFile * fichier; //Objet QFile pour intéragir avec le fichier XML
    QString nomFichier;// Nom du fichier XML traité



};

#endif // FEN_CONFIGURATEUR_H
