/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
IKI_DLLESPEC extern void execute_13(char*, char *);
IKI_DLLESPEC extern void execute_3135(char*, char *);
IKI_DLLESPEC extern void execute_3157(char*, char *);
IKI_DLLESPEC extern void execute_3158(char*, char *);
IKI_DLLESPEC extern void execute_3159(char*, char *);
IKI_DLLESPEC extern void execute_3160(char*, char *);
IKI_DLLESPEC extern void execute_3161(char*, char *);
IKI_DLLESPEC extern void execute_3162(char*, char *);
IKI_DLLESPEC extern void execute_3163(char*, char *);
IKI_DLLESPEC extern void execute_3164(char*, char *);
IKI_DLLESPEC extern void execute_3165(char*, char *);
IKI_DLLESPEC extern void execute_3166(char*, char *);
IKI_DLLESPEC extern void execute_3167(char*, char *);
IKI_DLLESPEC extern void execute_3168(char*, char *);
IKI_DLLESPEC extern void execute_3169(char*, char *);
IKI_DLLESPEC extern void execute_3170(char*, char *);
IKI_DLLESPEC extern void execute_3171(char*, char *);
IKI_DLLESPEC extern void execute_3172(char*, char *);
IKI_DLLESPEC extern void execute_3173(char*, char *);
IKI_DLLESPEC extern void execute_3174(char*, char *);
IKI_DLLESPEC extern void execute_3175(char*, char *);
IKI_DLLESPEC extern void execute_3176(char*, char *);
IKI_DLLESPEC extern void execute_3177(char*, char *);
IKI_DLLESPEC extern void execute_3178(char*, char *);
IKI_DLLESPEC extern void execute_3179(char*, char *);
IKI_DLLESPEC extern void execute_3180(char*, char *);
IKI_DLLESPEC extern void execute_3181(char*, char *);
IKI_DLLESPEC extern void execute_3182(char*, char *);
IKI_DLLESPEC extern void execute_3183(char*, char *);
IKI_DLLESPEC extern void execute_3184(char*, char *);
IKI_DLLESPEC extern void execute_4(char*, char *);
IKI_DLLESPEC extern void execute_3141(char*, char *);
IKI_DLLESPEC extern void execute_3142(char*, char *);
IKI_DLLESPEC extern void execute_3151(char*, char *);
IKI_DLLESPEC extern void execute_3152(char*, char *);
IKI_DLLESPEC extern void execute_3153(char*, char *);
IKI_DLLESPEC extern void execute_3154(char*, char *);
IKI_DLLESPEC extern void execute_3155(char*, char *);
IKI_DLLESPEC extern void execute_3156(char*, char *);
IKI_DLLESPEC extern void execute_7(char*, char *);
IKI_DLLESPEC extern void execute_3143(char*, char *);
IKI_DLLESPEC extern void execute_3144(char*, char *);
IKI_DLLESPEC extern void execute_3145(char*, char *);
IKI_DLLESPEC extern void execute_3146(char*, char *);
IKI_DLLESPEC extern void execute_3147(char*, char *);
IKI_DLLESPEC extern void execute_3148(char*, char *);
IKI_DLLESPEC extern void execute_3149(char*, char *);
IKI_DLLESPEC extern void execute_9(char*, char *);
IKI_DLLESPEC extern void execute_10(char*, char *);
IKI_DLLESPEC extern void execute_12(char*, char *);
IKI_DLLESPEC extern void execute_3150(char*, char *);
IKI_DLLESPEC extern void execute_15(char*, char *);
IKI_DLLESPEC extern void execute_3137(char*, char *);
IKI_DLLESPEC extern void execute_3138(char*, char *);
IKI_DLLESPEC extern void execute_3139(char*, char *);
IKI_DLLESPEC extern void execute_3140(char*, char *);
IKI_DLLESPEC extern void execute_3185(char*, char *);
IKI_DLLESPEC extern void execute_3186(char*, char *);
IKI_DLLESPEC extern void execute_3187(char*, char *);
IKI_DLLESPEC extern void execute_3188(char*, char *);
IKI_DLLESPEC extern void execute_3189(char*, char *);
IKI_DLLESPEC extern void execute_3190(char*, char *);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[63] = {(funcp)execute_13, (funcp)execute_3135, (funcp)execute_3157, (funcp)execute_3158, (funcp)execute_3159, (funcp)execute_3160, (funcp)execute_3161, (funcp)execute_3162, (funcp)execute_3163, (funcp)execute_3164, (funcp)execute_3165, (funcp)execute_3166, (funcp)execute_3167, (funcp)execute_3168, (funcp)execute_3169, (funcp)execute_3170, (funcp)execute_3171, (funcp)execute_3172, (funcp)execute_3173, (funcp)execute_3174, (funcp)execute_3175, (funcp)execute_3176, (funcp)execute_3177, (funcp)execute_3178, (funcp)execute_3179, (funcp)execute_3180, (funcp)execute_3181, (funcp)execute_3182, (funcp)execute_3183, (funcp)execute_3184, (funcp)execute_4, (funcp)execute_3141, (funcp)execute_3142, (funcp)execute_3151, (funcp)execute_3152, (funcp)execute_3153, (funcp)execute_3154, (funcp)execute_3155, (funcp)execute_3156, (funcp)execute_7, (funcp)execute_3143, (funcp)execute_3144, (funcp)execute_3145, (funcp)execute_3146, (funcp)execute_3147, (funcp)execute_3148, (funcp)execute_3149, (funcp)execute_9, (funcp)execute_10, (funcp)execute_12, (funcp)execute_3150, (funcp)execute_15, (funcp)execute_3137, (funcp)execute_3138, (funcp)execute_3139, (funcp)execute_3140, (funcp)execute_3185, (funcp)execute_3186, (funcp)execute_3187, (funcp)execute_3188, (funcp)execute_3189, (funcp)execute_3190, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 63;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/tester_sprites_display_behav/xsim.reloc",  (void **)funcTab, 63);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/tester_sprites_display_behav/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/tester_sprites_display_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/tester_sprites_display_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/tester_sprites_display_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/tester_sprites_display_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, (void*)0, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
