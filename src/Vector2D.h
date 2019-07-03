#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D {
public:
	Vector2D();//コンストラクタ
	Vector2D(double _x, double _y);//引数付きコンストラクタ

	Vector2D& operator = (const Vector2D& v);//代入演算子の定義
  Vector2D& operator += (const Vector2D& v);//+=を使えるようにする
  Vector2D& operator -= (const Vector2D& v);//-=を使えるようにする
  Vector2D& operator *= (double k);//定数倍をかける
  Vector2D& operator /= (double k);//定数倍を割る
  Vector2D operator +();
  Vector2D operator-();

	double x;
	double y;

};
#endif


//
// #ifndef VECTOR2D_H
// #define VECTOR2D_H
//
// template <typename TYPE>
// class Vector2D {
// public:
// 	Vector2D();//コンストラクタ
// 	Vector2D(TYPE _x, TYPE _y);//引数付きコンストラクタ
//
// 	Vector2D& operator = (const Vector2D& v);//代入演算子の定義
//   Vector2D& operator += (const Vector2D& v);//+=を使えるようにする
//   Vector2D& operator -= (const Vector2D& v);//-=を使えるようにする
//   Vector2D& operator *= (TYPE k);//定数倍をかける
//   Vector2D& operator /= (TYPE k);//定数倍を割る
//   Vector2D operator +();
//   Vector2D operator-();
//
// 	TYPE x;
// 	TYPE y;
//
// };
//
// Vector2D::Vector2D():x(0),y(0)
// {
//   //引数なしコンストラクタの場合はそれぞれの変数に0を代入
// }
//
// template <typename TYPE>
// Vector2D::Vector2D(TYPE _x, TYPE _y):x(_x),y(_y)
// {
//   //引数ありコンストラクタ
// }
//
// Vector2D& Vector2D::operator=(const Vector2D &v){//代入演算子を亭午
//   this->x = v.x;
//   this->y = v.y;
//
//   return *this;
// }
//
// Vector2D& Vector2D::operator+=(const Vector2D &v){
//   this->x = x + v.x;
//   this->y = y + v.y;
//
//   return *this;
// }
//
// Vector2D& Vector2D::operator-=(const Vector2D &v){
//   this->x = x - v.x;
//   this->y = y - v.y;
//
//   return *this;
// }
//
// template <typename TYPE>
// Vector2D& Vector2D::operator*=(TYPE k){
//   this->x *= k;
//   this->y *= k;
//
//   return *this;
// }
//
// template <typename TYPE>
// Vector2D& Vector2D::operator/=(TYPE k){
//   this->x /= k;
//   this->y /= k;
//
//   return *this;
// }
//
// Vector2D Vector2D::operator+(){
//   return *this;
// }
// Vector2D Vector2D::operator-(){
//   return Vector2D(-x,-y);
// }
//
// #endif
