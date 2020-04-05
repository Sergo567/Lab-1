#pragma once
#include "circle_list.h"

class polinomm {
private:
	int cnt;
	int max_step;
	circle_list CL;
	std::string* processing_string(std::string s, int &k);
	void get_words_diff_razdel(std::string st, std::string zn, std::string *w, int &k);
public:
	polinomm(std::string _s = "", int _cnt = 3, int _max_step = 10);
	polinomm(const polinomm & tmp);
	~polinomm() {};
	polinomm &operator=(const polinomm & tmp);
	void add(const monom & tmp);
	void erase(const monom & tmp);
	polinomm operator+(const polinomm & tmp);
	polinomm operator-(const polinomm & tmp);
	polinomm operator*(double kk);
	polinomm operator*(const polinomm & tmp);
	int get_cnt() const {
		return cnt;
	}
	int get_max_step() const {
		return max_step;
	}
	void set_cnt(int _cnt) {
		cnt = _cnt;
	}
	void set_max_step(int _max_step) {
		max_step = _max_step;
	}
	std::string to_string();
};
