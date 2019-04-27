#include "Vector2D.h"

Vector2D::Vector2D():x(0),y(0)
{
  //引数なしコンストラクタの場合はそれぞれの変数に0を代入
}

Vector2D::Vector2D(double _x, double _y):x(_x),y(_y)
{
  //引数ありコンストラクタ
}

Vector2D& Vector2D::operator=(const Vector2D &v){//代入演算子を亭午
  this->x = v.x;
  this->y = v.y;

  return *this;
}
Vector2D& Vector2D::operator+=(const Vector2D &v){
  this->x = x + v.x;
  this->y = y + v.y;

  return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D &v){
  this->x = x - v.x;
  this->y = y - v.y;

  return *this;
}

Vector2D& Vector2D::operator*=(double k){
  this->x *= k;
  this->y *= k;

  return *this;
}

Vector2D& Vector2D::operator/=(double k){
  this->x /= k;
  this->y /= k;

  return *this;
}
Vector2D Vector2D::operator+(){
  return *this;
}
Vector2D Vector2D::operator-(){
  return Vector2D(-x,-y);
}
