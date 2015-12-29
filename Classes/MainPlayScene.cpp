//
//  MainPlayScene.cpp
//  PopStars
//
//  Created by 郭妙友 on 15/12/29.
//
//

#include "MainPlayScene.hpp"
using namespace cocos2d;
using namespace std;

Scene* MainPlayScene::createScene(){
    
    Scene *mainScene = Scene::create();
    MainPlayScene* layer = new(nothrow) MainPlayScene();
    if(layer && layer->init()){
        layer->autorelease();
        mainScene->addChild(layer);
    }
    else{
        delete layer;
        layer = NULL;
    }
    
    return mainScene;
}

bool MainPlayScene::init(){
    if(!LayerColor::initWithColor(Color4B::WHITE)){
        return false;
    }
    return true;
}