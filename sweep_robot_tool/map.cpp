#include "map.h"
#include "ui_map.h"
#include <QDebug>

map::map(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::map)
{
    ui->setupUi(this);
}

map::~map()
{
    delete ui;
}

// 窗口第一次运行，或者界面发生改变，或者调用this->update()；时都会自动调用执行；
void map::paintEvent(QPaintEvent *event)
{
    // DrawItems();
//    if(m_flag_save_image)
//    {
//        PainterToImage();
//        m_flag_save_image = false;
//    }

    qDebug() << "刷新地图";
}

void map::DrawItems()
{
    QPainter painter(this);
    painter.setBrush(Qt::lightGray);
    painter.setPen(QPen(QColor(Qt::black),1));

    for(int i=0; i<map_Columes; i++)
    {
        for(int j=0; j<map_Rows; j++)
        {
            // DrawItem(painter,m_items[i][j]);
        }
    }
}
