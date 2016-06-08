#include "senoide.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <cmath>
#include <QMouseEvent>
#include <QDebug>

Senoide::Senoide(QWidget *parent) : QWidget(parent)
{
  startTimer(20); // executa o timer a cada 20 ms
  setMouseTracking(true);
}

void Senoide::setValues(QVector<int> _values)
{
    values = _values;
    repaint();
}

void Senoide::paintEvent(QPaintEvent *e){
  if(values.length() == 0)
      return;

  QPainter painter(this);
  QBrush brush;
  QPen pen;

  painter.setRenderHint(QPainter::Antialiasing);

  pen.setColor(QColor(255,0,0));
  painter.setPen(pen);

  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);
  painter.setBrush(brush);

  painter.drawRect(0,0,width()-1, height()-1);

  pen.setColor(QColor(0,0,255));

  pen.setWidth(3);
  painter.setPen(pen);

  int step = this->size().width() / (values.length() - 1);
  int scale = getMaxValue() > this->size().height() ? getMaxValue() / this->size().height() : 1;
  int lastX = 0, lastY = this->size().height()- values.at(0)/scale;

  for(int i = 1; i < values.length(); i++){
    painter.drawLine(lastX, lastY, lastX + step, this->size().height() - values.at(i)/scale);
    lastX += step;
    lastY = this->size().height() - values.at(i)/scale;
  }
}

int Senoide::getMaxValue()
{
    int max = values.at(0);
    for(int i = 0; i < values.length(); i++){
        if(values.at(i) > max)
            max = values.at(i);
    }
    return  max;
}
