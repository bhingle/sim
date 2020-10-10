# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from eufs_msgs/WheelSpeeds.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class WheelSpeeds(genpy.Message):
  _md5sum = "032f31bfd4ad524fa752e1644fb5e2ab"
  _type = "eufs_msgs/WheelSpeeds"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 steering
float32 lf_speed
float32 rf_speed
float32 lb_speed
float32 rb_speed

# Steering is in radians
# Speeds are in RPM
"""
  __slots__ = ['steering','lf_speed','rf_speed','lb_speed','rb_speed']
  _slot_types = ['float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       steering,lf_speed,rf_speed,lb_speed,rb_speed

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WheelSpeeds, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.steering is None:
        self.steering = 0.
      if self.lf_speed is None:
        self.lf_speed = 0.
      if self.rf_speed is None:
        self.rf_speed = 0.
      if self.lb_speed is None:
        self.lb_speed = 0.
      if self.rb_speed is None:
        self.rb_speed = 0.
    else:
      self.steering = 0.
      self.lf_speed = 0.
      self.rf_speed = 0.
      self.lb_speed = 0.
      self.rb_speed = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_5f().pack(_x.steering, _x.lf_speed, _x.rf_speed, _x.lb_speed, _x.rb_speed))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.steering, _x.lf_speed, _x.rf_speed, _x.lb_speed, _x.rb_speed,) = _get_struct_5f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_5f().pack(_x.steering, _x.lf_speed, _x.rf_speed, _x.lb_speed, _x.rb_speed))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.steering, _x.lf_speed, _x.rf_speed, _x.lb_speed, _x.rb_speed,) = _get_struct_5f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5f = None
def _get_struct_5f():
    global _struct_5f
    if _struct_5f is None:
        _struct_5f = struct.Struct("<5f")
    return _struct_5f
