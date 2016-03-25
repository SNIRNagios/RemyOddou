/********************************************************************************
** Form generated from reading UI file 'fen_ajoutersite.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEN_AJOUTERSITE_H
#define UI_FEN_AJOUTERSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FEN_AjouterSite
{
public:
    QDialogButtonBox *DBB_dialog;
    QLineEdit *LE_nom;
    QLabel *label;

    void setupUi(QDialog *FEN_AjouterSite)
    {
        if (FEN_AjouterSite->objectName().isEmpty())
            FEN_AjouterSite->setObjectName(QStringLiteral("FEN_AjouterSite"));
        FEN_AjouterSite->resize(400, 200);
        FEN_AjouterSite->setMinimumSize(QSize(400, 200));
        FEN_AjouterSite->setMaximumSize(QSize(400, 200));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        FEN_AjouterSite->setFont(font);
        DBB_dialog = new QDialogButtonBox(FEN_AjouterSite);
        DBB_dialog->setObjectName(QStringLiteral("DBB_dialog"));
        DBB_dialog->setGeometry(QRect(10, 140, 341, 32));
        DBB_dialog->setFont(font);
        DBB_dialog->setOrientation(Qt::Horizontal);
        DBB_dialog->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        LE_nom = new QLineEdit(FEN_AjouterSite);
        LE_nom->setObjectName(QStringLiteral("LE_nom"));
        LE_nom->setGeometry(QRect(110, 40, 113, 20));
        LE_nom->setMaxLength(120);
        label = new QLabel(FEN_AjouterSite);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 71, 20));

        retranslateUi(FEN_AjouterSite);
        QObject::connect(DBB_dialog, SIGNAL(accepted()), FEN_AjouterSite, SLOT(accept()));
        QObject::connect(DBB_dialog, SIGNAL(rejected()), FEN_AjouterSite, SLOT(reject()));

        QMetaObject::connectSlotsByName(FEN_AjouterSite);
    } // setupUi

    void retranslateUi(QDialog *FEN_AjouterSite)
    {
        FEN_AjouterSite->setWindowTitle(QApplication::translate("FEN_AjouterSite", "Fen\303\252tre - Ajouter un nouveau site", 0));
#ifndef QT_NO_WHATSTHIS
        DBB_dialog->setWhatsThis(QApplication::translate("FEN_AjouterSite", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        LE_nom->setInputMask(QString());
        label->setText(QApplication::translate("FEN_AjouterSite", "Nom du site", 0));
    } // retranslateUi

};

namespace Ui {
    class FEN_AjouterSite: public Ui_FEN_AjouterSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEN_AJOUTERSITE_H
