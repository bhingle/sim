; Auto-generated. Do not edit!


(cl:in-package eufs_msgs-msg)


;//! \htmlinclude PathIntegralStats.msg.html

(cl:defclass <PathIntegralStats> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (tag
    :reader tag
    :initarg :tag
    :type cl:string
    :initform "")
   (params
    :reader params
    :initarg :params
    :type eufs_msgs-msg:PathIntegralParams
    :initform (cl:make-instance 'eufs_msgs-msg:PathIntegralParams))
   (stats
    :reader stats
    :initarg :stats
    :type eufs_msgs-msg:LapStats
    :initform (cl:make-instance 'eufs_msgs-msg:LapStats)))
)

(cl:defclass PathIntegralStats (<PathIntegralStats>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PathIntegralStats>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PathIntegralStats)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name eufs_msgs-msg:<PathIntegralStats> is deprecated: use eufs_msgs-msg:PathIntegralStats instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <PathIntegralStats>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:header-val is deprecated.  Use eufs_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'tag-val :lambda-list '(m))
(cl:defmethod tag-val ((m <PathIntegralStats>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:tag-val is deprecated.  Use eufs_msgs-msg:tag instead.")
  (tag m))

(cl:ensure-generic-function 'params-val :lambda-list '(m))
(cl:defmethod params-val ((m <PathIntegralStats>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:params-val is deprecated.  Use eufs_msgs-msg:params instead.")
  (params m))

(cl:ensure-generic-function 'stats-val :lambda-list '(m))
(cl:defmethod stats-val ((m <PathIntegralStats>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:stats-val is deprecated.  Use eufs_msgs-msg:stats instead.")
  (stats m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PathIntegralStats>) ostream)
  "Serializes a message object of type '<PathIntegralStats>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'tag))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'tag))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'params) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'stats) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PathIntegralStats>) istream)
  "Deserializes a message object of type '<PathIntegralStats>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'tag) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'tag) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'params) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'stats) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PathIntegralStats>)))
  "Returns string type for a message object of type '<PathIntegralStats>"
  "eufs_msgs/PathIntegralStats")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PathIntegralStats)))
  "Returns string type for a message object of type 'PathIntegralStats"
  "eufs_msgs/PathIntegralStats")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PathIntegralStats>)))
  "Returns md5sum for a message object of type '<PathIntegralStats>"
  "9a732ef90ed77e7ea292473d12fb8c41")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PathIntegralStats)))
  "Returns md5sum for a message object of type 'PathIntegralStats"
  "9a732ef90ed77e7ea292473d12fb8c41")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PathIntegralStats>)))
  "Returns full string definition for message of type '<PathIntegralStats>"
  (cl:format cl:nil "Header header~%string tag~%~%PathIntegralParams params~%LapStats stats~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: eufs_msgs/PathIntegralParams~%int64 hz~%int64 num_timesteps~%int64 num_iters~%float64 gamma~%float64 init_steering~%float64 init_throttle~%float64 steering_var~%float64 throttle_var~%float64 max_throttle~%float64 speed_coefficient~%float64 track_coefficient~%float64 max_slip_angle~%float64 track_slop~%float64 crash_coeff~%string map_path~%float64 desired_speed~%================================================================================~%MSG: eufs_msgs/LapStats~%Header header~%~%int64 lap_number~%float64 lap_time~%float64 avg_speed~%float64 max_speed~%float64 max_slip~%float64 max_lateral_accel~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PathIntegralStats)))
  "Returns full string definition for message of type 'PathIntegralStats"
  (cl:format cl:nil "Header header~%string tag~%~%PathIntegralParams params~%LapStats stats~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: eufs_msgs/PathIntegralParams~%int64 hz~%int64 num_timesteps~%int64 num_iters~%float64 gamma~%float64 init_steering~%float64 init_throttle~%float64 steering_var~%float64 throttle_var~%float64 max_throttle~%float64 speed_coefficient~%float64 track_coefficient~%float64 max_slip_angle~%float64 track_slop~%float64 crash_coeff~%string map_path~%float64 desired_speed~%================================================================================~%MSG: eufs_msgs/LapStats~%Header header~%~%int64 lap_number~%float64 lap_time~%float64 avg_speed~%float64 max_speed~%float64 max_slip~%float64 max_lateral_accel~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PathIntegralStats>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'tag))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'params))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'stats))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PathIntegralStats>))
  "Converts a ROS message object to a list"
  (cl:list 'PathIntegralStats
    (cl:cons ':header (header msg))
    (cl:cons ':tag (tag msg))
    (cl:cons ':params (params msg))
    (cl:cons ':stats (stats msg))
))
