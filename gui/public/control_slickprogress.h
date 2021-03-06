/*===========================================================================
     _____        _____        _____        _____
 ___|    _|__  __|_    |__  __|__   |__  __| __  |__  ______
|    \  /  | ||    \      ||     |     ||  |/ /     ||___   |
|     \/   | ||     \     ||     \     ||     \     ||___   |
|__/\__/|__|_||__|\__\  __||__|\__\  __||__|\__\  __||______|
    |_____|      |_____|      |_____|      |_____|

--[Mark3 Realtime Platform]--------------------------------------------------

Copyright (c) 2012 - 2018 m0slevin, all rights reserved.
See license.txt for more information
===========================================================================*/
/**
    @file control_slickprogress.h
    @brief GUI Progress Bar Control, with flare.

    A simple progress bar control using lines and rectangles to display
    the status of an operation from initialization to completion
*/
#pragma once

#include "gui.h"
#include "kerneltypes.h"
#include "draw.h"
#include "font.h"

namespace Mark3
{
class SlickProgressControl : public GuiControl
{
public:
    virtual void        Init();
    virtual void        Draw();
    virtual GuiReturn_t ProcessEvent(GuiEvent_t* pstEvent_);
    virtual void        Activate(bool bActivate_) {}
    void                SetProgress(uint8_t u8Progress_);

private:
    uint8_t m_u8Progress;
};
} // namespace Mark3
