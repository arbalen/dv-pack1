modded class WeaponFSM
{
	private static const int MAX_SYNCHRONIZE_ATTEMPTS = 6;
	private static const int MIN_SYNCHRONIZE_INTERVAL = 6000; // ms
	private static const int RESET_SYNCHRONIZE_THRESHOLD = 3600000; // ms
override bool SaveCurrentFSMState(ParamsWriteContext ctx)
	{
		    if (!ctx)
		    {
		        Print("[wpnfsm] SaveCurrentFSMState - ctx is NULL");
		        return false;
		    }
		WeaponStateBase state = GetCurrentState();
		if (!state) //NULL check
		{
			Print("[wpnfsm] SaveCurrentFSMState - GetCurrentState() returned NULL");
			return false;
		}
		int curr_state_id = state.GetInternalStateID();

		if (curr_state_id <= 0) // Assuming negative values are invalid
		    {
		        //Error("[wpnfsm] SaveCurrentFSMState - Invalid curr_state_id= from state"); 
			//dev - curr_state_id spamming logs
			//Seems to occur more on rapid fire weapons
		        return false;
		    }


		if (!ctx.Write(curr_state_id))
		{
			Print("[wpnfsm] SaveCurrentFSMState - cannot save curr_state_id=");
			return false;
		}

		// write only current state
		if (!state.SaveCurrentFSMState(ctx))
		{
			Print("[wpnfsm] SaveCurrentFSMState - cannot save currrent state=");
			return false;
		}
		return true;
	}
};

