#include <string> 
#include <vector>
#ifndef CHARACTER_h
#define CHARACTER_H
using namespace std;

class character {
private:
    //general character information
    string name; 
    int year; 
	string organization; 
	string campaign; 
	// moving stats
	int harmThreshold;
	int currentHarm;
	int heat;
	int willpower;
	int favor;
	int cores;
	int stressThreshold;
	int currentStress;
	int mentalHarmThreshold;
	int spiritualHarmThreshold;
	int currentMentalHarm;
	int currentSpiritualHarm;
	// bonuses
	int combatBonus;
	int learningBonus;
	// character stats
	int stre;
	int perc;
	int endu;
	int chari;
	int inte;
	int agil;
	int luck; 
	// vectors to hold skills depending on their level
	// vector<string> beyondPerfectSkills;
	// vector<string> perfectSkills;
	// vector<string> masterSkills;
	// vector<string> excellentSkills;
	// vector<string> greatSkills;
	// vector<string> goodSkills;
	// vector<string> okSkills; 
	// stats to hold armor 
	int epicArmor;
	int divineArmor;
	int magicArmor; 
	int reinforcedArmor;
	int mundaneArmor; 
	bool isAlive; // Refers to whether the character is currently playable. Character can be undead but still be playable,
	                // but can be insane and unplayable
	//constructors
public:	
    character();
	character(string, int, string, int, int, int, int, int, int, int, int, 
			int, int);
	character(string, int, string, string, int, int, int, int, int, int,
		       	int, int, int);	
	// setter functions
	
	void setName(string);
	void setYear(int);
	void setOrganization(string);
	void setCampaign(string);
	void setHarmThreshold(int);
	void setCurrentHarm(int);
	void setHeat(int);
	void setWillpower(int);
	void setFavor(int);
	void setCores(int); 
	void setStressThreshold(int);
	void setCurrentStress(int);
	void setMentalHarmThreshold(int);
	void setSpiritualHarmThreshold(int);
	void setCurrentMentalHarm(int);
	void setCurrentSpiritualHarm(int);
	void setCombatBonus(int);
	void setLearningBonus(int);
	void setStrength(int);
	void setPerception(int);
	void setEndurance(int);
	void setCharisma(int);
	void setIntelligence(int);
	void setAgility(int);
	void setLuck(int);
	void setEpicArmor(int);
	void setDivineArmor(int);
	void setMagicArmor(int);
	void setReinforcedArmor(int);
	void setMundaneArmor(int);
	void setStatus(bool); // sets whether character is 'alive'
	
	//getter functions
	string getName() { return name; }
	int getYear() { return year; }
	string getOrganization() { return organization; }
	string getCampaign() { return campaign; }
	unsigned int getHarmThreshold() { return harmThreshold; }
	unsigned int getCurrentHarm() { return currentHarm; }
	unsigned int getHeat() { return heat; }
	int getWillpower() { return willpower; }
	int getFavor() { return favor; }
	unsigned int getCores() { return cores; }
	int getStressThreshold() { return stressThreshold; }
	int getCurrentStress() { return currentStress; }
	int getMentalHarmThreshold() { return mentalHarmThreshold; }
	int getSpiritualHarmThreshold() { return spiritualHarmThreshold; }
	unsigned int getCurrentMentalHarm() { return currentMentalHarm; }
	unsigned int getCurrentSpiritualHarm() { return currentSpiritualHarm; }
	// TODO find out if you can have negative favor, and what happens when you do
	int getCombatBonus() { return combatBonus; }
	int getLearningBonus() { return learningBonus; }
	int getStrength() { return stre; }
	int getPerception() { return perc; }
	int getEndurance() { return endu; }
	int getCharisma() { return chari; }
	int getIntelligence { return inte;}
	int getAgility { return agil;}
	int getLuck { return luck; }
	unsigned int getEpicArmor() { return epicArmor; }
	unsigned int getDivineArmor() { return divineArmor; }
	unsigned int getMagicArmor() { return magicArmor; }
	unsigned int getReinforcedArmor() { return reinforcedArmor; }
	unsigned int getMundaneArmor() { return mundaneArmor; }
    bool getStatus() { return isAlive; }
	// class to add skills to vectors
	// void addSkill
		
}


