class ToggleBipodActionInputIMP : DefaultActionInput
{
	void ToggleBipodActionInputIMP(PlayerBase player)
	{
		SetInput("UAToggleBipod");
		m_InputType = ActionInputType.AIT_SINGLE;	
	}
	
	override void OnActionStart()
	{
		super.OnActionStart();
		m_Active = false;
	}
	
	override bool WasEnded()
	{
		return false;
	}
};