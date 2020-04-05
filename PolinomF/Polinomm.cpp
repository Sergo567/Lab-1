#include "Polinomm.h"
#include"Monom.h"

std::string * polinomm::processing_string(std::string s, int & k) {
	std::string zn = "+-";
	k = 0;
	std::string * w = new std::string[(s.size() + 1) / 2];
	get_words_diff_razdel(s, zn, w, k);
	for (int i = 0; i < k; i++) {
		while (1) {
			int pos = (int)w[i].find(" ");
			if (pos == -1) break;
			w[i].erase(pos, 1);
		}
	}
	return w;
}
void polinomm::get_words_diff_razdel(std::string st, std::string zn, std::string * w, int & k) {
	for (int i = 0; i < (int)st.size(); i++) {
		if (zn.find(st[i]) == -1) {
			w[k].push_back(st[i]);
		}
		else {
			if (w[k].size() > 0) {
				k++;
			}
			w[k] += st[i];
		}
	}
	if (w[k].size()) k++;
}

polinomm::polinomm(std::string _s, int _cnt, int _max_step) {
	cnt = _cnt;
	max_step = _max_step;
	int sz_w = 0;
	if (_s.size() == 0) return;
	std::string * w = processing_string(_s, sz_w);
	for (int i = 0; i < sz_w; i++) {
		monom tmp(w[i], max_step, cnt);
		CL.plus(tmp);
	}
}

polinomm::polinomm(const polinomm & tmp) {
	cnt = tmp.cnt;
	max_step = tmp.max_step;
	CL = tmp.CL;
}

polinomm & polinomm::operator=(const polinomm & tmp) {
	if (this == &tmp) return *this;
	cnt = tmp.cnt;
	CL = tmp.CL;
	max_step = tmp.max_step;
	return *this;
}

void polinomm::add(const monom & tmp) {
	CL.plus(tmp);
}

void polinomm::erase(const monom & tmp) {
	CL.minus(tmp);
}

polinomm polinomm::operator+(const polinomm & tmp) {
	polinomm res(*this);
	res.CL = res.CL + tmp.CL;
	return res;
}

polinomm polinomm::operator-(const polinomm & tmp) {
	polinomm res(*this);
	res.CL = res.CL - tmp.CL;
	return res;
}

polinomm polinomm::operator*(double kk) {
	polinomm res(*this);
	res.CL = res.CL * kk;
	return res;
}

polinomm polinomm::operator*(const polinomm & tmp) {
	polinomm res(*this);
	res.CL = res.CL.mult(tmp.CL, max_step, cnt);
	return res;
}

std::string polinomm::to_string() {
	std::string ans = CL.to_string(max_step, cnt);
	return ans;
}