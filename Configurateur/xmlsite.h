#ifndef XMLSITE_H
#define XMLSITE_H

#include <QObject>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QFile>

class xmlSite : public QObject
{
    Q_OBJECT

public:
    explicit xmlSite(QObject *parent = 0);
    void ajouterSite(QString nom);
signals:

public slots:

private:
    QString nomSite;
    QString nomCollecteur;
    QString ipCollecteur;

    QVector <QString> v_nomSite;
    QMap <QString,QString,int> m_collecteur;
    //QMap <QStringList,int> m_collecteur;

    QFile * fichier; //Objet QFile pour intéragir avec le fichier XML
    QString nomFichier;// Nom du fichier XML traité


};

#endif // XMLSITE_H
