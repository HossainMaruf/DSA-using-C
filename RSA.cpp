#include<bits/stdc++.h>
using namespace std;

int bigmod(int a, int b, int M) {
	if(b == 0) return 1 % M;
	int x = bigmod(a,b/2,M);
	x = (x*x) % M;
	if(b%2 == 1) x = (x*a) % M;
	return x;
}

int main() {
  int p, q, d, e, m;
  cout << "Enter p and q (p!=q): ";
  cin >> p >> q;
  int n = p * q;
  int phi_n = (p-1) * (q-1);
  // 1 < e < phi_n
  for(int i=2; i<phi_n; i++) {
    if(__gcd(i, phi_n) == 1) {
      cout << i << " ";
    }
  }
  cout << "Select e: ";
  cin >> e;
  for(int i=2; i<phi_n; i++) {
    if((i*e) % phi_n == 1) {
      d = i; break;
    }
  }

  cout << "Public key: " << e << " " << n << endl;
  cout << "Private key: " << d << " " << n;

  cout << "Enter message m<n: ";
  cin >> m;
  int C = bigmod(m, e, n);
  cout << "Cipher: " << C << endl;
  m = bigmod(C, d, n);
  cout << "Message: " << m;


  return 0;
}