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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLineEdit *LE_ip;
    QLineEdit *LE_nom;
    QGroupBox *groupBox;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
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
        LE_ip = new QLineEdit(centralWidget);
        LE_ip->setObjectName(QStringLiteral("LE_ip"));
        LE_ip->setGeometry(QRect(10, 310, 91, 21));
        LE_ip->setMaxLength(15);
        LE_ip->setFrame(true);
        LE_ip->setClearButtonEnabled(false);
        LE_nom = new QLineEdit(centralWidget);
        LE_nom->setObjectName(QStringLiteral("LE_nom"));
        LE_nom->setGeometry(QRect(20, 330, 201, 21));
        LE_nom->setMaxLength(32767);
        LE_nom->setFrame(true);
        LE_nom->setEchoMode(QLineEdit::Normal);
        LE_nom->setDragEnabled(false);
        LE_nom->setClearButtonEnabled(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 30, 661, 231));
        treeWidget = new QTreeWidget(groupBox);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(0, font);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 50, 341, 151));
        treeWidget->setMaximumSize(QSize(350, 16777215));
        treeWidget->header()->setDefaultSectionSize(100);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 50, 291, 111));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 257, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


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
        LE_ip->setInputMask(QApplication::translate("FEN_Configurateur", "009.009.009.009;_", 0));
        LE_nom->setInputMask(QString());
        LE_nom->setPlaceholderText(QString());
        groupBox->setTitle(QApplication::translate("FEN_Configurateur", "Gestion des sites et des collecteurs", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("FEN_Configurateur", "Arbre de repr\303\251sentation", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("FEN_Configurateur", "La tour du pin", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("FEN_Configurateur", "Mairie", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("FEN_Configurateur", "Ecole", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("FEN_Configurateur", "M\303\251diath\303\250que", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("FEN_Configurateur", "La chapelle de la tour", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem6->setText(0, QApplication::translate("FEN_Configurateur", "Le passage", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        groupBox_2->setTitle(QString());
        label_4->setText(QApplication::translate("FEN_Configurateur", "Ajouter un nouveau collecteur", 0));
        pushButton->setText(QApplication::translate("FEN_Configurateur", "Add", 0));
        label_3->setText(QApplication::translate("FEN_Configurateur", "Ajouter un nouveau site          ", 0));
        pushButton_2->setText(QApplication::translate("FEN_Configurateur", "Add", 0));
        PB_ok->setText(QApplication::translate("FEN_Configurateur", "OK", 0));
        PB_cancel->setText(QApplication::translate("FEN_Configurateur", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class FEN_Configurateur: public Ui_FEN_Configurateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEN_CONFIGURATEUR_H
