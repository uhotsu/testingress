class item{
public:

private:
	char rarity;
	

};

class resonator{
public:
	resonator(); //obtained a resonator
	deploy(char portal_id); //deploy a resonator to portal with portal_id
	recycle(int reso_id); //recycle the resonator with reso_id
	status(int reso_id); //check deployed or in beg
	energy(int reso_id); //check energy level of resonator
	~resonator();

private:
	int reso_id;
	int reso_lv; //resonator level, L1~L8
	char reso_status; //deployed or in beg
	double energy_level; //energy level of resonator

};

class power_cube{
public:
	power_cube();
	use(int pc_id);
	recycle(int pc_id);
	drop(int pc_id);
	~power_cube();

private:
	int pc_id;
	int pc_lv;
	bool in_bag;
	

};

class xmp{
public:
	xmp(); //obtained an xmp
	fire(int xmp_id);
	recycle(int xmp_id);
	status(int xmp_id);
	~xmp();

private:
	int xmp_id;
	int reso_lv;
	double xmp_level;

};

class field{
public:
	field(double x_size, double y_size);
	area(int field_id); //calculate the area of impact zone
	~field();

private:
	int field_id;
	double x_size;
	double y_size;
};

class impact_zone{
public:
	impact_zone(double x_size, double y_size);
	area(int iz_id) //calculate the area of the impact zone
	~impact_zone();

private:
	int iz_id;
	double x_size;
	double y_size;
};

class portal{
public:
	portal(arguments);
	~portal();

	/* data */
};



void main_simulation(){
	//a single function for the one measurment, from the appears of the cluster portals to the start of mesaurment window
	//start the simulation
	field(x_size, y_size); //input the size of the field/map
	impact_zone(x_size, y_size); //create the impact zone, input size of it. If the impact zone is larger than the field, return error
	//start a timer here for time taking. 
	agent(location); //create an agent at location, can be random
	//calculate scores of all portals in impact zone. distance between agent and portals should be included
	//agents start moving. calculate which direction to go. TODO: speed of agent. 
	//case1: agent moved for a distance r and no portal in range
		//decide keep on moving or not. if keep on, direction of the movement
	//case2: agent moved for a distance r and one portal in range
		//check the status of the portal, calculate the score for decision and action. decide keep on moving or not. if keep on, direction of the movement. if not, action or not. if action, what action should be done.
	//case3: agent moved for a distance r and n portals in range
		//check the status of all portals, calculate the scores for decision and actions, then rank them according to score. decide move or not, if keep on, direction of move. if not, action or not, if action, what action should be done
	//it is supposed that in the same measurment, all actions should be going from attacking to defending, then to linking and fielding, which should be determined by the scores of portals, items own by agent and the strength of attack from the opposite side.
	//loop over, until the time is out
	//TODO: calculate and update the statues and scores of each portals, resolators, agents after every action is done.
	//may need n vectors of random numbers for determinating movement/actions. numbers can generated with weightings, which is depended on how importance each action is in the agents' mind.




	return;
}