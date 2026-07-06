void DeployIntegratedBipod (EntityAI ParentItem)
{
    protected int bipodFoldedId = -1;
    protected int bipodDeployedId = -1;
    TStringArray selectionNames = new TStringArray;

    ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

    bipodFoldedId = selectionNames.Find("bipod_folded");
    bipodDeployedId = selectionNames.Find("bipod_deployed");  

    ParentItem.SetSimpleHiddenSelectionState(bipodFoldedId, false);
    ParentItem.SetSimpleHiddenSelectionState(bipodDeployedId, true);
}

void FoldIntegratedBipod(EntityAI ParentItem)
{  
	protected int bipodFoldedId = -1;
    protected int bipodDeployedId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	bipodFoldedId = selectionNames.Find("bipod_folded");
    bipodDeployedId = selectionNames.Find("bipod_deployed");  

	ParentItem.SetSimpleHiddenSelectionState(bipodFoldedId, true);
    ParentItem.SetSimpleHiddenSelectionState(bipodDeployedId, false);
}