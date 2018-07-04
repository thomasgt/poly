//
// Created by thomas on 04/07/18.
//

#include "Poly.h"

namespace poly {
namespace core {

Poly::Poly(QObject *parent)
    : QObject(parent), m_points() {}

void Poly::addPoint(Point p) {
  m_points.append(p);
}

const QList<Point> Poly::points() const {
  return m_points;
}

} // namespace core
} // namespace poly
