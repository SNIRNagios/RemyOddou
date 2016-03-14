#include "configurateur.h"

Configurateur::Configurateur(QObject *parent) : QObject(parent)
{

}

void Configurateur::Add(QString nom, QString ip)
{

    //Lecture du fichier XML
      QXmlStreamReader reader; // Objet servant à la navigation

      //Affectation
      nomFichier="configuration.xml";
      fichier=new QFile(nomFichier);

      int k=1;

      //Ouverture du fichier et choix du mode d'ouverture
      if (fichier->open(QFile::ReadOnly | QFile::Text)) // Ouverture du fichier XML en lecture seule et en mode texte
      {

      reader.setDevice(fichier); // Initialise l'instance reader avec le flux XML venant de file

      //Le but de cette boucle est de parcourir le fichier et de vérifier si l'on est au début d'un élément.

    //Lit le jeton suivant et retourne son type
      reader.readNext();
    //Effectue une boucle tant que le fichier XML n'a pas été lu entièrement
      while (!reader.atEnd())
      {
        //Au début d'un élément
          if (reader.isStartElement())
          {
                 //Si l'élément lu est "configuration"
                  if (reader.name() == "configuration")
                  {
                      //Lecture du prochain jeton
                      reader.readNext();
                      // Tant que celui-ci n'est pas un élément de départ on avance au jeton suivant
                      //while(reader.isStartElement()==false)
                          //reader.readNext();
                  }

                  if(reader.name() == "collecteur")
                  {
                        k++;
                        id = reader.attributes().value("id").toString();
                        vectorId.append(id);

                        nomLu = reader.attributes().value("nom").toString();
                        vectorSite.append(nomLu);

                        ipLue = reader.attributes().value("ip").toString();
                        vectorAdresse.append(ipLue);

                   }
          }
          reader.readNext(); // On va au prochain token
        }

      fichier->close();
      }

    // QString::number(k);
     vectorAdresse.append(ip);
     vectorSite.append(nom);
     vectorId.append(QString::number(k));

    // Création et ouverture du fichier XML ou seulement ouverture du fichier XML si le fichier existe déjà
    // Ouverture du fichier en écriture et en texte.

   if(fichier->open(QFile::WriteOnly | QFile::Text))
   {
     // Permet d'éditer le fichier XML - Objet servant à l'écriture
     QXmlStreamWriter writer(fichier);

     // Active l'indentation du fichier XML pour avoir une meilleur visibilité
     writer.setAutoFormatting(true);//bool

     // Écrit l'en-tête du fichier XML : <?xml version="1.0" encoding="UTF-8" ?>
     writer.writeStartDocument();

     writer.writeStartElement("configuration");//<configuration>

     //for (initialisation; test de continuation; boucle)
    for( int i=0; i < vectorId.size(); i++ )// size() Taille du tableau
     {

         writer.writeStartElement("collecteur");//<collecteur>

         writer.writeAttribute("id",vectorId[i]);//Ajoute un attribut à l'élément collecteur
         writer.writeAttribute("nom",vectorSite[i]);//Ajoute un nouvel attribut à l'élément collecteur
         writer.writeAttribute("ip",vectorAdresse[i]);//Ajoute un autre attribut à l'élément collecteur

         writer.writeEndElement();//</collecteur>
 /*
         <Configuration>
             <collecteur id="1" nom="local" ip="127.0.0.1"/>
         </Configuration>
 */

     }

     vectorSite.clear();
     vectorAdresse.clear();
     vectorId.clear();


     writer.writeEndElement();//</configuration>

     // Finalise le document XML
     writer.writeEndDocument();

     // Fermer le fichier pour bien enregistrer le document et ferme l'élément "configuration"
     fichier->close();
     // Message d'information généré après la mise à jour du fichier XML
     QMessageBox alerte;
     alerte.setWindowTitle("Enregistrement");
     alerte.setText("Le fichier de configuration a bien été mis à jour");
     alerte.setIcon(QMessageBox::Information);
     alerte.exec();

   }





}

void Configurateur::Edit()
{


}

