/********************************************************************************
** Form generated from reading UI file 'fen_configurateur.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEN_CONFIGURATEUR_H
#define UI_FEN_CONFIGURATEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FEN_Configurateur
{
public:
    QWidget *centralWidget;
    QLabel *QL_adresseIP;
    QPushButton *PB_annuler;
    QLabel *QL_nomdusite;
    QPushButton *PB_valider;
    QLabel *QL_titre;
    QLineEdit *LE_adresseIP;
    QLineEdit *LE_nomSite;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FEN_Configurateur)
    {
        if (FEN_Configurateur->objectName().isEmpty())
            FEN_Configurateur->setObjectName(QStringLiteral("FEN_Configurateur"));
        FEN_Configurateur->resize(400, 269);
        centralWidget = new QWidget(FEN_Configurateur);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QL_adresseIP = new QLabel(centralWidget);
        QL_adresseIP->setObjectName(QStringLiteral("QL_adresseIP"));
        QL_adresseIP->setGeometry(QRect(20, 110, 71, 16));
        QFont font;
        font.setFamily(QStringLiteral("Calibri Light"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        QL_adresseIP->setFont(font);
        PB_annuler = new QPushButton(centralWidget);
        PB_annuler->setObjectName(QStringLiteral("PB_annuler"));
        PB_annuler->setGeometry(QRect(30, 200, 75, 23));
        QL_nomdusite = new QLabel(centralWidget);
        QL_nomdusite->setObjectName(QStringLiteral("QL_nomdusite"));
        QL_nomdusite->setGeometry(QRect(20, 70, 81, 16));
        QL_nomdusite->setFont(font);
        PB_valider = new QPushButton(centralWidget);
        PB_valider->setObjectName(QStringLiteral("PB_valider"));
        PB_valider->setGeometry(QRect(290, 200, 75, 23));
        QL_titre = new QLabel(centralWidget);
        QL_titre->setObjectName(QStringLiteral("QL_titre"));
        QL_titre->setGeometry(QRect(20, 10, 371, 19));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri Light"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        QL_titre->setFont(font1);
        LE_adresseIP = new QLineEdit(centralWidget);
        LE_adresseIP->setObjectName(QStringLiteral("LE_adresseIP"));
        LE_adresseIP->setGeometry(QRect(100, 110, 101, 21));
        LE_nomSite = new QLineEdit(centralWidget);
        LE_nomSite->setObjectName(QStringLiteral("LE_nomSite"));
        LE_nomSite->setGeometry(QRect(100, 70, 181, 21));
        LE_nomSite->setFrame(true);
        LE_nomSite->setDragEnabled(false);
        FEN_Configurateur->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FEN_Configurateur);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        FEN_Configurateur->setMenuBar(menuBar);
        statusBar = new QStatusBar(FEN_Configurateur);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FEN_Configurateur->setStatusBar(statusBar);

        retranslateUi(FEN_Configurateur);

        QMetaObject::connectSlotsByName(FEN_Configurateur);
    } // setupUi

    void retranslateUi(QMainWindow *FEN_Configurateur)
    {
        FEN_Configurateur->setWindowTitle(QApplication::translate("FEN_Configurateur", "Fen\303\252tre - Gestion du fichier de configuration", 0));
        QL_adresseIP->setText(QApplication::translate("FEN_Configurateur", "Adresse IP", 0));
        PB_annuler->setText(QApplication::translate("FEN_Configurateur", "Annuler", 0));
        QL_nomdusite->setText(QApplication::translate("FEN_Configurateur", "Nom du site", 0));
        PB_valider->setText(QApplication::translate("FEN_Configurateur", "Sauvegarder", 0));
        QL_titre->setText(QApplication::translate("FEN_Configurateur", "Sauvegarder la configuration d'un nouveau collecteur", 0));
    } // retranslateUi

};

namespace Ui {
    class FEN_Configurateur: public Ui_FEN_Configurateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEN_CONFIGURATEUR_H
