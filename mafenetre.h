#include<QWidget>
#include<QMainWindow>
#include<QLabel>
#include<QPushButton>
#include<QComboBox>
#include<QString>
#include<QTableWidget>
#include "charger_csv.h"

class MaFenetre : public QMainWindow
{
    Q_OBJECT

public slots:

    void setQuitter();
    void setCouleur();

public :
    MaFenetre(QWidget *parent = 0);
    CVString m_vet;
    CMatString m_mat;
private :
    QLabel *m_lab, *m_tra;
    QPushButton *m_bou;
    QComboBox *m_com;
    QString couleur;
    QTableWidget *m_table;

};
