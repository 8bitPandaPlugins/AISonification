/*
  ==============================================================================

    Fish.h
    Created: 17 May 2020 5:04:36pm
    Author:  jayb2

  ==============================================================================
*/

#pragma once
#include "Log.h"

class Fish : public Log {

    bool m_isActive = true;

public:

    Fish(int x, int y, int w, int h, Colour col);
    Fish(const Fish& other);
    ~Fish();
    void update()override;
};