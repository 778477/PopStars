//
//  StarSprite.cpp
//  PopStars
//
//  Created by 郭妙友 on 16/1/5.
//
//

#include "StarSprite.hpp"
using namespace cocos2d;


//Sprite* StarSprite::create(){
//    auto star = new(std::nothrow) StarSprite();
//    
//    if(star && star->init()){
//        star->autorelease();
//    }
//    else{
//        star = NULL;
//        delete star;
//    }
//    
//    return star;
//}
//
//
//bool StarSprite::init(){
//    if(!Sprite::init()) return false;
//    this->setColor(Color3B::RED);
//    this->setContentSize(Size(20,20));
//    return true;
//}