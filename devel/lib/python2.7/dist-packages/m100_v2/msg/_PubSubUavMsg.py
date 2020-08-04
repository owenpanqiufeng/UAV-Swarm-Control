# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from m100_v2/PubSubUavMsg.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PubSubUavMsg(genpy.Message):
  _md5sum = "67891a76d6771782154f9e5d90983fb9"
  _type = "m100_v2/PubSubUavMsg"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 src_uav_id
string component
int32 cmd_priority
string playload
float64 start_time
int32 tgt_uav_count"""
  __slots__ = ['src_uav_id','component','cmd_priority','playload','start_time','tgt_uav_count']
  _slot_types = ['int32','string','int32','string','float64','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       src_uav_id,component,cmd_priority,playload,start_time,tgt_uav_count

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PubSubUavMsg, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.src_uav_id is None:
        self.src_uav_id = 0
      if self.component is None:
        self.component = ''
      if self.cmd_priority is None:
        self.cmd_priority = 0
      if self.playload is None:
        self.playload = ''
      if self.start_time is None:
        self.start_time = 0.
      if self.tgt_uav_count is None:
        self.tgt_uav_count = 0
    else:
      self.src_uav_id = 0
      self.component = ''
      self.cmd_priority = 0
      self.playload = ''
      self.start_time = 0.
      self.tgt_uav_count = 0

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
      buff.write(_get_struct_i().pack(self.src_uav_id))
      _x = self.component
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_i().pack(self.cmd_priority))
      _x = self.playload
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_di().pack(_x.start_time, _x.tgt_uav_count))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (self.src_uav_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.component = str[start:end].decode('utf-8')
      else:
        self.component = str[start:end]
      start = end
      end += 4
      (self.cmd_priority,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.playload = str[start:end].decode('utf-8')
      else:
        self.playload = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.start_time, _x.tgt_uav_count,) = _get_struct_di().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_i().pack(self.src_uav_id))
      _x = self.component
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_i().pack(self.cmd_priority))
      _x = self.playload
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_di().pack(_x.start_time, _x.tgt_uav_count))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (self.src_uav_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.component = str[start:end].decode('utf-8')
      else:
        self.component = str[start:end]
      start = end
      end += 4
      (self.cmd_priority,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.playload = str[start:end].decode('utf-8')
      else:
        self.playload = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.start_time, _x.tgt_uav_count,) = _get_struct_di().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
_struct_di = None
def _get_struct_di():
    global _struct_di
    if _struct_di is None:
        _struct_di = struct.Struct("<di")
    return _struct_di
