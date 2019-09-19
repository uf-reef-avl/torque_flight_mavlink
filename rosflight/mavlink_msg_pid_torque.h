// MESSAGE PID_TORQUE PACKING

#define MAVLINK_MSG_ID_PID_TORQUE 202

typedef struct __mavlink_pid_torque_t
{
 float x; /*< X Toruqe (nm)*/
 float y; /*< Y Torque (nm)*/
 float z; /*< Z Torque (nm)*/
} mavlink_pid_torque_t;

#define MAVLINK_MSG_ID_PID_TORQUE_LEN 12
#define MAVLINK_MSG_ID_202_LEN 12

#define MAVLINK_MSG_ID_PID_TORQUE_CRC 24
#define MAVLINK_MSG_ID_202_CRC 24



#define MAVLINK_MESSAGE_INFO_PID_TORQUE { \
	"PID_TORQUE", \
	3, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_pid_torque_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_pid_torque_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pid_torque_t, z) }, \
         } \
}


/**
 * @brief Pack a pid_torque message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x Torque after internal controller on x axis (nm)
 * @param y Torque after internal controller on y axis (nm)
 * @param z Torque after internal controller on z axis (nm)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pid_torque_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PID_TORQUE_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#else
	mavlink_pid_torque_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PID_TORQUE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PID_TORQUE_LEN, MAVLINK_MSG_ID_PID_TORQUE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif
}

/**
 * @brief Pack a pid_torque message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x Torque after internal controller on x axis (nm)
 * @param y Torque after internal controller on y axis (nm)
 * @param z Torque after internal controller on z axis (nm)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pid_torque_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						       float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PID_TORQUE_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#else
	mavlink_pid_torque_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PID_TORQUE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PID_TORQUE_LEN, MAVLINK_MSG_ID_PID_TORQUE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif
}

/**
 * @brief Encode a pid_torque struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pid_torque C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pid_torque_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pid_torque_t* pid_torque)
{
	return mavlink_msg_pid_torque_pack(system_id, component_id, msg, pid_torque->x, pid_torque->y, pid_torque->z);
}

/**
 * @brief Encode a pid_torque struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pid_torque C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pid_torque_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pid_torque_t* pid_torque)
{
	return mavlink_msg_pid_torque_pack_chan(system_id, component_id, chan, msg, pid_torque->x, pid_torque->y, pid_torque->z);
}

/**
 * @brief Send a pid_torque message
 * @param chan MAVLink channel to send the message
 *
 * @param x Torque after internal controller on x axis (nm)
 * @param y Torque after internal controller on y axis (nm)
 * @param z Torque after internal controller on z axis (nm)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pid_torque_send(mavlink_channel_t chan, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PID_TORQUE_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TORQUE, buf, MAVLINK_MSG_ID_PID_TORQUE_LEN, MAVLINK_MSG_ID_PID_TORQUE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TORQUE, buf, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif
#else
	mavlink_pid_torque_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TORQUE, (const char *)&packet, MAVLINK_MSG_ID_PID_TORQUE_LEN, MAVLINK_MSG_ID_PID_TORQUE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TORQUE, (const char *)&packet, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PID_TORQUE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pid_torque_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TORQUE, buf, MAVLINK_MSG_ID_PID_TORQUE_LEN, MAVLINK_MSG_ID_PID_TORQUE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TORQUE, buf, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif
#else
	mavlink_pid_torque_t *packet = (mavlink_pid_torque_t *)msgbuf;
	packet->x = x;
	packet->y = y;
	packet->z = z;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TORQUE, (const char *)packet, MAVLINK_MSG_ID_PID_TORQUE_LEN, MAVLINK_MSG_ID_PID_TORQUE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TORQUE, (const char *)packet, MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PID_TORQUE UNPACKING


/**
 * @brief Get field x from pid_torque message
 *
 * @return Torque on x axis (nm)
 */
static inline float mavlink_msg_pid_torque_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from pid_torque message
 *
 * @return Torque on y axis (nm)
 */
static inline float mavlink_msg_pid_torque_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from pid_torque message
 *
 * @return Torque on z axis (nm)
 */
static inline float mavlink_msg_pid_torque_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a pid_torque message into a struct
 *
 * @param msg The message to decode
 * @param pid_torque C-struct to decode the message contents into
 */
static inline void mavlink_msg_pid_torque_decode(const mavlink_message_t* msg, mavlink_pid_torque_t* pid_torque)
{
#if MAVLINK_NEED_BYTE_SWAP
	pid_torque->x = mavlink_msg_pid_torque_get_x(msg);
	pid_torque->y = mavlink_msg_pid_torque_get_y(msg);
	pid_torque->z = mavlink_msg_pid_torque_get_z(msg);
#else
	memcpy(pid_torque, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PID_TORQUE_LEN);
#endif
}
