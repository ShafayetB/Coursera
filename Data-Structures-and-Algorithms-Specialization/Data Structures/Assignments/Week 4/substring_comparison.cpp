  
//Substring Equality
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solver {

public:
	Solver( string s)  : text( s ), textSize( s.size() ) {
    initPower( power1, prime1, mult1 );
    initPower( power2, prime2, mult2 );

    initHash( computedHash1, power1, prime1 );
    initHash( computedHash2, power2, prime2 );
	}

	bool ask(int a, int b, int l) {
    if ( a == b ) {
      return true;
    }

    long long diff1a = getDiff( computedHash1, power1, prime1, a, l );
    long long diff1b = getDiff( computedHash1, power1, prime1, b, l );

    if ( diff1a != diff1b ) {
      return false;
    }

    long long diff2a = getDiff( computedHash2, power2, prime2, a, l );
    long long diff2b = getDiff( computedHash2, power2, prime2, b, l );

    if ( diff2a != diff2b ) {
      return false;
    }

    // return s.substr(a, l) == s.substr(b, l);
    return true;
	}

private:
  string text;
  unsigned int textSize;
  const long long prime1 = 1000000007;
  const long long prime2 = 1000000009;
  const long long mult1 = 15; // The mult should be selected randomly but I don't think it matters here
  const long long mult2 = 31; // The mult should be selected randomly but I don't think it matters here

  vector< long long > power1;
  vector< long long > power2;

  vector< long long > computedHash1;
  vector< long long > computedHash2;

  void initPower( vector< long long >& power, long long prime, long long mult ) {
    power.resize( textSize );
    power[ 0 ] = 1;
    for ( int i = 1; i < textSize; ++i ) {
      power[ i ] = ( power[ i - 1 ] * mult ) % prime;
    }
  }

  void initHash( vector< long long >& computedHash, vector< long long >& power, const long long prime ) {
    computedHash.resize( textSize + 1 );
    computedHash[ 0 ] = 0;
    for ( unsigned int i = 0; i < textSize; ++i ) {
      computedHash[ i + 1 ] = ( computedHash[ i ] + text[ i ] * power[ i ] ) % prime;
    }
  }

  long long getDiff( const vector< long long >& computedHash, vector< long long >& power, const long long prime, const int start, const int length ) {
    long long diff1a = ( computedHash[ start + length ] + prime - computedHash[ start ] ) % prime;
    return ( diff1a * power[ textSize - start - 1 ] ) % prime;
  }
};

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);

	string s;
	int q;
	cin >> s >> q;
	Solver solver( s );
	for (int i = 0; i < q; i++) {
		int a, b, l;
		cin >> a >> b >> l;
		cout << ( solver.ask(a, b, l) ? "Yes\n" : "No\n" );}
return 0;
	}