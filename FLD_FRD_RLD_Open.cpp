// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Start FLD_FRD_RLD_Open
// On start handler "FLD_FRD_RLD_Open"
void on_start_FLD_FRD_RLD_Open(void) { try { // on start event
s32 FLD;
s32 FRD;
s32 RLD;
s32 interior;
app.set_system_var_int32("Frontleft_Door_Status",1);
app.set_system_var_int32("Rearleft_Door_Status",1);
app.set_system_var_int32("Frontright_Door_Status",1);
app.get_system_var_int32("Frontleft_Door_Status",&FLD);
app.get_system_var_int32("Rearleft_Door_Status",&RLD);
app.get_system_var_int32("Frontright_Door_Status",&FRD);
app.get_system_var_int32("InteriorLight_Status",&interior);
if(FLD==1 && RLD==1 && FRD==1 && interior==1){
app.wait(1000,"");
test.set_verdict_ok("Test Pass");
}else{
app.wait(1000,"");
test.set_verdict_ok("Test Failed");
}
app.wait(2000,"");
app.set_system_var_int32("Rearleft_Door_Status",0);
app.set_system_var_int32("Frontright_Door_Status",0);
app.set_system_var_int32("Frontleft_Door_Status",0);
app.wait(1000,"");
app.terminate_application();
app.wait(1000,"");

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Start FLD_FRD_RLD_Open

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

// CODE BLOCK BEGIN Configuration
/* 
[UI]
UICommon=0,-1,0,-1,QyBDb2RlIEVkaXRvciBbRkxEX0ZSRF9STERfT3Blbl0_,100,-1,7079381315571881945,0
IsExternal=1
ScriptName=FLD_FRD_RLD_Open
DisplayName=FLD_FRD_RLD_Open
LastBuildTime=2026-03-29 16:18:07
*/
// CODE BLOCK END Configuration

