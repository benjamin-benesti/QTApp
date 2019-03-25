#include <QApplication>
#include "mafenetre.h"
#include "iostream"
int main(int argc, char* argv[])
{

    QApplication app(argc, argv);
    MaFenetre fenetre;
    fenetre.show();
    return app.exec();
}
