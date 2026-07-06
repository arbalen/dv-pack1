modded class Weapon_Base extends Weapon
{
	protected bool m_BipodDeployed;
	protected bool m_Prone;

	bool IsBipodDeployed()
	{
		return m_BipodDeployed;
	}

	void BipodDeployed()
	{
//		Print ("Bipod is deployed = true");
		m_BipodDeployed = true;
		GetPropertyModifierObject().UpdateModifiers();
	}

	void BipodFolded()
	{
//		Print ("Bipod is deployed = false");
		m_BipodDeployed = false;
		GetPropertyModifierObject().UpdateModifiers();
	}

	void SetBipodDeployed ( bool bipod_deployed )
	{
		m_BipodDeployed = bipod_deployed;
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (Bipod_Base.Cast(item))
		{		
			if (IsOpen())
			{	
				m_BipodDeployed = true;
			}
			if (!IsOpen())
			{	
				m_BipodDeployed = false;
			}
		}
	};

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (Bipod_Base.Cast(item))
		{ 
			m_BipodDeployed = false;
		};
	};

	void DeployBipod()
	{
		EntityAI ParentItem = this;
		DeployIntegratedBipod(ParentItem);
	}

	void FoldBipod()
	{
		EntityAI ParentItem = this;		
		FoldIntegratedBipod(ParentItem);
	}
	
	void ding()
	{
	}
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttachedOpticFlipDown);
		AddAction(ActionAttachedOpticFlipUp);
	};
};

