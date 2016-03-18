#ifndef FEN_AJOUTERSITE_H
#define FEN_AJOUTERSITE_H

#include <QDialog>

namespace Ui {
class FEN_AjouterSite;
}

class FEN_AjouterSite : public QDialog
{
    Q_OBJECT

public:
    explicit FEN_AjouterSite(QWidget *parent = 0);
    ~FEN_AjouterSite();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::FEN_AjouterSite *ui;
};

#endif // FEN_AJOUTERSITE_H
