#include "mafenetre.h"
#include "charger_csv.h"
#include "iostream"
#include <QString>





void MaFenetre::setQuitter()
{
    this->close();
}

void MaFenetre::setCouleur()
{

}

MaFenetre::MaFenetre(QWidget *parent) : QMainWindow (parent)
{
    setFixedSize(800,600);
    m_bou = new QPushButton("quitter",this);
    m_bou->setGeometry(600,400,80,40);

    m_lab = new QLabel("Couleur", this);
    m_lab->setFont(QFont("Arial", 12, QFont::Bold, true));
    m_lab->move(320, 125);
    read_csv(m_mat,m_vet,"data.csv");

    m_com = new QComboBox(this);
    m_com->setGeometry(300,150,100,30);
    for(string str : m_vet)
    {
        m_com->addItem(str.c_str());
    }

    m_tra = new QLabel(this);
    m_tra->setFont(QFont("Arial",12, QFont::Bold, true));
    m_tra->move(320,300);


    m_table = new QTableWidget(m_mat.size()+1,m_mat[0].size()+1,this);
    m_table->setGeometry(0,250,550,350);
    //m_table->move(100,100);

    for (int i = 0; i < m_mat.size(); ++i)
    {

        string patient = "patient " + std::to_string(i);

        m_table->setItem(i+1,0,new QTableWidgetItem(patient.c_str()));
    }

    for (int i =0 ; i < m_vet.size(); i++)
    {
       m_table->setItem(0,i+1,new QTableWidgetItem (QString::fromUtf8(m_vet[i].c_str())));
    }

    for (int i = 0; i < m_mat.size(); ++i)
    {
        for (int j = 0; j < m_mat[i].size(); j++)
        {

            m_table->setItem(i+1,j+1,new QTableWidgetItem (QString::fromUtf8(m_mat[i][j].c_str())));
        }
    }


    connect(m_bou, SIGNAL(clicked()),this,SLOT(setQuitter()));
    connect(m_com, SIGNAL(currentIndexChanged(const QString &)),this,SLOT(setCouleur()));



}
