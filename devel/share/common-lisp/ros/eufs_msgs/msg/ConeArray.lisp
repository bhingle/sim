; Auto-generated. Do not edit!


(cl:in-package eufs_msgs-msg)


;//! \htmlinclude ConeArray.msg.html

(cl:defclass <ConeArray> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (blue_cones
    :reader blue_cones
    :initarg :blue_cones
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point)))
   (yellow_cones
    :reader yellow_cones
    :initarg :yellow_cones
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point)))
   (orange_cones
    :reader orange_cones
    :initarg :orange_cones
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point)))
   (big_orange_cones
    :reader big_orange_cones
    :initarg :big_orange_cones
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point)))
   (unknown_color_cones
    :reader unknown_color_cones
    :initarg :unknown_color_cones
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point))))
)

(cl:defclass ConeArray (<ConeArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ConeArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ConeArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name eufs_msgs-msg:<ConeArray> is deprecated: use eufs_msgs-msg:ConeArray instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ConeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:header-val is deprecated.  Use eufs_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'blue_cones-val :lambda-list '(m))
(cl:defmethod blue_cones-val ((m <ConeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:blue_cones-val is deprecated.  Use eufs_msgs-msg:blue_cones instead.")
  (blue_cones m))

(cl:ensure-generic-function 'yellow_cones-val :lambda-list '(m))
(cl:defmethod yellow_cones-val ((m <ConeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:yellow_cones-val is deprecated.  Use eufs_msgs-msg:yellow_cones instead.")
  (yellow_cones m))

(cl:ensure-generic-function 'orange_cones-val :lambda-list '(m))
(cl:defmethod orange_cones-val ((m <ConeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:orange_cones-val is deprecated.  Use eufs_msgs-msg:orange_cones instead.")
  (orange_cones m))

(cl:ensure-generic-function 'big_orange_cones-val :lambda-list '(m))
(cl:defmethod big_orange_cones-val ((m <ConeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:big_orange_cones-val is deprecated.  Use eufs_msgs-msg:big_orange_cones instead.")
  (big_orange_cones m))

(cl:ensure-generic-function 'unknown_color_cones-val :lambda-list '(m))
(cl:defmethod unknown_color_cones-val ((m <ConeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader eufs_msgs-msg:unknown_color_cones-val is deprecated.  Use eufs_msgs-msg:unknown_color_cones instead.")
  (unknown_color_cones m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ConeArray>) ostream)
  "Serializes a message object of type '<ConeArray>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'blue_cones))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'blue_cones))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'yellow_cones))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'yellow_cones))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'orange_cones))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'orange_cones))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'big_orange_cones))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'big_orange_cones))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'unknown_color_cones))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'unknown_color_cones))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ConeArray>) istream)
  "Deserializes a message object of type '<ConeArray>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'blue_cones) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'blue_cones)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'yellow_cones) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'yellow_cones)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'orange_cones) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'orange_cones)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'big_orange_cones) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'big_orange_cones)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'unknown_color_cones) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'unknown_color_cones)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ConeArray>)))
  "Returns string type for a message object of type '<ConeArray>"
  "eufs_msgs/ConeArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ConeArray)))
  "Returns string type for a message object of type 'ConeArray"
  "eufs_msgs/ConeArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ConeArray>)))
  "Returns md5sum for a message object of type '<ConeArray>"
  "2fd46e5835ac8d345a9ba407aaa1bb6a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ConeArray)))
  "Returns md5sum for a message object of type 'ConeArray"
  "2fd46e5835ac8d345a9ba407aaa1bb6a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ConeArray>)))
  "Returns full string definition for message of type '<ConeArray>"
  (cl:format cl:nil "#Array of 2D cone locations (z = 0)~%~%Header header~%~%geometry_msgs/Point[] blue_cones~%geometry_msgs/Point[] yellow_cones~%geometry_msgs/Point[] orange_cones~%geometry_msgs/Point[] big_orange_cones~%geometry_msgs/Point[] unknown_color_cones~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ConeArray)))
  "Returns full string definition for message of type 'ConeArray"
  (cl:format cl:nil "#Array of 2D cone locations (z = 0)~%~%Header header~%~%geometry_msgs/Point[] blue_cones~%geometry_msgs/Point[] yellow_cones~%geometry_msgs/Point[] orange_cones~%geometry_msgs/Point[] big_orange_cones~%geometry_msgs/Point[] unknown_color_cones~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ConeArray>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'blue_cones) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'yellow_cones) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'orange_cones) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'big_orange_cones) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'unknown_color_cones) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ConeArray>))
  "Converts a ROS message object to a list"
  (cl:list 'ConeArray
    (cl:cons ':header (header msg))
    (cl:cons ':blue_cones (blue_cones msg))
    (cl:cons ':yellow_cones (yellow_cones msg))
    (cl:cons ':orange_cones (orange_cones msg))
    (cl:cons ':big_orange_cones (big_orange_cones msg))
    (cl:cons ':unknown_color_cones (unknown_color_cones msg))
))
