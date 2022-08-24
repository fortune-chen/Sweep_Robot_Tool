/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "map.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    map *formWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_clear_map;
    QPushButton *btn_save_map;
    QPushButton *btn_test_add_map_points;
    QLabel *m_label_coord;
    QPushButton *btn_focus_map;
    QVBoxLayout *v2_settings;
    QGridLayout *gridLayout_7;
    QGroupBox *robot_log_receive_Box_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QComboBox *comboBox;
    QGroupBox *groupbox_tcp_serverl_set;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_server_port;
    QLabel *label_server_ip;
    QLineEdit *lineEdit_server_port;
    QLineEdit *lineEdit_server_ip;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_connect_tcp_server;
    QPushButton *btn_disconnect_tcp_server;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupbox_serial_set;
    QGridLayout *gridLayout_12;
    QPushButton *btn_open_serial;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *comboBox_dataBits;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_baudRate;
    QLabel *label_3;
    QComboBox *comboBox_stopBit;
    QLabel *label;
    QComboBox *comboBox_parity;
    QComboBox *serialport_name;
    QGroupBox *groupbox_tcp_serverl_set_2;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_cmd_forward;
    QPushButton *pushButton_cmd_backward;
    QPushButton *pushButton_cmd_left_rotate;
    QPushButton *pushButton_cmd_right_rotate;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_10;
    QSlider *slider_water_lever_set;
    QLabel *label_11;
    QSlider *slider_vacuumr_lever_set;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupbox_control_robot;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_cmd_auto;
    QPushButton *pushButton_cmd_stop;
    QPushButton *pushButton_cmd_home;
    QPushButton *pushButton_cmd_random;
    QPushButton *pushButton_cmd_edge;
    QPushButton *pushButton_cmd_spiral;
    QPushButton *pushButton_cmd_square_spiral;
    QPushButton *pushButton_cmd_ymove;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *robot_log_receive_Box;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_11;
    QPlainTextEdit *plainTextEdit_recv;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_save_log_ptn;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1440, 840);
        Widget->setMinimumSize(QSize(1440, 840));
        QFont font;
        font.setFamily(QString::fromUtf8("72"));
        font.setPointSize(10);
        Widget->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/software.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setWindowOpacity(5.000000000000000);
        Widget->setAutoFillBackground(true);
        horizontalLayout_5 = new QHBoxLayout(Widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formWidget = new map(Widget);
        formWidget->setObjectName(QString::fromUtf8("formWidget"));
        formWidget->setMinimumSize(QSize(820, 770));

        verticalLayout_3->addWidget(formWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, -1);
        btn_clear_map = new QPushButton(Widget);
        btn_clear_map->setObjectName(QString::fromUtf8("btn_clear_map"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_clear_map->sizePolicy().hasHeightForWidth());
        btn_clear_map->setSizePolicy(sizePolicy);
        btn_clear_map->setMinimumSize(QSize(120, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        btn_clear_map->setFont(font1);

        horizontalLayout->addWidget(btn_clear_map);

        btn_save_map = new QPushButton(Widget);
        btn_save_map->setObjectName(QString::fromUtf8("btn_save_map"));
        btn_save_map->setEnabled(true);
        sizePolicy.setHeightForWidth(btn_save_map->sizePolicy().hasHeightForWidth());
        btn_save_map->setSizePolicy(sizePolicy);
        btn_save_map->setMinimumSize(QSize(120, 35));
        btn_save_map->setFont(font1);

        horizontalLayout->addWidget(btn_save_map);

        btn_test_add_map_points = new QPushButton(Widget);
        btn_test_add_map_points->setObjectName(QString::fromUtf8("btn_test_add_map_points"));
        sizePolicy.setHeightForWidth(btn_test_add_map_points->sizePolicy().hasHeightForWidth());
        btn_test_add_map_points->setSizePolicy(sizePolicy);
        btn_test_add_map_points->setMinimumSize(QSize(120, 35));
        btn_test_add_map_points->setFont(font1);

        horizontalLayout->addWidget(btn_test_add_map_points);

        m_label_coord = new QLabel(Widget);
        m_label_coord->setObjectName(QString::fromUtf8("m_label_coord"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_label_coord->sizePolicy().hasHeightForWidth());
        m_label_coord->setSizePolicy(sizePolicy1);
        m_label_coord->setMinimumSize(QSize(120, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(12);
        m_label_coord->setFont(font2);
        m_label_coord->setLayoutDirection(Qt::RightToLeft);
        m_label_coord->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(m_label_coord);

        btn_focus_map = new QPushButton(Widget);
        btn_focus_map->setObjectName(QString::fromUtf8("btn_focus_map"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_focus_map->sizePolicy().hasHeightForWidth());
        btn_focus_map->setSizePolicy(sizePolicy2);
        btn_focus_map->setMinimumSize(QSize(150, 35));
        btn_focus_map->setFont(font1);

        horizontalLayout->addWidget(btn_focus_map);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);

        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_3);

        v2_settings = new QVBoxLayout();
        v2_settings->setSpacing(0);
        v2_settings->setObjectName(QString::fromUtf8("v2_settings"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));

        v2_settings->addLayout(gridLayout_7);

        robot_log_receive_Box_2 = new QGroupBox(Widget);
        robot_log_receive_Box_2->setObjectName(QString::fromUtf8("robot_log_receive_Box_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(robot_log_receive_Box_2->sizePolicy().hasHeightForWidth());
        robot_log_receive_Box_2->setSizePolicy(sizePolicy3);
        robot_log_receive_Box_2->setMinimumSize(QSize(320, 0));
        robot_log_receive_Box_2->setMaximumSize(QSize(800, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("72"));
        font3.setPointSize(9);
        robot_log_receive_Box_2->setFont(font3);
        gridLayout_8 = new QGridLayout(robot_log_receive_Box_2);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setHorizontalSpacing(10);
        gridLayout_11->setVerticalSpacing(6);
        gridLayout_11->setContentsMargins(0, -1, 0, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_6->setContentsMargins(9, 9, 5, 9);
        label_9 = new QLabel(robot_log_receive_Box_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy4);
        label_9->setMinimumSize(QSize(200, 0));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(9);
        label_9->setFont(font4);

        verticalLayout_6->addWidget(label_9);

        comboBox = new QComboBox(robot_log_receive_Box_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy5);
        comboBox->setMinimumSize(QSize(153, 35));
        comboBox->setFont(font1);

        verticalLayout_6->addWidget(comboBox);

        groupbox_tcp_serverl_set = new QGroupBox(robot_log_receive_Box_2);
        groupbox_tcp_serverl_set->setObjectName(QString::fromUtf8("groupbox_tcp_serverl_set"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupbox_tcp_serverl_set->sizePolicy().hasHeightForWidth());
        groupbox_tcp_serverl_set->setSizePolicy(sizePolicy6);
        groupbox_tcp_serverl_set->setMaximumSize(QSize(16777215, 16777215));
        groupbox_tcp_serverl_set->setFont(font3);
        gridLayout_13 = new QGridLayout(groupbox_tcp_serverl_set);
        gridLayout_13->setSpacing(5);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(5, 5, 5, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(9);
        gridLayout_2->setContentsMargins(0, 9, 0, 9);
        label_server_port = new QLabel(groupbox_tcp_serverl_set);
        label_server_port->setObjectName(QString::fromUtf8("label_server_port"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_server_port->sizePolicy().hasHeightForWidth());
        label_server_port->setSizePolicy(sizePolicy7);
        label_server_port->setMinimumSize(QSize(40, 35));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        label_server_port->setFont(font5);

        gridLayout_2->addWidget(label_server_port, 1, 0, 1, 1);

        label_server_ip = new QLabel(groupbox_tcp_serverl_set);
        label_server_ip->setObjectName(QString::fromUtf8("label_server_ip"));
        sizePolicy7.setHeightForWidth(label_server_ip->sizePolicy().hasHeightForWidth());
        label_server_ip->setSizePolicy(sizePolicy7);
        label_server_ip->setMinimumSize(QSize(40, 35));
        label_server_ip->setFont(font5);

        gridLayout_2->addWidget(label_server_ip, 0, 0, 1, 1);

        lineEdit_server_port = new QLineEdit(groupbox_tcp_serverl_set);
        lineEdit_server_port->setObjectName(QString::fromUtf8("lineEdit_server_port"));
        sizePolicy5.setHeightForWidth(lineEdit_server_port->sizePolicy().hasHeightForWidth());
        lineEdit_server_port->setSizePolicy(sizePolicy5);
        lineEdit_server_port->setMinimumSize(QSize(70, 35));
        lineEdit_server_port->setFont(font1);

        gridLayout_2->addWidget(lineEdit_server_port, 1, 1, 1, 1);

        lineEdit_server_ip = new QLineEdit(groupbox_tcp_serverl_set);
        lineEdit_server_ip->setObjectName(QString::fromUtf8("lineEdit_server_ip"));
        sizePolicy5.setHeightForWidth(lineEdit_server_ip->sizePolicy().hasHeightForWidth());
        lineEdit_server_ip->setSizePolicy(sizePolicy5);
        lineEdit_server_ip->setMinimumSize(QSize(70, 35));
        lineEdit_server_ip->setFont(font1);

        gridLayout_2->addWidget(lineEdit_server_ip, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        btn_connect_tcp_server = new QPushButton(groupbox_tcp_serverl_set);
        btn_connect_tcp_server->setObjectName(QString::fromUtf8("btn_connect_tcp_server"));
        sizePolicy5.setHeightForWidth(btn_connect_tcp_server->sizePolicy().hasHeightForWidth());
        btn_connect_tcp_server->setSizePolicy(sizePolicy5);
        btn_connect_tcp_server->setMinimumSize(QSize(0, 40));
        btn_connect_tcp_server->setFont(font5);

        verticalLayout->addWidget(btn_connect_tcp_server);

        btn_disconnect_tcp_server = new QPushButton(groupbox_tcp_serverl_set);
        btn_disconnect_tcp_server->setObjectName(QString::fromUtf8("btn_disconnect_tcp_server"));
        sizePolicy5.setHeightForWidth(btn_disconnect_tcp_server->sizePolicy().hasHeightForWidth());
        btn_disconnect_tcp_server->setSizePolicy(sizePolicy5);
        btn_disconnect_tcp_server->setMinimumSize(QSize(0, 40));
        btn_disconnect_tcp_server->setFont(font5);

        verticalLayout->addWidget(btn_disconnect_tcp_server);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout_13->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_5, 1, 0, 1, 1);


        verticalLayout_6->addWidget(groupbox_tcp_serverl_set);

        groupbox_serial_set = new QGroupBox(robot_log_receive_Box_2);
        groupbox_serial_set->setObjectName(QString::fromUtf8("groupbox_serial_set"));
        groupbox_serial_set->setEnabled(true);
        sizePolicy6.setHeightForWidth(groupbox_serial_set->sizePolicy().hasHeightForWidth());
        groupbox_serial_set->setSizePolicy(sizePolicy6);
        groupbox_serial_set->setMinimumSize(QSize(156, 0));
        groupbox_serial_set->setMaximumSize(QSize(16777215, 16777215));
        groupbox_serial_set->setFont(font3);
        gridLayout_12 = new QGridLayout(groupbox_serial_set);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setHorizontalSpacing(1);
        gridLayout_12->setVerticalSpacing(5);
        gridLayout_12->setContentsMargins(5, 5, 5, 5);
        btn_open_serial = new QPushButton(groupbox_serial_set);
        btn_open_serial->setObjectName(QString::fromUtf8("btn_open_serial"));
        btn_open_serial->setEnabled(true);
        sizePolicy5.setHeightForWidth(btn_open_serial->sizePolicy().hasHeightForWidth());
        btn_open_serial->setSizePolicy(sizePolicy5);
        btn_open_serial->setMinimumSize(QSize(0, 40));
        btn_open_serial->setFont(font1);

        gridLayout_12->addWidget(btn_open_serial, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(0, 0, 9, 0);
        label_2 = new QLabel(groupbox_serial_set);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy7.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy7);
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_dataBits = new QComboBox(groupbox_serial_set);
        comboBox_dataBits->setObjectName(QString::fromUtf8("comboBox_dataBits"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(2);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(comboBox_dataBits->sizePolicy().hasHeightForWidth());
        comboBox_dataBits->setSizePolicy(sizePolicy8);
        comboBox_dataBits->setMinimumSize(QSize(80, 40));
        comboBox_dataBits->setMaximumSize(QSize(16777215, 16777215));
        comboBox_dataBits->setFont(font1);

        gridLayout->addWidget(comboBox_dataBits, 2, 1, 1, 1);

        label_4 = new QLabel(groupbox_serial_set);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy7.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy7);
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(groupbox_serial_set);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy7.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy7);
        label_5->setMinimumSize(QSize(50, 0));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBox_baudRate = new QComboBox(groupbox_serial_set);
        comboBox_baudRate->setObjectName(QString::fromUtf8("comboBox_baudRate"));
        sizePolicy5.setHeightForWidth(comboBox_baudRate->sizePolicy().hasHeightForWidth());
        comboBox_baudRate->setSizePolicy(sizePolicy5);
        comboBox_baudRate->setMinimumSize(QSize(80, 40));
        comboBox_baudRate->setMaximumSize(QSize(16777215, 16777215));
        comboBox_baudRate->setFont(font1);

        gridLayout->addWidget(comboBox_baudRate, 1, 1, 1, 1);

        label_3 = new QLabel(groupbox_serial_set);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy7.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy7);
        label_3->setMinimumSize(QSize(50, 0));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_stopBit = new QComboBox(groupbox_serial_set);
        comboBox_stopBit->setObjectName(QString::fromUtf8("comboBox_stopBit"));
        sizePolicy8.setHeightForWidth(comboBox_stopBit->sizePolicy().hasHeightForWidth());
        comboBox_stopBit->setSizePolicy(sizePolicy8);
        comboBox_stopBit->setMinimumSize(QSize(80, 40));
        comboBox_stopBit->setMaximumSize(QSize(16777215, 16777215));
        comboBox_stopBit->setFont(font1);

        gridLayout->addWidget(comboBox_stopBit, 4, 1, 1, 1);

        label = new QLabel(groupbox_serial_set);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy7.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy7);
        label->setMinimumSize(QSize(50, 0));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_parity = new QComboBox(groupbox_serial_set);
        comboBox_parity->setObjectName(QString::fromUtf8("comboBox_parity"));
        sizePolicy8.setHeightForWidth(comboBox_parity->sizePolicy().hasHeightForWidth());
        comboBox_parity->setSizePolicy(sizePolicy8);
        comboBox_parity->setMinimumSize(QSize(80, 40));
        comboBox_parity->setMaximumSize(QSize(16777215, 16777215));
        comboBox_parity->setFont(font1);

        gridLayout->addWidget(comboBox_parity, 3, 1, 1, 1);

        serialport_name = new QComboBox(groupbox_serial_set);
        serialport_name->setObjectName(QString::fromUtf8("serialport_name"));
        sizePolicy5.setHeightForWidth(serialport_name->sizePolicy().hasHeightForWidth());
        serialport_name->setSizePolicy(sizePolicy5);
        serialport_name->setMinimumSize(QSize(80, 40));
        serialport_name->setMaximumSize(QSize(16777215, 16777215));
        serialport_name->setFont(font1);

        gridLayout->addWidget(serialport_name, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout_6->addWidget(groupbox_serial_set);


        gridLayout_11->addLayout(verticalLayout_6, 0, 0, 1, 1);

        groupbox_tcp_serverl_set_2 = new QGroupBox(robot_log_receive_Box_2);
        groupbox_tcp_serverl_set_2->setObjectName(QString::fromUtf8("groupbox_tcp_serverl_set_2"));
        sizePolicy6.setHeightForWidth(groupbox_tcp_serverl_set_2->sizePolicy().hasHeightForWidth());
        groupbox_tcp_serverl_set_2->setSizePolicy(sizePolicy6);
        groupbox_tcp_serverl_set_2->setMinimumSize(QSize(205, 0));
        groupbox_tcp_serverl_set_2->setMaximumSize(QSize(16777215, 16777215));
        groupbox_tcp_serverl_set_2->setFont(font4);
        gridLayout_10 = new QGridLayout(groupbox_tcp_serverl_set_2);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(9, 9, 9, 9);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 0, 9, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));

        verticalLayout_4->addLayout(verticalLayout_5);

        pushButton_cmd_forward = new QPushButton(groupbox_tcp_serverl_set_2);
        pushButton_cmd_forward->setObjectName(QString::fromUtf8("pushButton_cmd_forward"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(1);
        sizePolicy9.setHeightForWidth(pushButton_cmd_forward->sizePolicy().hasHeightForWidth());
        pushButton_cmd_forward->setSizePolicy(sizePolicy9);
        pushButton_cmd_forward->setMinimumSize(QSize(80, 40));
        pushButton_cmd_forward->setFont(font1);

        verticalLayout_4->addWidget(pushButton_cmd_forward);

        pushButton_cmd_backward = new QPushButton(groupbox_tcp_serverl_set_2);
        pushButton_cmd_backward->setObjectName(QString::fromUtf8("pushButton_cmd_backward"));
        sizePolicy9.setHeightForWidth(pushButton_cmd_backward->sizePolicy().hasHeightForWidth());
        pushButton_cmd_backward->setSizePolicy(sizePolicy9);
        pushButton_cmd_backward->setMinimumSize(QSize(0, 40));
        pushButton_cmd_backward->setFont(font1);

        verticalLayout_4->addWidget(pushButton_cmd_backward);

        pushButton_cmd_left_rotate = new QPushButton(groupbox_tcp_serverl_set_2);
        pushButton_cmd_left_rotate->setObjectName(QString::fromUtf8("pushButton_cmd_left_rotate"));
        sizePolicy9.setHeightForWidth(pushButton_cmd_left_rotate->sizePolicy().hasHeightForWidth());
        pushButton_cmd_left_rotate->setSizePolicy(sizePolicy9);
        pushButton_cmd_left_rotate->setMinimumSize(QSize(0, 40));
        pushButton_cmd_left_rotate->setFont(font1);

        verticalLayout_4->addWidget(pushButton_cmd_left_rotate);

        pushButton_cmd_right_rotate = new QPushButton(groupbox_tcp_serverl_set_2);
        pushButton_cmd_right_rotate->setObjectName(QString::fromUtf8("pushButton_cmd_right_rotate"));
        sizePolicy9.setHeightForWidth(pushButton_cmd_right_rotate->sizePolicy().hasHeightForWidth());
        pushButton_cmd_right_rotate->setSizePolicy(sizePolicy9);
        pushButton_cmd_right_rotate->setMinimumSize(QSize(0, 40));
        pushButton_cmd_right_rotate->setFont(font1);

        verticalLayout_4->addWidget(pushButton_cmd_right_rotate);


        gridLayout_10->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(15);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(5, 9, 5, 9);
        label_10 = new QLabel(groupbox_tcp_serverl_set_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        verticalLayout_12->addWidget(label_10);

        slider_water_lever_set = new QSlider(groupbox_tcp_serverl_set_2);
        slider_water_lever_set->setObjectName(QString::fromUtf8("slider_water_lever_set"));
        slider_water_lever_set->setMouseTracking(true);
        slider_water_lever_set->setMaximum(100);
        slider_water_lever_set->setSingleStep(25);
        slider_water_lever_set->setPageStep(25);
        slider_water_lever_set->setValue(25);
        slider_water_lever_set->setSliderPosition(25);
        slider_water_lever_set->setTracking(false);
        slider_water_lever_set->setOrientation(Qt::Horizontal);
        slider_water_lever_set->setTickPosition(QSlider::TicksBothSides);

        verticalLayout_12->addWidget(slider_water_lever_set);

        label_11 = new QLabel(groupbox_tcp_serverl_set_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        verticalLayout_12->addWidget(label_11);

        slider_vacuumr_lever_set = new QSlider(groupbox_tcp_serverl_set_2);
        slider_vacuumr_lever_set->setObjectName(QString::fromUtf8("slider_vacuumr_lever_set"));
        slider_vacuumr_lever_set->setMinimumSize(QSize(90, 0));
        slider_vacuumr_lever_set->setMaximum(100);
        slider_vacuumr_lever_set->setSingleStep(25);
        slider_vacuumr_lever_set->setPageStep(25);
        slider_vacuumr_lever_set->setSliderPosition(25);
        slider_vacuumr_lever_set->setOrientation(Qt::Horizontal);
        slider_vacuumr_lever_set->setTickPosition(QSlider::TicksBothSides);

        verticalLayout_12->addWidget(slider_vacuumr_lever_set);


        gridLayout_10->addLayout(verticalLayout_12, 2, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_6, 1, 0, 1, 1);


        gridLayout_11->addWidget(groupbox_tcp_serverl_set_2, 0, 2, 1, 1);

        groupbox_control_robot = new QGroupBox(robot_log_receive_Box_2);
        groupbox_control_robot->setObjectName(QString::fromUtf8("groupbox_control_robot"));
        sizePolicy6.setHeightForWidth(groupbox_control_robot->sizePolicy().hasHeightForWidth());
        groupbox_control_robot->setSizePolicy(sizePolicy6);
        groupbox_control_robot->setMinimumSize(QSize(205, 0));
        groupbox_control_robot->setMaximumSize(QSize(16777215, 16777215));
        groupbox_control_robot->setFont(font4);
        gridLayout_9 = new QGridLayout(groupbox_control_robot);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(9, 9, 9, 9);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(5);
        gridLayout_5->setContentsMargins(9, 0, 9, 0);
        pushButton_cmd_auto = new QPushButton(groupbox_control_robot);
        pushButton_cmd_auto->setObjectName(QString::fromUtf8("pushButton_cmd_auto"));
        sizePolicy3.setHeightForWidth(pushButton_cmd_auto->sizePolicy().hasHeightForWidth());
        pushButton_cmd_auto->setSizePolicy(sizePolicy3);
        pushButton_cmd_auto->setMinimumSize(QSize(80, 40));
        pushButton_cmd_auto->setMaximumSize(QSize(240, 16777215));
        pushButton_cmd_auto->setFont(font1);

        gridLayout_5->addWidget(pushButton_cmd_auto, 0, 0, 1, 1);

        pushButton_cmd_stop = new QPushButton(groupbox_control_robot);
        pushButton_cmd_stop->setObjectName(QString::fromUtf8("pushButton_cmd_stop"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(1);
        sizePolicy10.setVerticalStretch(2);
        sizePolicy10.setHeightForWidth(pushButton_cmd_stop->sizePolicy().hasHeightForWidth());
        pushButton_cmd_stop->setSizePolicy(sizePolicy10);
        pushButton_cmd_stop->setMinimumSize(QSize(90, 40));
        pushButton_cmd_stop->setMaximumSize(QSize(240, 16777215));
        pushButton_cmd_stop->setFont(font5);

        gridLayout_5->addWidget(pushButton_cmd_stop, 7, 0, 1, 1);

        pushButton_cmd_home = new QPushButton(groupbox_control_robot);
        pushButton_cmd_home->setObjectName(QString::fromUtf8("pushButton_cmd_home"));
        sizePolicy3.setHeightForWidth(pushButton_cmd_home->sizePolicy().hasHeightForWidth());
        pushButton_cmd_home->setSizePolicy(sizePolicy3);
        pushButton_cmd_home->setMinimumSize(QSize(90, 40));
        pushButton_cmd_home->setMaximumSize(QSize(240, 16777215));
        pushButton_cmd_home->setFont(font1);

        gridLayout_5->addWidget(pushButton_cmd_home, 6, 0, 1, 1);

        pushButton_cmd_random = new QPushButton(groupbox_control_robot);
        pushButton_cmd_random->setObjectName(QString::fromUtf8("pushButton_cmd_random"));
        sizePolicy3.setHeightForWidth(pushButton_cmd_random->sizePolicy().hasHeightForWidth());
        pushButton_cmd_random->setSizePolicy(sizePolicy3);
        pushButton_cmd_random->setMinimumSize(QSize(90, 40));
        pushButton_cmd_random->setMaximumSize(QSize(240, 16777215));
        pushButton_cmd_random->setFont(font1);

        gridLayout_5->addWidget(pushButton_cmd_random, 4, 0, 1, 1);

        pushButton_cmd_edge = new QPushButton(groupbox_control_robot);
        pushButton_cmd_edge->setObjectName(QString::fromUtf8("pushButton_cmd_edge"));
        sizePolicy3.setHeightForWidth(pushButton_cmd_edge->sizePolicy().hasHeightForWidth());
        pushButton_cmd_edge->setSizePolicy(sizePolicy3);
        pushButton_cmd_edge->setMinimumSize(QSize(90, 40));
        pushButton_cmd_edge->setMaximumSize(QSize(240, 16777215));
        pushButton_cmd_edge->setFont(font1);

        gridLayout_5->addWidget(pushButton_cmd_edge, 1, 0, 1, 1);

        pushButton_cmd_spiral = new QPushButton(groupbox_control_robot);
        pushButton_cmd_spiral->setObjectName(QString::fromUtf8("pushButton_cmd_spiral"));
        sizePolicy3.setHeightForWidth(pushButton_cmd_spiral->sizePolicy().hasHeightForWidth());
        pushButton_cmd_spiral->setSizePolicy(sizePolicy3);
        pushButton_cmd_spiral->setMinimumSize(QSize(90, 40));
        pushButton_cmd_spiral->setMaximumSize(QSize(240, 16777215));
        pushButton_cmd_spiral->setFont(font1);

        gridLayout_5->addWidget(pushButton_cmd_spiral, 2, 0, 1, 1);

        pushButton_cmd_square_spiral = new QPushButton(groupbox_control_robot);
        pushButton_cmd_square_spiral->setObjectName(QString::fromUtf8("pushButton_cmd_square_spiral"));
        sizePolicy3.setHeightForWidth(pushButton_cmd_square_spiral->sizePolicy().hasHeightForWidth());
        pushButton_cmd_square_spiral->setSizePolicy(sizePolicy3);
        pushButton_cmd_square_spiral->setMinimumSize(QSize(90, 40));
        pushButton_cmd_square_spiral->setMaximumSize(QSize(240, 16777215));
        pushButton_cmd_square_spiral->setFont(font1);

        gridLayout_5->addWidget(pushButton_cmd_square_spiral, 3, 0, 1, 1);

        pushButton_cmd_ymove = new QPushButton(groupbox_control_robot);
        pushButton_cmd_ymove->setObjectName(QString::fromUtf8("pushButton_cmd_ymove"));
        sizePolicy3.setHeightForWidth(pushButton_cmd_ymove->sizePolicy().hasHeightForWidth());
        pushButton_cmd_ymove->setSizePolicy(sizePolicy3);
        pushButton_cmd_ymove->setMinimumSize(QSize(90, 40));
        pushButton_cmd_ymove->setMaximumSize(QSize(240, 16777215));
        pushButton_cmd_ymove->setFont(font1);

        gridLayout_5->addWidget(pushButton_cmd_ymove, 5, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 1, 0, 1, 1);


        gridLayout_11->addWidget(groupbox_control_robot, 0, 3, 1, 1);

        gridLayout_11->setColumnMinimumWidth(0, 1);
        gridLayout_11->setColumnMinimumWidth(1, 1);
        gridLayout_11->setColumnMinimumWidth(2, 1);
        gridLayout_11->setColumnMinimumWidth(3, 1);

        gridLayout_8->addLayout(gridLayout_11, 0, 0, 1, 1);


        v2_settings->addWidget(robot_log_receive_Box_2);

        robot_log_receive_Box = new QGroupBox(Widget);
        robot_log_receive_Box->setObjectName(QString::fromUtf8("robot_log_receive_Box"));
        sizePolicy10.setHeightForWidth(robot_log_receive_Box->sizePolicy().hasHeightForWidth());
        robot_log_receive_Box->setSizePolicy(sizePolicy10);
        robot_log_receive_Box->setMinimumSize(QSize(320, 0));
        robot_log_receive_Box->setMaximumSize(QSize(800, 16777215));
        robot_log_receive_Box->setFont(font3);
        horizontalLayout_4 = new QHBoxLayout(robot_log_receive_Box);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_11->setContentsMargins(5, 5, 5, 0);
        plainTextEdit_recv = new QPlainTextEdit(robot_log_receive_Box);
        plainTextEdit_recv->setObjectName(QString::fromUtf8("plainTextEdit_recv"));
        plainTextEdit_recv->setEnabled(true);
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(3);
        sizePolicy11.setHeightForWidth(plainTextEdit_recv->sizePolicy().hasHeightForWidth());
        plainTextEdit_recv->setSizePolicy(sizePolicy11);
        QFont font6;
        font6.setFamily(QString::fromUtf8("72"));
        font6.setPointSize(11);
        plainTextEdit_recv->setFont(font6);
        plainTextEdit_recv->setInputMethodHints(Qt::ImhNone);
        plainTextEdit_recv->setLineWidth(0);
        plainTextEdit_recv->setTabChangesFocus(true);
        plainTextEdit_recv->setReadOnly(false);
        plainTextEdit_recv->setTabStopWidth(80);

        verticalLayout_11->addWidget(plainTextEdit_recv);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2->setContentsMargins(9, 0, 9, 0);
        m_save_log_ptn = new QPushButton(robot_log_receive_Box);
        m_save_log_ptn->setObjectName(QString::fromUtf8("m_save_log_ptn"));
        sizePolicy.setHeightForWidth(m_save_log_ptn->sizePolicy().hasHeightForWidth());
        m_save_log_ptn->setSizePolicy(sizePolicy);
        m_save_log_ptn->setMinimumSize(QSize(0, 40));
        m_save_log_ptn->setFont(font1);

        horizontalLayout_2->addWidget(m_save_log_ptn);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(robot_log_receive_Box);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_11->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_11);


        v2_settings->addWidget(robot_log_receive_Box);


        horizontalLayout_3->addLayout(v2_settings);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\346\211\253\345\234\260\346\234\272\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        btn_clear_map->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\345\234\260\345\233\276", nullptr));
        btn_save_map->setText(QApplication::translate("Widget", "\344\277\235\345\255\230\345\234\260\345\233\276", nullptr));
        btn_test_add_map_points->setText(QApplication::translate("Widget", "\346\265\213\350\257\225\346\267\273\345\212\240\345\234\260\345\233\276\347\202\271", nullptr));
        m_label_coord->setText(QApplication::translate("Widget", "(x, y) : (0, 0)", nullptr));
        btn_focus_map->setText(QApplication::translate("Widget", "\345\233\236\345\210\260\345\216\237\347\202\271", nullptr));
        robot_log_receive_Box_2->setTitle(QApplication::translate("Widget", "\351\200\232\344\277\241\345\222\214\346\216\247\345\210\266", nullptr));
        label_9->setText(QApplication::translate("Widget", "\351\200\232\344\277\241\347\253\257\345\217\243", nullptr));
        comboBox->setItemText(0, QApplication::translate("Widget", "TCP/SOCKET", nullptr));
        comboBox->setItemText(1, QApplication::translate("Widget", "SERIAL\344\270\262\345\217\243", nullptr));

        groupbox_tcp_serverl_set->setTitle(QApplication::translate("Widget", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label_server_port->setText(QApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_server_ip->setText(QApplication::translate("Widget", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        lineEdit_server_port->setText(QApplication::translate("Widget", "8888", nullptr));
        lineEdit_server_ip->setText(QApplication::translate("Widget", "192.168.4.1", nullptr));
        btn_connect_tcp_server->setText(QApplication::translate("Widget", "\350\277\236\346\216\245\346\211\253\345\234\260\346\234\272", nullptr));
        btn_disconnect_tcp_server->setText(QApplication::translate("Widget", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        groupbox_serial_set->setTitle(QApplication::translate("Widget", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        btn_open_serial->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_4->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_5->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        label->setText(QApplication::translate("Widget", "\344\270\262  \345\217\243", nullptr));
        groupbox_tcp_serverl_set_2->setTitle(QApplication::translate("Widget", "\346\226\271\345\220\221\346\216\247\345\210\266", nullptr));
        pushButton_cmd_forward->setText(QApplication::translate("Widget", "Forward", nullptr));
        pushButton_cmd_backward->setText(QApplication::translate("Widget", "Backward", nullptr));
        pushButton_cmd_left_rotate->setText(QApplication::translate("Widget", "Left Rotate", nullptr));
        pushButton_cmd_right_rotate->setText(QApplication::translate("Widget", "Right Rotate", nullptr));
        label_10->setText(QApplication::translate("Widget", "\346\260\264\351\207\217", nullptr));
        label_11->setText(QApplication::translate("Widget", "\345\220\270\345\212\233", nullptr));
        groupbox_control_robot->setTitle(QApplication::translate("Widget", "\345\212\237\350\203\275\346\216\247\345\210\266", nullptr));
        pushButton_cmd_auto->setText(QApplication::translate("Widget", "Auto Mode", nullptr));
        pushButton_cmd_stop->setText(QApplication::translate("Widget", "STOP", nullptr));
        pushButton_cmd_home->setText(QApplication::translate("Widget", "Home", nullptr));
        pushButton_cmd_random->setText(QApplication::translate("Widget", "Random Mode", nullptr));
        pushButton_cmd_edge->setText(QApplication::translate("Widget", "Edge Mode", nullptr));
        pushButton_cmd_spiral->setText(QApplication::translate("Widget", "Spiral Mode", nullptr));
        pushButton_cmd_square_spiral->setText(QApplication::translate("Widget", "Square Spiral", nullptr));
        pushButton_cmd_ymove->setText(QApplication::translate("Widget", "Y-Move", nullptr));
        robot_log_receive_Box->setTitle(QApplication::translate("Widget", "\346\216\245\346\224\266\345\214\272", nullptr));
        m_save_log_ptn->setText(QApplication::translate("Widget", "\344\277\235\345\255\230\346\227\245\345\277\227", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
