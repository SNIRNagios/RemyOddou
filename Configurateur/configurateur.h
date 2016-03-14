#ifndef CONFIGURATEUR_H
#define CONFIGURATEUR_H


#include <QObject>
#include <QVector>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>

class Configurateur : public QObject
{
    Q_OBJECT

private:
    QFile * fichier; //Objet QFile pour intéragir avec le fichier XML
    QString nomFichier;// Nom du fichier XML traité

    QVector <QString> vectorId;//vector qui stocke les id lus
    QVector <QString> vectorAdresse;// Tableau dynamique qui stockera temporairement les adresses IP
    QVector <QString> vectorSite;// Tableau dynamique qui stockera temporairement le nom des sites distants

    QString nomLu;//contient le nom du site récupéré dans le formulaire IHM
    QString ipLue;//contient Adresse IP récupérée dans le formulaire IHM
    QString id;//stocke l'id lu


public:
    explicit Configurateur(QObject *parent = 0);
    void Add(QString nom, QString ip);// Méthode pour ajouter une nouvelle configuration
    void Edit();


signals:

public slots:

};

#endif // CONFIGURATEUR_H
