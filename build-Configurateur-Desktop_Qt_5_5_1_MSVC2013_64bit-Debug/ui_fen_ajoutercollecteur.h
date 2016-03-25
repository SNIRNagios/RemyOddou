/********************************************************************************
** Form generated from reading UI file 'fen_ajoutercollecteur.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEN_AJOUTERCOLLECTEUR_H
#define UI_FEN_AJOUTERCOLLECTEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FEN_AjouterCollecteur
{
public:
    QDialogButtonBox *DBB_dialog;
    QLineEdit *LE_nom;
    QLabel *L_nom;
    QLineEdit *LE_ip;
    QLabel *label;
    QComboBox *CB_site;
    QLabel *label_2;

    void setupUi(QDialog *FEN_AjouterCollecteur)
    {
        if (FEN_AjouterCollecteur->objectName().isEmpty())
            FEN_AjouterCollecteur->setObjectName(QStringLiteral("FEN_AjouterCollecteur"));
        FEN_AjouterCollecteur->resize(400, 200);
        FEN_AjouterCollecteur->setMinimumSize(QSize(400, 200));
        FEN_AjouterCollecteur->setMaximumSize(QSize(400, 200));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        FEN_AjouterCollecteur->setFont(font);
        DBB_dialog = new QDialogButtonBox(FEN_AjouterCollecteur);
        DBB_dialog->setObjectName(QStringLiteral("DBB_dialog"));
        DBB_dialog->setGeometry(QRect(10, 150, 341, 32));
        DBB_dialog->setFont(font);
        DBB_dialog->setOrientation(Qt::Horizontal);
        DBB_dialog->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        LE_nom = new QLineEdit(FEN_AjouterCollecteur);
        LE_nom->setObjectName(QStringLiteral("LE_nom"));
        LE_nom->setGeometry(QRect(190, 50, 113, 20));
        L_nom = new QLabel(FEN_AjouterCollecteur);
        L_nom->setObjectName(QStringLiteral("L_nom"));
        L_nom->setGeometry(QRect(60, 50, 111, 16));
        LE_ip = new QLineEdit(FEN_AjouterCollecteur);
        LE_ip->setObjectName(QStringLiteral("LE_ip"));
        LE_ip->setGeometry(QRect(190, 80, 91, 20));
        LE_ip->setCursorPosition(1);
        label = new QLabel(FEN_AjouterCollecteur);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 80, 101, 16));
        CB_site = new QComboBox(FEN_AjouterCollecteur);
        CB_site->setObjectName(QStringLiteral("CB_site"));
        CB_site->setGeometry(QRect(190, 110, 69, 22));
        label_2 = new QLabel(FEN_AjouterCollecteur);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 110, 121, 20));

        retranslateUi(FEN_AjouterCollecteur);
        QObject::connect(DBB_dialog, SIGNAL(accepted()), FEN_AjouterCollecteur, SLOT(accept()));
        QObject::connect(DBB_dialog, SIGNAL(rejected()), FEN_AjouterCollecteur, SLOT(reject()));

        QMetaObject::connectSlotsByName(FEN_AjouterCollecteur);
    } // setupUi

    void retranslateUi(QDialog *FEN_AjouterCollecteur)
    {
        FEN_AjouterCollecteur->setWindowTitle(QApplication::translate("FEN_AjouterCollecteur", "Fen\303\252tre - Ajouter un nouveau collecteur", 0));
        L_nom->setText(QApplication::translate("FEN_AjouterCollecteur", "Nom du collecteur", 0));
        LE_ip->setInputMask(QApplication::translate("FEN_AjouterCollecteur", "000.000.000.000;_", 0));
        label->setText(QApplication::translate("FEN_AjouterCollecteur", "IP du collecteur", 0));
        label_2->setText(QApplication::translate("FEN_AjouterCollecteur", "Liste des diff\303\251rents sites", 0));
    } // retranslateUi

};

namespace Ui {
    class FEN_AjouterCollecteur: public Ui_FEN_AjouterCollecteur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEN_AJOUTERCOLLECTEUR_H
