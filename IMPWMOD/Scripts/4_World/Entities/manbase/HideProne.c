modded class PlayerBase extends ManBase
{
    override void HideClothing(ItemOptics optic, bool state)
	{
		super.HideClothing(optic, state);
		array<int> clothingArray = new array<int>;
		
		if (state && DayZPlayerCameraOptics.Cast(m_CurrentCamera))
		{
			if (GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT && IsPlayerInProne() && IsPlayerADS())
			{
				clothingArray.Insert(InventorySlots.BACK);
				clothingArray.Insert(InventorySlots.SHOULDER);
				clothingArray.Insert(InventorySlots.MELEE);
				clothingArray.Insert(InventorySlots.BODY);
				clothingArray.Insert(InventorySlots.VEST);
				clothingArray.Insert(InventorySlots.HIPS);
				if(optic.GetCurrentStepFOV() < GameConstants.DZPLAYER_CAMERA_FOV_IRONSIGHTS)
				{
					clothingArray.Insert(InventorySlots.BODY);
					clothingArray.Insert(InventorySlots.VEST);
					clothingArray.Insert(InventorySlots.HIPS);
				}
				SetInvisibleRecursive(true,this,clothingArray);
			}
		}
		else
		{
			if (GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT)
			{
				clothingArray = {InventorySlots.BACK,InventorySlots.BODY,InventorySlots.VEST,InventorySlots.SHOULDER,InventorySlots.MELEE};
				SetInvisibleRecursive(false,this,clothingArray);
			}
		}
	}
	
	bool IsPlayerInProne()
	{
		HumanMovementState state = new HumanMovementState();
		GetMovementState(state);
		return state.m_iStanceIdx == DayZPlayerConstants.STANCEIDX_PRONE;
	}
	
	bool IsPlayerADS()
	{
		return m_CameraIronsight || m_CameraOptics;
	}
}
