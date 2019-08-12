#include<iostream>
using namespace std;

class song {
protected:
	string name;
	int dur;
public:
	song(string name, int dur) {
		this->name = name;
		this->dur = dur;
	}

	virtual void play() {
		cout << "Playing...." << endl;
	}

	virtual int get_duration() {
		return 0;
	}
};

class pop : public song {
public:
	pop(string name, int dur) : song(name, dur) {
		cout << "Pop Song selected" << endl;
	}
	void play() {
		cout << this->name;
		song::play();
		cout << endl;
	}

	int get_duration() {
		return this->dur;
	}
};

class jazz :public song {
public:
	jazz(string name, int dur) : song(name, dur) {
		cout << "Jazz Song selected" << endl;
	}
	void play() {
		cout << this->name;
		song::play();
		cout << endl;
	}

	int get_duration() {
		return this->dur;
	}
};

class devotional :public song {
public:
	devotional(string name, int dur) : song(name, dur) {
		cout << "Devotional Song selected" << endl;
	}
	void play() {
		cout << this->name;
		song::play();
		cout << endl;
	}

	int get_duration() {
		return this->dur;
	}
};

class rock :public song {
public:
	rock(string name, int dur) : song(name, dur) {
		cout << "Rock Song selected" << endl;
	}
	void play() {
		cout << this->name;
		song::play();
		cout << endl;
	}

	int get_duration() {
		return this->dur;
	}
};

int main() {
	song* ptr[4];
	int total = 0;
	ptr[0] = new pop("Havana", 5);
	ptr[1] = new jazz("Take Five", 4);
	ptr[2] = new devotional("Hanuman Chalisa", 15);
	ptr[3] = new rock("Animal", 3);
	
	for (int i = 0;i < 4;i++) {
		ptr[i]->play();
		total += ptr[i]->get_duration();
	}

	cout << total;
}
