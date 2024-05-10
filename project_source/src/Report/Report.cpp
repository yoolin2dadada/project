#include "Report.h"
#include "ReportMenuDlg.h"

CReport::CReport(QWidget *parent)
    : QMainWindow(parent)
    , dlg(NULL)
{
    ui.setupUi(this);

    this->showMaximized();
    //connect(ui.pushButton_yoolin, SIGNAL(hover()), this, SLOT(on_pushButton_yoolin_clicked()));
}

CReport::~CReport()
{
    if (dlg != NULL)
    {
        delete dlg;
        dlg = NULL;
    }    
}

void CReport::on_pushButton_yoolin_clicked()
{
    if (dlg == NULL)
    {
        dlg = new CReportMenuDlg;
    }
    dlg->show();
}

void CReport::mouseReleaseEvent(QMouseEvent* e)
{
    //이거 pushbutton class하나 만들어서 거기에다가 옮겨야함..
    if (dlg->isHidden())
    {
        return;
    }
    else
    {
        dlg->close();
    }
    QWidget::mouseReleaseEvent(e);
}
