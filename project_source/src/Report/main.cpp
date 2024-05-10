#include "Report.h"
#include <QtWidgets/QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file("Report.qss");
    if (!file.open(QFile::ReadOnly))
    {
        return -1;
    }
    QString qsStyleSheet = QLatin1String(file.readAll());
    a.setStyleSheet(qsStyleSheet);

    CReport w;
    w.show();

    return a.exec();
}
