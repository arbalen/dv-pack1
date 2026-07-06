void FoldIronsIMP (EntityAI ParentItem)
{
	protected int foldingOpticRaisedId = -1;
	protected int foldingOpticLoweredId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	foldingOpticRaisedId = selectionNames.Find("irons_up");
	foldingOpticLoweredId = selectionNames.Find("irons_down");  
		
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,false);
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,true);
};

void UnFoldIronsIMP(EntityAI ParentItem)
{
	protected int foldingOpticRaisedId = -1;
	protected int foldingOpticLoweredId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	foldingOpticRaisedId = selectionNames.Find("irons_up");
	foldingOpticLoweredId = selectionNames.Find("irons_down");  

	ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,true);
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,false);
};