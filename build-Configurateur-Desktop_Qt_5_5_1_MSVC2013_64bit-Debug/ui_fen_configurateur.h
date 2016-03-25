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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FEN_Configurateur
{
public:
    QWidget *centralWidget;
    QGroupBox *GB_general;
    QTreeWidget *TW_arbre;
    QGroupBox *GB_ajouter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QPushButton *PB_ajouterCollecteur;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *PB_ajouterSite;
    QSplitter *splitter;
    QPushButton *PB_ok;
    QPushButton *PB_cancel;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *FEN_Configurateur)
    {
        if (FEN_Configurateur->objectName().isEmpty())
            FEN_Configurateur->setObjectName(QStringLiteral("FEN_Configurateur"));
        FEN_Configurateur->resize(850, 400);
        FEN_Configurateur->setMinimumSize(QSize(850, 400));
        FEN_Configurateur->setMaximumSize(QSize(850, 400));
        FEN_Configurateur->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(FEN_Configurateur);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GB_general = new QGroupBox(centralWidget);
        GB_general->setObjectName(QStringLiteral("GB_general"));
        GB_general->setGeometry(QRect(100, 30, 661, 231));
        TW_arbre = new QTreeWidget(GB_general);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(0, font);
        TW_arbre->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(TW_arbre);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(TW_arbre);
        new QTreeWidgetItem(TW_arbre);
        TW_arbre->setObjectName(QStringLiteral("TW_arbre"));
        TW_arbre->setGeometry(QRect(10, 50, 341, 151));
        TW_arbre->setMaximumSize(QSize(350, 16777215));
        TW_arbre->header()->setDefaultSectionSize(100);
        GB_ajouter = new QGroupBox(GB_general);
        GB_ajouter->setObjectName(QStringLiteral("GB_ajouter"));
        GB_ajouter->setGeometry(QRect(360, 50, 291, 111));
        layoutWidget = new QWidget(GB_ajouter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 257, 58));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        PB_ajouterCollecteur = new QPushButton(layoutWidget);
        PB_ajouterCollecteur->setObjectName(QStringLiteral("PB_ajouterCollecteur"));

        horizontalLayout->addWidget(PB_ajouterCollecteur);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        PB_ajouterSite = new QPushButton(layoutWidget);
        PB_ajouterSite->setObjectName(QStringLiteral("PB_ajouterSite"));

        horizontalLayout_2->addWidget(PB_ajouterSite);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(610, 280, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        PB_ok = new QPushButton(splitter);
        PB_ok->setObjectName(QStringLiteral("PB_ok"));
        splitter->addWidget(PB_ok);
        PB_cancel = new QPushButton(splitter);
        PB_cancel->setObjectName(QStringLiteral("PB_cancel"));
        splitter->addWidget(PB_cancel);
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
        GB_general->setTitle(QApplication::translate("FEN_Configurateur", "Gestion des sites et des collecteurs", 0));
        QTreeWidgetItem *___qtreewidgetitem = TW_arbre->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("FEN_Configurateur", "Arbre de repr\303\251sentation", 0));

        const bool __sortingEnabled = TW_arbre->isSortingEnabled();
        TW_arbre->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = TW_arbre->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("FEN_Configurateur", "La tour du pin", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("FEN_Configurateur", "Mairie", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("FEN_Configurateur", "Ecole", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("FEN_Configurateur", "M\303\251diath\303\250que", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = TW_arbre->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("FEN_Configurateur", "La chapelle de la tour", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = TW_arbre->topLevelItem(2);
        ___qtreewidgetitem6->setText(0, QApplication::translate("FEN_Configurateur", "Le passage", 0));
        TW_arbre->setSortingEnabled(__sortingEnabled);

        GB_ajouter->setTitle(QString());
        label_4->setText(QApplication::translate("FEN_Configurateur", "Ajouter un nouveau collecteur", 0));
        PB_ajouterCollecteur->setText(QApplication::translate("FEN_Configurateur", "Ajouter", 0));
        label_3->setText(QApplication::translate("FEN_Configurateur", "Ajouter un nouveau site          ", 0));
        PB_ajouterSite->setText(QApplication::translate("FEN_Configurateur", "Ajouter", 0));
        PB_ok->setText(QApplication::translate("FEN_Configurateur", "OK", 0));
        PB_cancel->setText(QApplication::translate("FEN_Configurateur", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class FEN_Configurateur: public Ui_FEN_Configurateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEN_CONFIGURATEUR_H
