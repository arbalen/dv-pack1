modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
	        super.RegisterActions(actions);
            actions.Insert( ActionDeployBipodIMP );
            actions.Insert( ActionFoldBipodIMP );
			
            actions.Insert( ActionOpticFlipDown );
            actions.Insert( ActionOpticFlipUp );
			
            actions.Insert( ActionAttachedOpticFlipDown );
            actions.Insert( ActionAttachedOpticFlipUp );
			
			actions.Insert( ActionSwapOptic );
        }
};