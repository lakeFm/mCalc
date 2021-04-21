#include <QApplication>
#include <QWidget>

int main(int argc, char ** argv){
    QApplication app(argc,argv);
    QWidget calc;
    calc.resize(400,400);
    calc.show();
    return app.exec();
}
