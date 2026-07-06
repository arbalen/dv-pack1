class BC_AWP_Base : BoltActionRifle_ExternalMagazine_Base
{
    override RecoilBase SpawnRecoilObject()
    {
         return new CZ527Recoil(this);
    }
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOpticsHunting") )
		{
			if ( this.FindAttachmentBySlotName("weaponOptics") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOptics") )
		{
			if ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL )
			{
				return true;
			}
			return false;
		}
		return true;
	}
	override bool CanDisplayAttachmentSlot( int slot_id )
	{
		string slot_name= InventorySlots.GetSlotName(slot_id);
		if ( slot_name == "weaponOptics" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL );
		}
		if ( slot_name == "weaponOpticsHunting" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL );
		}
		return true;
	}	
};
class BC_AWP: BC_AWP_Base {};
class BC_AWP_Asiimov: BC_AWP_Base{};
class BC_AWP_Atheris: BC_AWP_Base{};
class BC_AWP_DragonLore: BC_AWP_Base{};
class BC_AWP_Gungnir: BC_AWP_Base{};
class BC_AWP_HyperBeast: BC_AWP_Base{};
class BC_AWP_Medusa: BC_AWP_Base{};
class BC_AWP_NeoNoir: BC_AWP_Base{};
class BC_AWP_OniTaiji: BC_AWP_Base{};
class BC_AWP_Redline: BC_AWP_Base{};
class BC_AWP_ThePrince: BC_AWP_Base{};
class BC_AWP_Anime: BC_AWP_Base{};
class BC_AWP_Apolo: BC_AWP_Base{};
class BC_AWP_BlueAngel: BC_AWP_Base{};
class BC_AWP_BlueWolf: BC_AWP_Base{};
class BC_AWP_Boom: BC_AWP_Base{};
class BC_AWP_BrotherHood: BC_AWP_Base{};
class BC_AWP_Camo: BC_AWP_Base{};
class BC_AWP_Carbon: BC_AWP_Base{};
class BC_AWP_CaseHardned: BC_AWP_Base{};
class BC_AWP_Cyrex: BC_AWP_Base{};
class BC_AWP_DarkSmoke: BC_AWP_Base{};
class BC_AWP_Dawning: BC_AWP_Base{};
class BC_AWP_DeadlyBird: BC_AWP_Base{};
class BC_AWP_DeadPool: BC_AWP_Base{};
class BC_AWP_EletricHive: BC_AWP_Base{};
class BC_AWP_EliteBuild: BC_AWP_Base{};
class BC_AWP_Fade: BC_AWP_Base{};
class BC_AWP_FeverDream: BC_AWP_Base{};
class BC_AWP_GoldenPhoenix: BC_AWP_Base{};
class BC_AWP_Graphite: BC_AWP_Base{};
class BC_AWP_HellGate: BC_AWP_Base{};
class BC_AWP_IceTitan: BC_AWP_Base{};
class BC_AWP_LightningStrike: BC_AWP_Base{};
class BC_AWP_Lilium: BC_AWP_Base{};
class BC_AWP_Phobos: BC_AWP_Base{};
class BC_AWP_RailGun: BC_AWP_Base{};
class BC_AWP_RoyalDice: BC_AWP_Base{};
class BC_AWP_SafariMesh: BC_AWP_Base{};
class BC_AWP_StarKeeper: BC_AWP_Base{};
class BC_AWP_Tactical: BC_AWP_Base{};
class BC_AWP_TertRoner: BC_AWP_Base{};
class BC_AWP_TokyoGhoul: BC_AWP_Base{};
class BC_AWP_UltraJade: BC_AWP_Base{};
class BC_AWP_Unicorn: BC_AWP_Base{};
class BC_AWP_Vertex: BC_AWP_Base{};
class BC_AWP_WormGod: BC_AWP_Base{};
class BC_AWP_Xray: BC_AWP_Base{};
