#include <QApplication>
#include <QWidget>
#include <calcui.h>

int main(int argc, char ** argv){
    QApplication app(argc,argv);
    CalcUI calc(0);
    calc.resize(400,400);
    calc.show();
    return app.exec();
}
