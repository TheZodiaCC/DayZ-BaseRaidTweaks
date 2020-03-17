modded class WoodAxe
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDestroyPart);
	}
}

modded class Hatchet
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDestroyPart);
		AddAction(ActionDismantlePart);
	}
}

modded class FirefighterAxe
{
	override void SetActions()
	{
		super.SetActions();
	}
}

//modded class Hacksaw
//{
//	override void SetActions()
//	{
//		super.SetActions();
//		RemoveAction(ActionDestroyCombinationLock);
//		RemoveAction(ActionDestroyPart);
//	}
//}

modded class Pickaxe
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDestroyPart);
	}
}

//modded class SledgeHammer
//{
//	override void SetActions()
//	{
//		super.SetActions();
//		RemoveAction(ActionDestroyPart);
//	}
//}
modded class Chainsaw
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDestroyPart);
	}
}

modded class HandSaw
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionDestroyPart);
	}
};