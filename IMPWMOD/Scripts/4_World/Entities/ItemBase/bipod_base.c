class Bipod_Base extends ItemBase
{
	protected ref OpenableBehaviour m_Openable;

	void Bipod_Base()
	{
		m_Openable = new OpenableBehaviour(false);
		
		RegisterNetSyncVariableBool("m_Openable.m_IsOpened");

		UpdateVisualState();
	}

	override void Open()
	{
		m_Openable.Open();
		SetSynchDirty();

		UpdateVisualState();
	}

	override void Close()
	{
		m_Openable.Close();
		SetSynchDirty();

		UpdateVisualState();
	}
	
	override bool IsOpen()
	{
		return m_Openable.IsOpened();
	}

	protected void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Bipod", 1.0);
		}
		else
		{
			SetAnimationPhase("Bipod", 0.0);
		}
	}

	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && IsOpen())
		{
			return false;
		}
		return true;
	}

	override void OnVariablesSynchronized()
    {
        super.OnVariablesSynchronized();

        UpdateVisualState();
    }
};
class Atlas_Bipod extends Bipod_Base {};