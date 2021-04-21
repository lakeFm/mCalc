#include <QApplication>
#include "ui/Calc.h"

int main(int argc,char ** argv){
  QApplication app(argc,argv);
  Calc win;
  win.show();
  return app.exec();
}
