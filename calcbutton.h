#ifndef CALCBUTTON_H
#define CALCBUTTON_H

#include <QPushButton>
#include <calctheme.h>



class CalcButton : public QPushButton
{
public:
    CalcButton(QString,QWidget*);
    void applyTheme(CalcTheme);

};

#endif // CALCBUTTON_H
