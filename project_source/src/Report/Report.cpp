#include "Report.h"

CReport::CReport(QWidget *parent)
    : QMainWindow(parent)
    , m_pBottom(NULL)
    , m_pMenuDlg(NULL)
{
    ui.setupUi(this);
    this->setUI();
}

CReport::~CReport()
{
    if (m_pBottom != NULL)
    {
        delete m_pBottom;
        m_pBottom = NULL;
    }
    if (m_pMenuDlg != NULL)
    {
        delete m_pMenuDlg;
        m_pMenuDlg = NULL;
    }
}

void CReport::setUI()
{
    this->setWindowFlags(Qt::FramelessWindowHint);

    // set bottomMenu
    if (m_pBottom == NULL)
    {
        m_pBottom = new CReportBottomMenu;
    }
    connect(m_pBottom, SIGNAL(exit()), this, SLOT(exit()));
    
    //set Bottom menu size, position
    int nHeight = this->height() * 0.1;
    int nWidth = this->width();

    m_pBottom->resize(nWidth, nHeight);
    m_pBottom->move(0, this->height()*0.9);

    this->layout()->addWidget(m_pBottom);
}

void CReport::on_pushButton_yoolin_clicked()
{
    if (m_pMenuDlg == NULL)
    {
        m_pMenuDlg = new CReportMenuDlg;
    }
    m_pMenuDlg->resize(m_pMenuDlg->width(), this->height()); // set size
    m_pMenuDlg->move(this->geometry().center() - m_pMenuDlg->rect().center()); // set position
    m_pMenuDlg->show();
}

void CReport::exit()
{
    this->close();
}