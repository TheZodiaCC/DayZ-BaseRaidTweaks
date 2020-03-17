class CfgMods
{
	class DisableDestruction
	{
	    dir = "DisableDestruction";
	    picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
	    name = "DisableDestruction";
	    credits = "";
	    author = "";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

	    dependencies[] = {"World"};

	    class defs
	    {
	        class worldScriptModule
            {
                value = "";
                files[] = {"DisableDestruction/scripts/4_World"};
            };
        };
    };
};
class CfgPatches
{
	class DisableDestructionScipts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};