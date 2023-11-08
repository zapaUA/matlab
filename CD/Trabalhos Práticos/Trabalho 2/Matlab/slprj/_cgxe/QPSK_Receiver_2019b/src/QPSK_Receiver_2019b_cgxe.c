/* Include files */

#include "QPSK_Receiver_2019b_cgxe.h"
#include "m_XcrQgI9XIybRllmc64ibLB.h"
#include "m_EHc0CysqDrtqIH6UM7ThuF.h"
#include "m_J64VNGO9ebiKjY9vCcBSo.h"

unsigned int cgxe_QPSK_Receiver_2019b_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 1482611311 &&
      ssGetChecksum1(S) == 418583929 &&
      ssGetChecksum2(S) == 2737726162 &&
      ssGetChecksum3(S) == 1574677593) {
    method_dispatcher_XcrQgI9XIybRllmc64ibLB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2962478541 &&
      ssGetChecksum1(S) == 1981447503 &&
      ssGetChecksum2(S) == 4259598493 &&
      ssGetChecksum3(S) == 3557904587) {
    method_dispatcher_EHc0CysqDrtqIH6UM7ThuF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3507832840 &&
      ssGetChecksum1(S) == 3494289039 &&
      ssGetChecksum2(S) == 3468913647 &&
      ssGetChecksum3(S) == 3962792551) {
    method_dispatcher_J64VNGO9ebiKjY9vCcBSo(S, method, data);
    return 1;
  }

  return 0;
}
