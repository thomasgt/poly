#include "Point.h"

namespace poly {
namespace core {

Point::Point(float x, float y, QObject *parent)
  : QObject(parent)
  , m_x(x)
  , m_y(y) {}

float Point::x() const {
  return m_x;
}

float Point::y() const {
  return m_y;
}

void Point::setX(float val) {
  m_x = val;
  emit modified();
}

void Point::setY(float val) {
  m_y = val;
  emit modified();
}

}  // namespace core
}  // namespace poly