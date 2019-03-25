#include<QWidget>
#include<QMainWindow>
#include<QLabel>
#include<QPushButton>
#include<QComboBox>
#include<QString>

class MaFenetre : public QMainWindow
{
    Q_OBJECT

public slots:

    void setQuitter();
    void setCouleur();

public :
    MaFenetre(QWidget *parent = 0);
private :
    QLabel *m_lab, *m_tra;
    QPushButton *m_bou;
    QComboBox *m_com;
    QString couleur;
};
