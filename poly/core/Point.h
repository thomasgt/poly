//
// Created by thomas on 04/07/18.
//

#ifndef POLY_CORE_POINT_H
#define POLY_CORE_POINT_H

#include <QObject>

namespace poly {
namespace core {

class Point : public QObject {
Q_OBJECT
public:
  Point(float x, float y, QObject* parent = nullptr);
  float x() const;
  float y() const;

public slots:
  void setX(float val);
  void setY(float val);

signals:
  void modified();

private:
  float m_x;
  float m_y;
};

}  // namespace core
}  // namespace poly

#endif //POLY_CORE_POINT_H
