
class sensor {
	public:
		bool checkSensor();
};

class doorSensor : public sensor {
	public:
		int close;
		int error;
};

class detergentSensor : public sensor {
	public:
		int emptyDetergent;
		int lowDetergent;
		int fullDetergent;
};

