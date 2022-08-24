#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->groupbox_serial_set->hide();

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_comboBox_currentIndexChanged(int index)
{
    if(0 == index)
    {
        ui->groupbox_serial_set->hide();
        ui->groupbox_tcp_serverl_set->show();
    }
    else if(1 == index)
    {
        ui->groupbox_serial_set->show();
        ui->groupbox_tcp_serverl_set->hide();
    }
}
