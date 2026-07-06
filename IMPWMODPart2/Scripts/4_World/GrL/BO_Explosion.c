class IMP_40mm_HE_Explosion: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void IMP_40mm_HE_Explosion()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "IMP_40mm_HE_Ammo");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.EXPLOSION_LANDMINE, this.GetPosition());
	}
}
class IMP_XBOW_Explosion: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void IMP_XBOW_Explosion()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false);
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "IMP_XBOW_Ammo");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M84, this.GetPosition());
	}
}
