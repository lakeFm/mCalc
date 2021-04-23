#include "calcui.h"

#include <QFrame>
#include <calcbutton.h>
#include <qboxlayout.h>

CalcUI::CalcUI(QWidget *parent) : QWidget(parent){

    QPushButton *btn = new QPushButton("C",this);
    QVBoxLayout *root = new QVBoxLayout(this);
    root->addWidget(btn);
    setLayout(root);
}
