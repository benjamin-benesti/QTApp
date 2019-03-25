#include "mafenetre.h"



void MaFenetre::setQuitter()
{
    this->close();
}

void MaFenetre::setCouleur()
{

}

MaFenetre::MaFenetre(QWidget *parent)
{
    setFixedSize(800,600);
    m_bou = new QPushButton("quitter",this);
    m_bou->setGeometry(600,400,80,40);

    m_lab = new QLabel("Couleur", this);
    m_lab->setFont(QFont("Arial", 12, QFont::Bold, true));
    m_lab->move(320, 125);

    m_com = new QComboBox(this);




    connect(m_bou, SIGNAL(clicked()),this,SLOT(setQuitter()));
}
