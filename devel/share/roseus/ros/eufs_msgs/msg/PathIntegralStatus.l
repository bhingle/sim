;; Auto-generated. Do not edit!


(when (boundp 'eufs_msgs::PathIntegralStatus)
  (if (not (find-package "EUFS_MSGS"))
    (make-package "EUFS_MSGS"))
  (shadow 'PathIntegralStatus (find-package "EUFS_MSGS")))
(unless (find-package "EUFS_MSGS::PATHINTEGRALSTATUS")
  (make-package "EUFS_MSGS::PATHINTEGRALSTATUS"))

(in-package "ROS")
;;//! \htmlinclude PathIntegralStatus.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass eufs_msgs::PathIntegralStatus
  :super ros::object
  :slots (_header _info _status ))

(defmethod eufs_msgs::PathIntegralStatus
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:info __info) "")
    ((:status __status) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _info (string __info))
   (setq _status (round __status))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:info
   (&optional __info)
   (if __info (setq _info __info)) _info)
  (:status
   (&optional __status)
   (if __status (setq _status __status)) _status)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _info
    4 (length _info)
    ;; int32 _status
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _info
       (write-long (length _info) s) (princ _info s)
     ;; int32 _status
       (write-long _status s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _info
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _info (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _status
     (setq _status (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get eufs_msgs::PathIntegralStatus :md5sum-) "02d521c9eb95ab130c6fffe5772d2229")
(setf (get eufs_msgs::PathIntegralStatus :datatype-) "eufs_msgs/PathIntegralStatus")
(setf (get eufs_msgs::PathIntegralStatus :definition-)
      "Header header

string info
int32 status
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :eufs_msgs/PathIntegralStatus "02d521c9eb95ab130c6fffe5772d2229")


