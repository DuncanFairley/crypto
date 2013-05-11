Crypto - README
http://byond.com/developer/Murrawhip/Crypto
----------------------------------------------------------------------
Crypto for BYOND is a wrapper library for parts of the Crypto++
library(http://cryptopp.com). Its intent is to bring some additional
hashing functions to BYOND when MD5 isn't adequate.


Instructions
----------------------------------------------------------------------
1. Include the Crypto library in your BYOND project.

2. Your project directory must include byondcrypto.dll (if windows) or
byondcrypto.so (if linux).

3. View the proc reference inside Crypto.dm.


Compile DLL/SO
----------------------------------------------------------------------
If you wish to compile the library yourself in order to take advantage
of whichever optimization flags, the source code is available at
https://github.com/DuncanFairley/crypto
The crypto++ library from http://cryptopp.com is required.


Copyright
----------------------------------------------------------------------
Crypto for BYOND is Copyright © 2013 Duncan Fairley, and distributed
under the LGPL - for the full text see LICENSE.txt.