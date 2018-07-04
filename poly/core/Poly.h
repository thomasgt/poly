//
// Created by thomas on 04/07/18.
//

#ifndef POLY_CORE_POLY_H
#define POLY_CORE_POLY_H

#include <QList>
#include <QObject>

#include "Point.h"

namespace poly {
namespace core {

class Poly : public QObject {
Q_OBJECT

public:
  Poly(QObject* parent = nullptr);
  void addPoint(Point p);
  const QList<Point> points() const;

private:
  QList<Point> m_points;
};

}  // namespace core
}  // namespace poly

#endif //POLY_CORE_POLY_H
