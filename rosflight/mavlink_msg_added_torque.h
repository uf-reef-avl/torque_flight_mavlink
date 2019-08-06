// MESSAGE ADDED_TORQUE PACKING

#define MAVLINK_MSG_ID_ADDED_TORQUE 200

typedef struct __mavlink_added_torque_t
{
 float x; /*< Torque (nm) */
 float y; /*< Torque (nm) */
 float z; /*< Torque (nm) */
} mavlink_added_torque_t;

#define MAVLINK_MSG_ID_ADDED_TORQUE_LEN 12
#define MAVLINK_MSG_ID_200_LEN 12

#define MAVLINK_MSG_ID_ADDED_TORQUE_CRC 20
#define MAVLINK_MSG_ID_200_CRC 20



#define MAVLINK_MESSAGE_INFO_ADDED_TORQUE { \
	"ADDED_TORQUE", \
	3, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_added_torque_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_added_torque_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_added_torque_t, z) }, \
         } \
}


/**
 * @brief Pack a added_torque message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x X Torque to apply (nm)
 * @param y Y Torque to apply (nm)
 * @param z Z Torque to apply (nm)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_added_torque_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ADDED_TORQUE_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#else
	mavlink_added_torque_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ADDED_TORQUE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ADDED_TORQUE_LEN, MAVLINK_MSG_ID_ADDED_TORQUE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif
}

/**
 * @brief Pack a added_torque message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x X Torque to apply (nm)
 * @param y Y Torque to apply (nm)
 * @param z Z Torque to apply (nm)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_added_torque_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ADDED_TORQUE_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#else
	mavlink_added_torque_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ADDED_TORQUE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ADDED_TORQUE_LEN, MAVLINK_MSG_ID_ADDED_TORQUE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif
}

/**
 * @brief Encode a added_torque struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param added_torque C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_added_torque_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_added_torque_t* added_torque)
{
	return mavlink_msg_added_torque_pack(system_id, component_id, msg, added_torque->x, added_torque->y, added_torque->z);
}

/**
 * @brief Encode a added_torque struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param added_torque C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_added_torque_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_added_torque_t* added_torque)
{
	return mavlink_msg_added_torque_pack_chan(system_id, component_id, chan, msg, added_torque->x, added_torque->y, added_torque->z);
}

/**
 * @brief Send a added_torque message
 * @param chan MAVLink channel to send the message
 *
 * @param x X Torque (nm)
 * @param y Y Torque (nm)
 * @param z Z Torque (nm)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_added_torque_send(mavlink_channel_t chan, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ADDED_TORQUE_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADDED_TORQUE, buf, MAVLINK_MSG_ID_ADDED_TORQUE_LEN, MAVLINK_MSG_ID_ADDED_TORQUE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADDED_TORQUE, buf, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif
#else
	mavlink_added_torque_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADDED_TORQUE, (const char *)&packet, MAVLINK_MSG_ID_ADDED_TORQUE_LEN, MAVLINK_MSG_ID_ADDED_TORQUE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADDED_TORQUE, (const char *)&packet, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ADDED_TORQUE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_added_torque_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADDED_TORQUE, buf, MAVLINK_MSG_ID_ADDED_TORQUE_LEN, MAVLINK_MSG_ID_ADDED_TORQUE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADDED_TORQUE, buf, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif
#else
	mavlink_added_torque_t *packet = (mavlink_added_torque_t *)msgbuf;
	packet->x = x;
	packet->y = y;
	packet->z = z;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADDED_TORQUE, (const char *)packet, MAVLINK_MSG_ID_ADDED_TORQUE_LEN, MAVLINK_MSG_ID_ADDED_TORQUE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADDED_TORQUE, (const char *)packet, MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ADDED_TORQUE UNPACKING


/**
 * @brief Get field x from added_torque message
 *
 * @return X torque (nm)
 */
static inline float mavlink_msg_added_torque_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from added_torque message
 *
 * @return Y torque (nm)
 */
static inline float mavlink_msg_added_torque_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from added_torque message
 *
 * @return Z torque (nm)
 */
static inline float mavlink_msg_added_torque_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a added_torque message into a struct
 *
 * @param msg The message to decode
 * @param added_torque C-struct to decode the message contents into
 */
static inline void mavlink_msg_added_torque_decode(const mavlink_message_t* msg, mavlink_added_torque_t* added_torque)
{
#if MAVLINK_NEED_BYTE_SWAP
	added_torque->x = mavlink_msg_added_torque_get_x(msg);
	added_torque->y = mavlink_msg_added_torque_get_y(msg);
	added_torque->z = mavlink_msg_added_torque_get_z(msg);
#else
	memcpy(added_torque, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ADDED_TORQUE_LEN);
#endif
}
