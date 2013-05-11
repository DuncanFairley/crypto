/* Crypto
 *
 * Copyright © 2013 Duncan Fairley
 * Distributed under the GNU Lesser General Public License, version 3.
 * For the full license text, see LICENSE.txt.
 *
 * Version 1.0
 */

#include "cryptopp/sha.h"
#include "cryptopp/base64.h"
#include "cryptopp/hex.h"

static std::string output;

#ifdef WIN32
extern "C" __declspec(dllexport) const char * SHA256(int argc, char ** argv);
#else
extern "C" const char * SHA256(int argc, char ** argv);
#endif

const char * SHA256(int argc, char ** argv)
{
    CryptoPP::SHA256 hash;
    byte digest[ CryptoPP::SHA256::DIGESTSIZE ];
    hash.CalculateDigest( digest, (const byte *)argv[0], strlen(argv[0]) );

    CryptoPP::HexEncoder encoder;
    output.clear();
    encoder.Attach( new CryptoPP::StringSink( output ) );
    encoder.Put( digest, sizeof(digest) );
    encoder.MessageEnd();

    return (const char *)output.c_str();
}
