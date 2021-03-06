/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Wall.cpp
 * Author: pceccon
 * 
 * Created on October 15, 2015, 12:26 PM
 */

#include "Wall.h"

Wall::Wall() 
{
    _startPointIdx = 0;
    _endPointIdx = 0;
    
    _specularity = 0.0;
}


Wall::Wall(const int sI, const int eI, const float s)
{
    _startPointIdx = sI;
    _endPointIdx = eI;
    _specularity = s;
}


Wall::Wall(const Wall& w) 
{
    _startPointIdx = w.getStartPoingID();
    _endPointIdx = w.getEndPointID();
    _specularity = w.getSpecularValue();
}


Wall::~Wall() 
{
}


const int Wall::getStartPoingID() const
{
    return _startPointIdx;
}


const int Wall::getEndPointID() const
{
    return _endPointIdx;
}


const float Wall::getSpecularValue() const
{
    return _specularity;
}

