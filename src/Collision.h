#ifndef COLLISION_H
#define COLLISION_H
//クラスの前方宣言
//関数にポインタだけの場合は、とりあえずこのようなクラスがありますよ！
//、という説明を書いておく。
//※ただし、クラスを実体化させるならそのクラスのヘッダファイルをインクルードしなければならない
//あくまでも、ポインタを使った関数のときのみ使える。
class Bar;
class Box;
class Ball;

class Collision {


public:
  static bool ball_bar_col(Bar* bar, Ball* ball);
  static bool ball_box_col(Box* box, Ball* ball);


};

#endif
