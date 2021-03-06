
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
    @file control_slickbutton.h
    @brief GUI Button Control, with a flare

    Basic pushbutton control with an up/down state, and Mark3 visual style
*/
#pragma once

#include "gui.h"
#include "kerneltypes.h"
#include "draw.h"
#include "font.h"

namespace Mark3
{
typedef void (*ButtonCallback)(void* pvData_);

class SlickButtonControl : public GuiControl
{
public:
    virtual void        Init();
    virtual void        Draw();
    virtual GuiReturn_t ProcessEvent(GuiEvent_t* pstEvent_);
    virtual void        Activate(bool bActivate_);

    void SetFont(Font_t* pstFont_) { m_pstFont = pstFont_; }
    void SetCaption(const char* szCaption_) { m_szCaption = szCaption_; }
    void SetCallback(ButtonCallback pfCallback_, void* pvData_)
    {
        m_pfCallback     = pfCallback_;
        m_pvCallbackData = pvData_;
    }

private:
    const char* m_szCaption;
    Font_t*     m_pstFont;
    bool        m_bState;
    uint8_t     m_u8Timeout;

    void*          m_pvCallbackData;
    ButtonCallback m_pfCallback;
};
} // namespace Mark3
