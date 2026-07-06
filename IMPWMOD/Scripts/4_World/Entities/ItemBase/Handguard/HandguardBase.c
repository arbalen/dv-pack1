modded class AK_RailHndgrd
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponFlashlight"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
}
modded class M4_RISHndgrd
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponFlashlight"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
}
modded class MP5_RailHndgrd
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponFlashlight"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
}
class IMP_Hndgrd_AK_Big extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_Small extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_M4_Rail extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_Polymer_Black extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_Polymer_Tan extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_Romanian : Inventory_Base {};
class IMP_Hndgrd_AK_Zenit extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_VLTOR_Base : Inventory_Base {};
class IMP_Hndgrd_AK_VLTOR_Black extends IMP_Hndgrd_AK_VLTOR_Base {};
class IMP_Hndgrd_AK_VLTOR_Green extends IMP_Hndgrd_AK_VLTOR_Base {};
class IMP_Hndgrd_AK_VLTOR_Tan extends IMP_Hndgrd_AK_VLTOR_Base {};
class IMP_Hndgrd_AK_AKArmsFactoryWar : Inventory_Base {};
class IMP_Hndgrd_AK_AKHexagon_black : Inventory_Base {};
class IMP_Hndgrd_AK_AKHexagon_red extends IMP_Hndgrd_AK_AKHexagon_black {};
class IMP_Hndgrd_AK_AKKrebs : Inventory_Base {};
class IMP_Hndgrd_AK_AKMagpulMOE_black : Inventory_Base {};
class IMP_Hndgrd_AK_AKMagpulMOE_fde extends IMP_Hndgrd_AK_AKMagpulMOE_black {};
class IMP_Hndgrd_AK_AKMagpulMOE_od extends IMP_Hndgrd_AK_AKMagpulMOE_black {};
class IMP_Hndgrd_AK_AKMagpulMOE_plm extends IMP_Hndgrd_AK_AKMagpulMOE_black {};
class IMP_Hndgrd_AK_AKMagpulMOE_sg extends IMP_Hndgrd_AK_AKMagpulMOE_black {};
class IMP_Hndgrd_AK_AKMagpulZhukov_black : Inventory_Base {};
class IMP_Hndgrd_AK_AKMagpulZhukov_fde extends IMP_Hndgrd_AK_AKMagpulZhukov_black {};
class IMP_Hndgrd_AK_AKMagpulZhukov_plm extends IMP_Hndgrd_AK_AKMagpulZhukov_black {};
class IMP_Hndgrd_AK_AKVltor : IMP_Hndgrd_AK_AKMagpulZhukov_black {};
class IMP_Hndgrd_AK_AKWood : IMP_Hndgrd_AK_AKMagpulZhukov_black {};
class IMP_Hndgrd_AK_AKRailPolymer extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_AKRedHeadAgressor extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_AKTdix47_black extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_AKTdix47_inox extends IMP_Hndgrd_AK_AKTdix47_black {};
class IMP_Hndgrd_AK_AKZenitB10m extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_AK_AKZenitB30 extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_FnFal_AimSportKeyModHndgrd : Inventory_Base {};
class IMP_Hndgrd_FnFal_AimSportMlokHndgrd : Inventory_Base {};
class IMP_Hndgrd_FnFal_BelgianStyleHndgrd : Inventory_Base {};
class IMP_Hndgrd_FnFal_DsArmsFullHndgrd extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}
class IMP_Hndgrd_FnFal_OriginalStampedHndgrd : Inventory_Base {};
class IMP_Hndgrd_FnFal_VltorCasvHndgrd : Inventory_Base {};
class IMP_Hndgrd_STM9_Hndgrd extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("grip1") || parent.FindAttachmentBySlotName("weaponBipod"))
		{
			return false;
		}
		return true;
	}
}