void HideMuzzleIMP (EntityAI ParentItem)
{
	protected int hideMuzzleBreakId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	hideMuzzleBreakId = selectionNames.Find("hide_muzzlebreak");
			
	ParentItem.SetSimpleHiddenSelectionState(hideMuzzleBreakId,false);
	};

void ShowMuzzleIMP (EntityAI ParentItem)
{
	protected int hideMuzzleBreakId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	hideMuzzleBreakId = selectionNames.Find("hide_muzzlebreak");

	ParentItem.SetSimpleHiddenSelectionState(hideMuzzleBreakId,true);
};