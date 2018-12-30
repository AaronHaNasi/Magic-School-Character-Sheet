#include <string> 
#include <vector>
using namespace std;

class character {
	//general character information
	private string name; 
	private int year; 
	private string organization; 
	private string campaign; 
	// moving stats
	private int harmThreshold;
	private int currentHarm;
	private int heat;
	private int willpower;
	private int favor;
	private int cores;
	private int stressThreshold;
	private int currentStress;
	private int mentalHarmThreshold;
	private int spiritualHarmThreshold;
	private int currentMentalHarm;
	private int currentSpiritualHarm;
	// bonuses
	private int combatBonus;
	private int learningBonus;
	// character stats
	private int stre;
	private int perc;
	private int endu;
	private int chari;
	private int inte;
	private int agil;
	private int luck; 
	// vectors to hold skills depending on their level
	//private vector<string> beyondPerfectSkills;
	//private vector<string> perfectSkills;
	//private vector<string> masterSkills;
	//private vector<string> excellentSkills;
	//private vector<string> greatSkills;
	//private vector<string> goodSkills;
	//private vector<string> okSkills; 
	// stats to hold armor 
	private int epicArmor;
	private int divineArmor;
	private int magicArmor; 
	private int reinforcedArmor;
	private int mundaneArmor; 
	//constructors
	character();
	character(string, int, string, int, int, int, int, int, int, int, int, 
			int, int);
	character(string, int, string, string, int, int, int, int, int, int,
		       	int, int, int);	
	// setter functions
	
	public void setName(string);
	public void setYear(int);
	public void setOrganization(string);
	public void setCampaign(string);
	public void setHarmThreshold(int);
	public void setCurrentHarm(int)p;
	public void setCombatBonus(int);
	public void setLearningBonus(int);
	public void setStrength(int);
	public void setPerception(int);
	public void setEndurance(int);
	public void setCharisma(int);
	public void setIntelligence(int);
	public void setAgility(int);
	public void setLuck(int);
	public void setEpicArmor(int);
	public void setDivineArmor(int);
	public void setMagicArmor(int);
	public void setReinforcedArmor(int);
	public void setMundaneArmor(int);
	
	//getter functions
	public string getName() const;
	public int getYear() const; 
	public string getOrganization() const; 
	public string getCampaign() const;
	public unsigned int getHarm() const; 
	public int getCombatBonus() const; 
	public int getLearningBonus() const; 
	public int getStrength() const; 
	public int getPerception() const; 
	public int getEndurance() const;
	public int getCharisma() const;
	public int getIntelligence const;
	public int getAgility const; 
	public int getLuck const;
	public unsigned int getEpicArmor() const;
	public unsigned int getDivineArmor() const; 
	public unsigned int getMagicArmor() const;
	public unsigned int getReinforcedArmor() const;
	public unsigned int getMundaneArmor() const; 

	// class to add skills to vectors
	//public void addSkill
		
}


