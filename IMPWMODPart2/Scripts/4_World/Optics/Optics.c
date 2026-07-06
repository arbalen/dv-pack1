class IMP_FedorovOptics extends ItemOptics {};
class IMP_GrozaOptic : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}