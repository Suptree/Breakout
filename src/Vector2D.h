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
