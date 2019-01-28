#include "ro_hp_calculator_main.h"
#include "GUI/ro_hp_calculator_main_frame.h"


IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    rco::RoHpCalculatorMainFrame* main_frame = new rco::RoHpCalculatorMainFrame(NULL);
    main_frame->Show();
    return true;
}
