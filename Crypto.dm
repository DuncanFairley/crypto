/* Crypto for BYOND
 *
 * Copyright © 2013 Duncan Fairley
 * Distributed under the GNU Lesser General Public License, version 3.
 * For the full license text, see LICENSE.txt.
 *
 * Version 1.0
 */

 /* Reference:
  * 	SHA256(hash as text)
  *			return length is 64.
  */

proc/__get_crypto_lib_name()
	return world.system_type == MS_WINDOWS ? "./byondcrypto.dll" : "./byondcrypto.so"
proc/SHA256(hash as text)
	return call(__get_crypto_lib_name(),"SHA256")(hash)