# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from novatel_gps_msgs/NovatelExtendedSolutionStatus.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class NovatelExtendedSolutionStatus(genpy.Message):
  _md5sum = "f0e19d53094c207c4dafdfbde750c4b1"
  _type = "novatel_gps_msgs/NovatelExtendedSolutionStatus"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Bit    Mask      Description
#  0     0x01      Advance RTK verified (0 = not verified, 1 = verified)
# 1-3    0x0E      Pseudorange Ionosphere Correction
#                    0 = unknown
#                    1 = Klobuchar Broadcast
#                    2 = SBAS Broadcast
#                    3 = Multi-frequency Computed
#                    4 = PSRDiff Correction
#                    5 = NovaTel Blended Ionosphere Value
# 4-7  0xF0        <Reserved>
uint32 original_mask
bool advance_rtk_verified
string psuedorange_iono_correction
"""
  __slots__ = ['original_mask','advance_rtk_verified','psuedorange_iono_correction']
  _slot_types = ['uint32','bool','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       original_mask,advance_rtk_verified,psuedorange_iono_correction

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(NovatelExtendedSolutionStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.original_mask is None:
        self.original_mask = 0
      if self.advance_rtk_verified is None:
        self.advance_rtk_verified = False
      if self.psuedorange_iono_correction is None:
        self.psuedorange_iono_correction = ''
    else:
      self.original_mask = 0
      self.advance_rtk_verified = False
      self.psuedorange_iono_correction = ''

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
      buff.write(_get_struct_IB().pack(_x.original_mask, _x.advance_rtk_verified))
      _x = self.psuedorange_iono_correction
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.original_mask, _x.advance_rtk_verified,) = _get_struct_IB().unpack(str[start:end])
      self.advance_rtk_verified = bool(self.advance_rtk_verified)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.psuedorange_iono_correction = str[start:end].decode('utf-8')
      else:
        self.psuedorange_iono_correction = str[start:end]
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
      _x = self
      buff.write(_get_struct_IB().pack(_x.original_mask, _x.advance_rtk_verified))
      _x = self.psuedorange_iono_correction
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
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
      _x = self
      start = end
      end += 5
      (_x.original_mask, _x.advance_rtk_verified,) = _get_struct_IB().unpack(str[start:end])
      self.advance_rtk_verified = bool(self.advance_rtk_verified)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.psuedorange_iono_correction = str[start:end].decode('utf-8')
      else:
        self.psuedorange_iono_correction = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_IB = None
def _get_struct_IB():
    global _struct_IB
    if _struct_IB is None:
        _struct_IB = struct.Struct("<IB")
    return _struct_IB
