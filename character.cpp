# include "character.h"
// TODO find all stats that when <=0 and <0 result in character 'death'
character::character() {
}
character::character(string n, int y, string camp, int h, int cb, int lb,
	       	int s, int p, int e, int c, int i, int a, int l) {

}

character::character(string n, int y, string o, string camp, int h, int cb,
	       	int lb, int s, int p, int e, int c, int i, int a, int l) {

}
character::character(string n, int y, string camp, int h, int cb, int lb,
	       	int s, int p, int e, int c, int i, int a, int l) {
}
character::setName(string n) {
	name = n; 
}
character::setYear(int y) {
	year = y;
}
character::setOrganization(string o) {
	organization = o; 
}
character::setCampaign(string camp) {
	campaign = camp; 
}
character::setHarmThreshold(int h) {
	harmThreshold = h;
	if(harmThreshold <= 0) {
	    setStatus(false);
	}
}
character::setCurrentHarm(int h) {
	currentHarm = h;
}
character::setHeat(int ht) {
	heat = ht; 
}
character::setWillpower(int w) {
	willpower = w;
	if(willpower <= 0) {
	    setStatus(false);
	}
}
character::setFavor(int f) {
	favor = f;
}
character::setCores(int c) {
	cores = c;
}
character::setStressThreshold(int st){
	stressThreshold = st;
	if(stressThreshold <= 0) {
	    setStatus(false);
	}
}
character::setCurrentStress(int cs) {
	currentStress = cs;
}
character::setMentalHarmThreshold(int mht) {
	mentalHarmThreshold = mht;
}
character::setSpiritualHarmThreshold(int spht) {
	spiritualHarmThreshold = spht; 
}
character::setCurrentMentalHarm(int cmh) {
	currentMentalHarm = cmh;
}
character::setCurrentSpiritualHarm(int csh {
		currentSpiritualHarm = csh;		
}
character::setCombatBonus(int cb) {
	combatBonus = cb;
}
character::setLearningBonus(int lb) {
	learningBonus = lb;
}
character::setStrength(int s) {
	stre = s;
}
character::setPerception(int p) {
	perc = p; 
}
character::setEndurance(int e) {
	endu = e;
}
character::setCharisma(int c) {
	chari = c;
}
character::setIntelligence(int i) {
	inte = i;
}
character::setAgility(int a) {
	agil = a;
}
character::setLuck(int l) {
	luck = l;
}
character::setEpicArmor(int ea) {
	epicArmor = ea;
}
character::setDivineArmor(int da) {
	divineArmor = da;
}
character::setMagicArmor(int ma) {
	magicArmor = ma; 
}
character::setReinforcedArmor(int ra) {
	reinforcedArmor = ra;
}
character::setMundaneArmor(int mua) {
	mundaneArmor = mua;
}
character::setStatus(bool alive)
{
    isAlive = alive;
}


