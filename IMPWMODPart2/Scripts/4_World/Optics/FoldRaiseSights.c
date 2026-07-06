void FoldIronSightsBlackout (EntityAI ParentItem)
{
	protected int foldingOpticRaisedId = -1;
	protected int foldingOpticLoweredId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	foldingOpticRaisedId = selectionNames.Find("fold_raised");
	foldingOpticLoweredId = selectionNames.Find("fold_lowered");  
			
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,false);
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,true);
};

void UnfoldIronSightsBlackout (EntityAI ParentItem)
{
	protected int foldingOpticRaisedId = -1;
	protected int foldingOpticLoweredId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	foldingOpticRaisedId = selectionNames.Find("fold_raised");
	foldingOpticLoweredId = selectionNames.Find("fold_lowered");  

	ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,true);
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,false);
};
void HideIronSightsBlackout (EntityAI ParentItem)
{
	protected int hideIronsightsId = -1;
	TStringArray selectionNames = new TStringArray;
		
	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);
		
	hideIronsightsId = selectionNames.Find("hide_ironsights");
			
	ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,false);
};

void ShowIronSightsBlackout (EntityAI ParentItem)
{
	protected int hideIronsightsId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	hideIronsightsId = selectionNames.Find("hide_ironsights");

	ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,true);

};
void HideScopeMountBlackout (EntityAI ParentItem)
{
	protected int hideIronsightsId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	hideIronsightsId = selectionNames.Find("hide_rail");
			
	ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,false);
};

void ShowScopeMountBlackout (EntityAI ParentItem)
{
	protected int hideIronsightsId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	hideIronsightsId = selectionNames.Find("hide_rail");

	ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,true);
};