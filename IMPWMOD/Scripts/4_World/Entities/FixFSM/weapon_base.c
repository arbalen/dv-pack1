modded class Weapon_Base
{
	override void SaveCurrentFSMState(ParamsWriteContext ctx)
	{
		if (ctx == null)
		{
		    return;
		}

		if (!m_fsm)
		{
			Print("[wpnfsm] Weapon.SaveCurrentFSMState: m_fsm is NULL! Weapon=");
			return;
		}
		if (!m_fsm.IsRunning())
		{
			Print("[wpnfsm] Weapon.SaveCurrentFSMState: FSM is not running. Weapon=");
			return;
		}
		if (m_fsm)
		{
			if (m_fsm.IsRunning())
			{
				if (m_fsm.SaveCurrentFSMState(ctx))
				{
					
				}
				else
					//Error("[wpnfsm] Weapon= state NOT saved.");
			}
		}
		else
			Print("[wpnfsm] Weapon.SaveCurrentFSMState: trying to save weapon without FSM (or uninitialized weapon) this=");
	}
};

