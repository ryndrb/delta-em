AshenWoods_MapScripts::
# 2 "data/maps/AshenWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AshenWoods_OnResume
	.byte 0


AshenWoods_OnResume::
# 6 "data/maps/AshenWoods/scripts.pory"
	setstepcallback STEP_CB_ASH
	return

