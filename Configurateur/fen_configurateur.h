#ifndef FEN_CONFIGURATEUR_H
#define FEN_CONFIGURATEUR_H

#include <QMainWindow>
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
    void on_PB_valider_clicked();

    void on_PB_annuler_clicked();

private:

    Ui::FEN_Configurateur *ui;
    QString adresse_Saisie;
    QString nomSite_Saisie;
    Configurateur *configurateur;

};

#endif // FEN_CONFIGURATEUR_H
