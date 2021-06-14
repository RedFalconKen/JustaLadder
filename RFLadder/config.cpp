class CfgPatches
{
	class smpl_structures_ladders
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class rfladder_tall: HouseNoDestruct
	{
		scope = 1;
		model = "\RFLadder\laddertall.p3d";
	};
};