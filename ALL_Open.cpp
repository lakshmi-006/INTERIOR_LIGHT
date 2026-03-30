// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Start ALL_Open
// On start handler "ALL_Open"
void on_start_ALL_Open(void) { try { // on start event
s32 FLD = 0;
s32 FRD = 0;
s32 RRD = 0;
s32 RLD = 0;
s32 interior = 0;
app.set_system_var_int32("Frontleft_Door_Status",1);//door open
app.set_system_var_int32("Frontright_Door_Status",1);
app.set_system_var_int32("Rearleft_Door_Status",1);
app.set_system_var_int32("Rearright_Door_Status",1);
app.get_system_var_int32("Frontleft_Door_Status",&FLD);
app.get_system_var_int32("Frontright_Door_Status",&FRD);
app.get_system_var_int32("Rearleft_Door_Status",&RLD);
app.get_system_var_int32("Rearright_Door_Status",&RRD);
app.get_system_var_int32("InteriorLight_Status",&interior);
if(FLD==1 && FRD==1 && RRD==1 && RLD==1 && interior==1){
app.wait(1000,"");
test.set_verdict_ok("Test Pass");
}else{
app.wait(1000,"");
test.set_verdict_ok("Test Failed");
}
app.wait(2000,"");
app.set_system_var_int32("Frontleft_Door_Status",0);
app.set_system_var_int32("Frontright_Door_Status",0);
app.set_system_var_int32("Rearleft_Door_Status",0);
app.set_system_var_int32("Rearright_Door_Status",0);
app.wait(1000,"");
app.terminate_application();
app.wait(1000,"");

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Start ALL_Open

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

// CODE BLOCK BEGIN Configuration
/* 
[UI]
UICommon=0,-1,0,-1,QyBDb2RlIEVkaXRvciBbQUxMX09wZW5d,100,-1,8067359343310243434,0
IsExternal=1
ScriptName=ALL_Open
DisplayName=ALL_Open
LastBuildTime=2026-03-29 16:18:30
*/
// CODE BLOCK END Configuration

