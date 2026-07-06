modded class PluginRecipesManagerBase extends PluginBase
{
	void RegisterRecipies()
	{
		super.RegisterRecipies();
		// Vanilla Ammo
		RegisterRecipe(new Pack9mm);
		RegisterRecipe(new Pack9x39);
		RegisterRecipe(new Pack9x39AP);
		RegisterRecipe(new Pack357);
		RegisterRecipe(new Pack12ga);
		RegisterRecipe(new Pack12gaslug);
		RegisterRecipe(new Pack12garubberslug);
		RegisterRecipe(new Pack12gabeanbag);
		RegisterRecipe(new Pack22);
		RegisterRecipe(new Pack308win);
		RegisterRecipe(new Pack308wintracer);
		RegisterRecipe(new Pack380acp);
		RegisterRecipe(new Pack45acp);
		RegisterRecipe(new Pack545x39);
		RegisterRecipe(new Pack545x39Tracer);
		RegisterRecipe(new Pack556x45);
		RegisterRecipe(new Pack556x45Tracer);
		RegisterRecipe(new Pack762x39);
		RegisterRecipe(new Pack762x39Tracer);
		RegisterRecipe(new Pack762x54);
		RegisterRecipe(new Pack762x54Tracer);
		// My Ammo
		RegisterRecipe(new Pack127x42);
		RegisterRecipe(new Pack127x55);
		RegisterRecipe(new Pack127x99);
		RegisterRecipe(new Pack300AAC);
		RegisterRecipe(new Pack338LM);
		RegisterRecipe(new Pack408);
		RegisterRecipe(new Pack792x57);
	}
};