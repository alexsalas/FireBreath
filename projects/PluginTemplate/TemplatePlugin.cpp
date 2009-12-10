/**********************************************************\ 
Original Author: Richard Bateman and Georg Fritzsche 

Created:    December 3, 2009
License:    Dual license model; choose one of two:
            Eclipse Public License - Version 1.0
            http://www.eclipse.org/legal/epl-v10.html
            - or -
            GNU Lesser General Public License, version 2.1
            http://www.gnu.org/licenses/lgpl-2.1.html

Copyright 2009 PacketPass Inc, Georg Fritzsche,
               Firebreath development team
\**********************************************************/

#include "NpapiTypes.h"
#include "atlbase.h"
#include "MathAPI.h"

#include "TemplatePlugin.h"

void TemplatePlugin::StaticInitialize()
{
    // Place one-time initialization stuff here; note that there isn't an absolute guarantee that
    // this will only execute once per process, just a guarantee that it won't execute again until
    // after StaticDeinitialize is called
}

void TemplatePlugin::StaticDeinitialize()
{
    // Place one-time deinitialization stuff here
}


TemplatePlugin::TemplatePlugin()
{
}

TemplatePlugin::~TemplatePlugin()
{
}

FB::JSAPI* TemplatePlugin::createJSAPI()
{
    // m_host is the BrowserHostWrapper
    return new MathAPI(m_host);
}

bool TemplatePlugin::onMouseDown(FB::MouseDownEvent *evt)
{
    //printf("Mouse down at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}

bool TemplatePlugin::onMouseUp(FB::MouseUpEvent *evt)
{
    //printf("Mouse up at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}

bool TemplatePlugin::onMouseMove(FB::MouseMoveEvent *evt)
{
    //printf("Mouse move at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}