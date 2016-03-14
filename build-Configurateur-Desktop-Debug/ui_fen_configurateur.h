/********************************************************************************
** Form generated from reading UI file 'fen_configurateur.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEN_CONFIGURATEUR_H
#define UI_FEN_CONFIGURATEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
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
    QPushButton *PB_sauvegarder;
    QLabel *QL_titre;
    QLineEdit *LE_ip;
    QLineEdit *LE_nom;
    QFrame *line;
    QComboBox *CB_collecteur;
    QPushButton *PB_modifier;
    QPushButton *PB_supprimer;
    QLabel *QL_titre2;
    QLineEdit *LE_nomModifie;
    QLineEdit *LE_ipModifie;
    QPushButton *PB_maj;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *FEN_Configurateur)
    {
        if (FEN_Configurateur->objectName().isEmpty())
            FEN_Configurateur->setObjectName(QStringLiteral("FEN_Configurateur"));
        FEN_Configurateur->resize(850, 250);
        FEN_Configurateur->setMinimumSize(QSize(850, 250));
        FEN_Configurateur->setMaximumSize(QSize(850, 250));
        FEN_Configurateur->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(FEN_Configurateur);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QL_adresseIP = new QLabel(centralWidget);
        QL_adresseIP->setObjectName(QStringLiteral("QL_adresseIP"));
        QL_adresseIP->setGeometry(QRect(20, 120, 71, 16));
        QFont font;
        font.setFamily(QStringLiteral("Calibri Light"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        QL_adresseIP->setFont(font);
        PB_annuler = new QPushButton(centralWidget);
        PB_annuler->setObjectName(QStringLiteral("PB_annuler"));
        PB_annuler->setGeometry(QRect(20, 180, 75, 23));
        QL_nomdusite = new QLabel(centralWidget);
        QL_nomdusite->setObjectName(QStringLiteral("QL_nomdusite"));
        QL_nomdusite->setGeometry(QRect(20, 70, 81, 16));
        QL_nomdusite->setFont(font);
        PB_sauvegarder = new QPushButton(centralWidget);
        PB_sauvegarder->setObjectName(QStringLiteral("PB_sauvegarder"));
        PB_sauvegarder->setGeometry(QRect(310, 180, 75, 23));
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
        LE_ip = new QLineEdit(centralWidget);
        LE_ip->setObjectName(QStringLiteral("LE_ip"));
        LE_ip->setGeometry(QRect(100, 120, 91, 21));
        LE_ip->setMaxLength(15);
        LE_ip->setFrame(true);
        LE_ip->setClearButtonEnabled(false);
        LE_nom = new QLineEdit(centralWidget);
        LE_nom->setObjectName(QStringLiteral("LE_nom"));
        LE_nom->setGeometry(QRect(100, 70, 201, 21));
        LE_nom->setMaxLength(32767);
        LE_nom->setFrame(true);
        LE_nom->setEchoMode(QLineEdit::Normal);
        LE_nom->setDragEnabled(false);
        LE_nom->setClearButtonEnabled(true);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(400, 10, 20, 211));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        CB_collecteur = new QComboBox(centralWidget);
        CB_collecteur->setObjectName(QStringLiteral("CB_collecteur"));
        CB_collecteur->setGeometry(QRect(420, 50, 131, 21));
        PB_modifier = new QPushButton(centralWidget);
        PB_modifier->setObjectName(QStringLiteral("PB_modifier"));
        PB_modifier->setGeometry(QRect(510, 140, 75, 23));
        PB_supprimer = new QPushButton(centralWidget);
        PB_supprimer->setObjectName(QStringLiteral("PB_supprimer"));
        PB_supprimer->setGeometry(QRect(420, 140, 75, 23));
        QL_titre2 = new QLabel(centralWidget);
        QL_titre2->setObjectName(QStringLiteral("QL_titre2"));
        QL_titre2->setGeometry(QRect(440, 10, 381, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri Light"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        QL_titre2->setFont(font2);
        LE_nomModifie = new QLineEdit(centralWidget);
        LE_nomModifie->setObjectName(QStringLiteral("LE_nomModifie"));
        LE_nomModifie->setGeometry(QRect(660, 60, 113, 20));
        LE_ipModifie = new QLineEdit(centralWidget);
        LE_ipModifie->setObjectName(QStringLiteral("LE_ipModifie"));
        LE_ipModifie->setGeometry(QRect(660, 90, 113, 20));
        PB_maj = new QPushButton(centralWidget);
        PB_maj->setObjectName(QStringLiteral("PB_maj"));
        PB_maj->setGeometry(QRect(760, 140, 75, 23));
        FEN_Configurateur->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FEN_Configurateur);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FEN_Configurateur->setStatusBar(statusBar);
        menuBar = new QMenuBar(FEN_Configurateur);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 21));
        FEN_Configurateur->setMenuBar(menuBar);

        retranslateUi(FEN_Configurateur);

        QMetaObject::connectSlotsByName(FEN_Configurateur);
    } // setupUi

    void retranslateUi(QMainWindow *FEN_Configurateur)
    {
        FEN_Configurateur->setWindowTitle(QApplication::translate("FEN_Configurateur", "Fen\303\252tre - Gestion du fichier de configuration", 0));
        QL_adresseIP->setText(QApplication::translate("FEN_Configurateur", "Adresse IP", 0));
        PB_annuler->setText(QApplication::translate("FEN_Configurateur", "Annuler", 0));
        QL_nomdusite->setText(QApplication::translate("FEN_Configurateur", "Nom du site", 0));
        PB_sauvegarder->setText(QApplication::translate("FEN_Configurateur", "Sauvegarder", 0));
        QL_titre->setText(QApplication::translate("FEN_Configurateur", "Sauvegarder la configuration d'un nouveau collecteur", 0));
        LE_ip->setInputMask(QApplication::translate("FEN_Configurateur", "009.009.009.009;_", 0));
        LE_nom->setInputMask(QString());
        LE_nom->setPlaceholderText(QString());
#ifndef QT_NO_TOOLTIP
        CB_collecteur->setToolTip(QApplication::translate("FEN_Configurateur", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PB_modifier->setText(QApplication::translate("FEN_Configurateur", "Modifier", 0));
        PB_supprimer->setText(QApplication::translate("FEN_Configurateur", "Supprimer", 0));
        QL_titre2->setText(QApplication::translate("FEN_Configurateur", "Modifier ou supprimer la configuration d'un collecteur", 0));
        PB_maj->setText(QApplication::translate("FEN_Configurateur", "Mettre \303\240 jour", 0));
    } // retranslateUi

};

namespace Ui {
    class FEN_Configurateur: public Ui_FEN_Configurateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEN_CONFIGURATEUR_H
