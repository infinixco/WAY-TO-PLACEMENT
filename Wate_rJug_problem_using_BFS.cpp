#include <bits/stdc++.h>
#define pii pair<int, int>
#define mp make_pair
using namespace std;
void BFS(int a, int b, int target) {
	map<pii, int> m;
	bool isSolvable = false;
	vector<pii> path;
	queue<pii> q;    // queue to maintain states
	q.push({0, 0});  // Initialing with initial state
	while (!q.empty()) {
		pii u = q.front();  // current state
		q.pop();	    // pop off used state
		if (m[{u.first, u.second}] == 1) continue;
		if ((u.first > a || u.second > b || u.first < 0 ||
		     u.second < 0))
			continue;
		path.push_back({u.first, u.second});
		m[{u.first, u.second}] = 1;
		if (u.first == target || u.second == target) {
			isSolvable = true;
			if (u.first == target) {
				if (u.second != 0) path.push_back({u.first, 0});
			} else {
				if (u.first != 0) path.push_back({0, u.second});
			}
			int sz = path.size();
			for (int i = 0; i < sz; i++)
				cout << "(" << path[i].first << ", "
				     << path[i].second << ")\n";
			break;
		}
		q.push({u.first, b});   // fill Jug2
		q.push({a, u.second});  // fill Jug1
		for (int ap = 0; ap <= max(a, b); ap++) {
			int c = u.first + ap;
			int d = u.second - ap;
			if (c == a || (d == 0 && d >= 0)) q.push({c, d});
			c = u.first - ap;
			d = u.second + ap;
			if ((c == 0 && c >= 0) || d == b) q.push({c, d});
		}
		q.push({a, 0});  // Empty Jug2
		q.push({0, b});  // Empty Jug1
	}
	if (!isSolvable) cout << "No solution";
}
int main() {
	int Jug1 = 4, Jug2 = 3, target = 2;
	cout << "Path from initial state "
		"to solution state :\n";
	BFS(Jug1, Jug2, target);
	return 0;
}

