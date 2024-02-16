#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <utility>
#include <tuple>

using namespace std;

#define MAXN 100

int parent[MAXN], _rank[MAXN];

int find(int a) {
  if (a == parent[a]) return a;
  return parent[a] = find(parent[a]);
}

bool join(int a, int b) {
  a = find(a), b = find(b);
  if (a == b) return false;
  if (_rank[a] > _rank[b]) swap(a, b);
  parent[a] = b;
  if (_rank[a] == _rank[b]) _rank[b]++;
  return true;
}

int main() {
  int n, nf, nr;
  cin >> n >> nf >> nr;

  vector < tuple<int,int,int> > roads;

  for (int f = 0; f < nf + nr; f++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    roads.push_back(make_tuple(c,a,b));
  }

  sort(roads.begin(), roads.begin() + nf);// Ordena as estradas pelo custo
  sort(roads.begin() + nf, roads.end());// Ordena as ferrovias pelo custo

  for (int i = 0; i < n; i++) {
    parent[i] = i;
    _rank[i] = 0;
  }

  pair <int, int> res(0, 0);

  for (int j = 0; j < (int)roads.size(); j++) {
    auto [c, a, b] = roads[j];
    if (join(a, b)) {
      res.first++;
      res.second += c;
    }
  }

  cout << res.second << endl;

  return 0;
}