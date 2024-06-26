#include "Player.h"
#include <cassert>


void Player::Initialize(Model* model, uint32_t textureHandle, ViewProjection* viewProjection) {
	assert(model); 
	viewProjection_ = viewProjection;
	model_ = model;
	textureHandle_ = textureHandle;
	worldTransform_.Initialize();
}

void Player::Update() { 
	worldTransform_.TransferMatrix(); 
}

void Player::Draw() { 
	model_->Draw(worldTransform_, *viewProjection_, textureHandle_);
}


