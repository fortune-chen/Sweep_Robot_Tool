#ifndef MAP_H
#define MAP_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

namespace Ui {
class map;
}

class map : public QWidget
{
    Q_OBJECT

public:
    explicit map(QWidget *parent = nullptr);
    ~map();

protected:
    void paintEvent(QPaintEvent *event);

private:
    void DrawItems();

private:
    Ui::map *ui;


private:
    // QVector<QVector<Item*>> m_items;	//地图元素

    int map_Rows;                       //行数
    int map_Columes;                    //列数
    int m_nRows_dispaly;                //窗口可以显示的行数
    int m_nColumes_dispaly;             //窗口可以显示的列数
};

#endif // MAP_H
