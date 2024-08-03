AshenWoods_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AshenWoods_OnResume
	.byte 0


AshenWoods_OnResume::
	setstepcallback STEP_CB_ASH
	return

