# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from eufs_msgs/SLAMState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SLAMState(genpy.Message):
  _md5sum = "ab64b055dcd9ea5dad8d577fe02146d7"
  _type = "eufs_msgs/SLAMState"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool loop_closed          # True after loop closure
int16 laps
string status             # Dump for any logging purposes. Eg: "particle covariance high; can't localise"

# Possible states of the algorithm
int8 NO_INPUTS=0          # No inputs have been received yet
int8 MAPPING=1            # Building map
int8 LOCALISING=2         # Loop closed, now localising only
int8 TIMEOUT=3            # Input topics timedout
int8 RECOMMENDS_FAILURE=4 # If true, critical failure!  Recommends emergency shutdown

int8 state                # States enumerated above
"""
  # Pseudo-constants
  NO_INPUTS = 0
  MAPPING = 1
  LOCALISING = 2
  TIMEOUT = 3
  RECOMMENDS_FAILURE = 4

  __slots__ = ['loop_closed','laps','status','state']
  _slot_types = ['bool','int16','string','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       loop_closed,laps,status,state

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SLAMState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.loop_closed is None:
        self.loop_closed = False
      if self.laps is None:
        self.laps = 0
      if self.status is None:
        self.status = ''
      if self.state is None:
        self.state = 0
    else:
      self.loop_closed = False
      self.laps = 0
      self.status = ''
      self.state = 0

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
      buff.write(_get_struct_Bh().pack(_x.loop_closed, _x.laps))
      _x = self.status
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.state
      buff.write(_get_struct_b().pack(_x))
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
      end += 3
      (_x.loop_closed, _x.laps,) = _get_struct_Bh().unpack(str[start:end])
      self.loop_closed = bool(self.loop_closed)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.status = str[start:end]
      start = end
      end += 1
      (self.state,) = _get_struct_b().unpack(str[start:end])
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
      buff.write(_get_struct_Bh().pack(_x.loop_closed, _x.laps))
      _x = self.status
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.state
      buff.write(_get_struct_b().pack(_x))
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
      end += 3
      (_x.loop_closed, _x.laps,) = _get_struct_Bh().unpack(str[start:end])
      self.loop_closed = bool(self.loop_closed)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.status = str[start:end]
      start = end
      end += 1
      (self.state,) = _get_struct_b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Bh = None
def _get_struct_Bh():
    global _struct_Bh
    if _struct_Bh is None:
        _struct_Bh = struct.Struct("<Bh")
    return _struct_Bh
_struct_b = None
def _get_struct_b():
    global _struct_b
    if _struct_b is None:
        _struct_b = struct.Struct("<b")
    return _struct_b