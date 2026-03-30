// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Var_Change On_Frontleft_Door_Status RnJvbnRsZWZ0X0Rvb3JfU3RhdHVzLC0x
// On variable change handler "On_Frontleft_Door_Status" for variable "Frontleft_Door_Status" [On Written]
void on_var_change_On_Frontleft_Door_Status(void) { try { // variable = Frontleft_Door_Status
s32 fl,fr,rl,rr;
app.get_system_var_int32("Frontleft_Door_Status",&fl);
app.get_system_var_int32("Frontright_Door_Status",&fr);
app.get_system_var_int32("Rearleft_Door_Status",&rl);
app.get_system_var_int32("Rearright_Door_Status",&rr);

if((fl==1)||(fr==1)||(rr==1)||(rl==1)){
app.set_system_var_int32("InteriorLight_Status",1);
}else{
app.set_system_var_int32("InteriorLight_Status",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_Frontleft_Door_Status

// CODE BLOCK BEGIN On_Var_Change On_Frontright_Door_Status RnJvbnRyaWdodF9Eb29yX1N0YXR1cywtMQ__
// On variable change handler "On_Frontright_Door_Status" for variable "Frontright_Door_Status" [On Written]
void on_var_change_On_Frontright_Door_Status(void) { try { // variable = Frontright_Door_Status
s32 fl,fr,rl,rr;
app.get_system_var_int32("Frontleft_Door_Status",&fl);
app.get_system_var_int32("Frontright_Door_Status",&fr);
app.get_system_var_int32("Rearleft_Door_Status",&rl);
app.get_system_var_int32("Rearright_Door_Status",&rr);

if((fl==1)||(fr==1)||(rr==1)||(rl==1)){
app.set_system_var_int32("InteriorLight_Status",1);
}else{
app.set_system_var_int32("InteriorLight_Status",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_Frontright_Door_Status

// CODE BLOCK BEGIN On_Var_Change On_Rearleft_Door_Status UmVhcmxlZnRfRG9vcl9TdGF0dXMsLTE_
// On variable change handler "On_Rearleft_Door_Status" for variable "Rearleft_Door_Status" [On Written]
void on_var_change_On_Rearleft_Door_Status(void) { try { // variable = Rearleft_Door_Status
s32 fl,fr,rl,rr;
app.get_system_var_int32("Frontleft_Door_Status",&fl);
app.get_system_var_int32("Frontright_Door_Status",&fr);
app.get_system_var_int32("Rearleft_Door_Status",&rl);
app.get_system_var_int32("Rearright_Door_Status",&rr);

if((fl==1)||(fr==1)||(rr==1)||(rl==1)){
app.set_system_var_int32("InteriorLight_Status",1);
}else{
app.set_system_var_int32("InteriorLight_Status",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_Rearleft_Door_Status

// CODE BLOCK BEGIN On_Var_Change On_Rearright_Door_Status UmVhcnJpZ2h0X0Rvb3JfU3RhdHVzLC0x
// On variable change handler "On_Rearright_Door_Status" for variable "Rearright_Door_Status" [On Written]
void on_var_change_On_Rearright_Door_Status(void) { try { // variable = Rearright_Door_Status
s32 fl,fr,rl,rr;
app.get_system_var_int32("Frontleft_Door_Status",&fl);
app.get_system_var_int32("Frontright_Door_Status",&fr);
app.get_system_var_int32("Rearleft_Door_Status",&rl);
app.get_system_var_int32("Rearright_Door_Status",&rr);

if((fl==1)||(fr==1)||(rr==1)||(rl==1)){
app.set_system_var_int32("InteriorLight_Status",1);
}else{
app.set_system_var_int32("InteriorLight_Status",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_Rearright_Door_Status

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

// CODE BLOCK BEGIN Configuration
/* 
[UI]
UICommon=0,-1,-1,0,QyBDb2RlIEVkaXRvciBbQ0NvZGU1NDk0XQ__,100,1069,6218064238882181820,0
ScriptName=CCode5494
DisplayName=CCode5494
LastBuildTime=2026-03-29 15:02:21
*/
// CODE BLOCK END Configuration

