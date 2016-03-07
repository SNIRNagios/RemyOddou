#include "fen_configurateur.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FEN_Configurateur w;
    w.show();

    return a.exec();
}
