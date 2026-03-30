// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Start FRD_Open
// On start handler "FRD_Open"
void on_start_FRD_Open(void) { try { // on start event
s32 FRD = 0;
s32 interior = 0;
app.set_system_var_int32("Frontright_Door_Status",1);//door open
app.get_system_var_int32("Frontright_Door_Status",&FRD);
app.get_system_var_int32("InteriorLight_Status",&interior);
if(FRD==1&&interior==1){
app.wait(1000,"");
test.set_verdict_ok("Test Pass");
}else{
app.wait(1000,"");
test.set_verdict_ok("Test Failed");
}
app.wait(2000,"");
app.set_system_var_int32("Frontright_Door_Status",0);
app.wait(1000,"");
app.terminate_application();
app.wait(1000,"");

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Start FRD_Open

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

// CODE BLOCK BEGIN Configuration
/* 
[UI]
UICommon=0,-1,0,-1,QyBDb2RlIEVkaXRvciBbRlJEX09wZW5d,100,-1,5739279789487104188,0
IsExternal=1
ScriptName=FRD_Open
DisplayName=FRD_Open
LastBuildTime=2026-03-29 16:17:06
*/
// CODE BLOCK END Configuration

