# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from novatel_gps_msgs/Satellite.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Satellite(genpy.Message):
  _md5sum = "d862f2ce05a26a83264a8add99c7b668"
  _type = "novatel_gps_msgs/Satellite"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Satellite data structure used in GPGSV messages

# PRN number of the satellite
# GPS = 1..32
# SBAS = 33..64
# GLO = 65..96
uint8 prn

# Elevation, degrees. Maximum 90
uint8 elevation

# Azimuth, True North degrees. [0, 359]
uint16 azimuth

# Signal to noise ratio, 0-99 dB. -1 when null in NMEA sentence (not tracking)
int8 snr"""
  __slots__ = ['prn','elevation','azimuth','snr']
  _slot_types = ['uint8','uint8','uint16','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       prn,elevation,azimuth,snr

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Satellite, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.prn is None:
        self.prn = 0
      if self.elevation is None:
        self.elevation = 0
      if self.azimuth is None:
        self.azimuth = 0
      if self.snr is None:
        self.snr = 0
    else:
      self.prn = 0
      self.elevation = 0
      self.azimuth = 0
      self.snr = 0

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
      buff.write(_get_struct_2BHb().pack(_x.prn, _x.elevation, _x.azimuth, _x.snr))
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
      (_x.prn, _x.elevation, _x.azimuth, _x.snr,) = _get_struct_2BHb().unpack(str[start:end])
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
      buff.write(_get_struct_2BHb().pack(_x.prn, _x.elevation, _x.azimuth, _x.snr))
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
      (_x.prn, _x.elevation, _x.azimuth, _x.snr,) = _get_struct_2BHb().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2BHb = None
def _get_struct_2BHb():
    global _struct_2BHb
    if _struct_2BHb is None:
        _struct_2BHb = struct.Struct("<2BHb")
    return _struct_2BHb
