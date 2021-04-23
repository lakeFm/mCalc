#include "calcbutton.h"

CalcButton::CalcButton(QString text,QWidget * parent)  : QPushButton(parent){
    this->setText(text);
}

void CalcButton::applyTheme(CalcTheme theme){
    QString style = "background : " + theme.getPrimaryColor().name(QColor::HexArgb) + ";" +
                    "color : " + theme.getTextColor().name(QColor::HexArgb) + ";";
    this->setStyleSheet(style);
}
