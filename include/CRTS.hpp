#ifndef _CRTS_HPP_
#define _CRTS_HPP_

#define CRTS_CR_NET_PACKET_LEN 256

enum crts_control_msg_type {
  CRTS_MSG_SCENARIO_PARAMETERS = 0,
  CRTS_MSG_MANUAL_START,
  CRTS_MSG_TERMINATE
};

#endif
