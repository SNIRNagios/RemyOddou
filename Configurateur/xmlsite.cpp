#include "xmlsite.h"

xmlSite::xmlSite(QObject *parent) : QObject(parent)
{

}

void xmlSite::ajouterSite(QString nom)
{
    //Lecture du fichier XML
      QXmlStreamReader reader; // Objet servant à la navigation

      //Affectation
      nomFichier="configuration.xml";
      fichier=new QFile(nomFichier);

      //Ouverture du fichier et choix du mode d'ouverture
      if (fichier->open(QFile::ReadOnly | QFile::Text)) // Ouverture du fichier XML en lecture seule et en mode texte.
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
                  if (reader.name()=="site")
                  {

                      nomSite= reader.attributes().value("nom").toString();//Lecture du nom du site
                      v_nomSite.append(nomSite);//Stockage du nom dans le vector

                     if(reader.name() == "collecteur")
                     {


                        // QStringList liste;
                       //  liste << element;

                        nomCollecteur = reader.attributes().value("nom").toString();//Lecture du nom du collecteur
                        vector_nomCollecteur.append(nomCollecteur);//Stockage du nom dans le vector

                        ipCollecteur = reader.attributes().value("ip").toString();//Lecture de l'ip du collecteur
                        vector_ipCollecteur.append(ipCollecteur);

                        m_collecteur.insert(nomCollecteur,ipCollecteur);

                     }
                  }
          }
          reader.readNext(); // On va au prochain token
        }

      fichier->close();
      }


}


