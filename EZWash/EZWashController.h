

class EZWashController {
	public:
		int washTime;
		int rinseTime;
		int heatTime;
		void buttonMatrixController();
		void wash(int soilLevel);
		void rinse();
		void standardWash();
		void highTemperatureWash(int soilLevel);
		void detergentSaverWash();
};


