#pragma once
#include <Novice.h>
#include "Vector2.h"

class Player{
public:

	Player();
	~Player();

	/// <summary>
	/// 初期化
	/// </summary>
	void Init();

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

	/// <summary>
	/// キーごとのコマンド
	/// </summary>
	void MoveRight();
	void MoveLeft();

private:

	Vector2 pos_;
	float speed_;
	float radius_;
};

