#
# Autogenerated by Thrift Compiler (0.9.3)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException

from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None


class ReplicaLocationCategory:
  GATEWAY_DATA_STORE = 0
  COMPUTE_RESOURCE = 1
  LONG_TERM_STORAGE_RESOURCE = 2
  OTHER = 3

  _VALUES_TO_NAMES = {
    0: "GATEWAY_DATA_STORE",
    1: "COMPUTE_RESOURCE",
    2: "LONG_TERM_STORAGE_RESOURCE",
    3: "OTHER",
  }

  _NAMES_TO_VALUES = {
    "GATEWAY_DATA_STORE": 0,
    "COMPUTE_RESOURCE": 1,
    "LONG_TERM_STORAGE_RESOURCE": 2,
    "OTHER": 3,
  }

class ReplicaPersistentType:
  TRANSIENT = 0
  PERSISTENT = 1

  _VALUES_TO_NAMES = {
    0: "TRANSIENT",
    1: "PERSISTENT",
  }

  _NAMES_TO_VALUES = {
    "TRANSIENT": 0,
    "PERSISTENT": 1,
  }

class DataProductType:
  FILE = 0
  COLLECTION = 1

  _VALUES_TO_NAMES = {
    0: "FILE",
    1: "COLLECTION",
  }

  _NAMES_TO_VALUES = {
    "FILE": 0,
    "COLLECTION": 1,
  }


class DataReplicaLocationModel:
  """
  Attributes:
   - replicaId
   - productUri
   - replicaName
   - replicaDescription
   - creationTime
   - lastModifiedTime
   - validUntilTime
   - replicaLocationCategory
   - replicaPersistentType
   - storageResourceId
   - filePath
   - replicaMetadata
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRING, 'replicaId', None, None, ), # 1
    (2, TType.STRING, 'productUri', None, None, ), # 2
    (3, TType.STRING, 'replicaName', None, None, ), # 3
    (4, TType.STRING, 'replicaDescription', None, None, ), # 4
    (5, TType.I64, 'creationTime', None, None, ), # 5
    (6, TType.I64, 'lastModifiedTime', None, None, ), # 6
    (7, TType.I64, 'validUntilTime', None, None, ), # 7
    (8, TType.I32, 'replicaLocationCategory', None, None, ), # 8
    (9, TType.I32, 'replicaPersistentType', None, None, ), # 9
    (10, TType.STRING, 'storageResourceId', None, None, ), # 10
    (11, TType.STRING, 'filePath', None, None, ), # 11
    (12, TType.MAP, 'replicaMetadata', (TType.STRING,None,TType.STRING,None), None, ), # 12
  )

  def __init__(self, replicaId=None, productUri=None, replicaName=None, replicaDescription=None, creationTime=None, lastModifiedTime=None, validUntilTime=None, replicaLocationCategory=None, replicaPersistentType=None, storageResourceId=None, filePath=None, replicaMetadata=None,):
    self.replicaId = replicaId
    self.productUri = productUri
    self.replicaName = replicaName
    self.replicaDescription = replicaDescription
    self.creationTime = creationTime
    self.lastModifiedTime = lastModifiedTime
    self.validUntilTime = validUntilTime
    self.replicaLocationCategory = replicaLocationCategory
    self.replicaPersistentType = replicaPersistentType
    self.storageResourceId = storageResourceId
    self.filePath = filePath
    self.replicaMetadata = replicaMetadata

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRING:
          self.replicaId = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRING:
          self.productUri = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRING:
          self.replicaName = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRING:
          self.replicaDescription = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 5:
        if ftype == TType.I64:
          self.creationTime = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 6:
        if ftype == TType.I64:
          self.lastModifiedTime = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 7:
        if ftype == TType.I64:
          self.validUntilTime = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 8:
        if ftype == TType.I32:
          self.replicaLocationCategory = iprot.readI32()
        else:
          iprot.skip(ftype)
      elif fid == 9:
        if ftype == TType.I32:
          self.replicaPersistentType = iprot.readI32()
        else:
          iprot.skip(ftype)
      elif fid == 10:
        if ftype == TType.STRING:
          self.storageResourceId = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 11:
        if ftype == TType.STRING:
          self.filePath = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 12:
        if ftype == TType.MAP:
          self.replicaMetadata = {}
          (_ktype1, _vtype2, _size0 ) = iprot.readMapBegin()
          for _i4 in xrange(_size0):
            _key5 = iprot.readString()
            _val6 = iprot.readString()
            self.replicaMetadata[_key5] = _val6
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('DataReplicaLocationModel')
    if self.replicaId is not None:
      oprot.writeFieldBegin('replicaId', TType.STRING, 1)
      oprot.writeString(self.replicaId)
      oprot.writeFieldEnd()
    if self.productUri is not None:
      oprot.writeFieldBegin('productUri', TType.STRING, 2)
      oprot.writeString(self.productUri)
      oprot.writeFieldEnd()
    if self.replicaName is not None:
      oprot.writeFieldBegin('replicaName', TType.STRING, 3)
      oprot.writeString(self.replicaName)
      oprot.writeFieldEnd()
    if self.replicaDescription is not None:
      oprot.writeFieldBegin('replicaDescription', TType.STRING, 4)
      oprot.writeString(self.replicaDescription)
      oprot.writeFieldEnd()
    if self.creationTime is not None:
      oprot.writeFieldBegin('creationTime', TType.I64, 5)
      oprot.writeI64(self.creationTime)
      oprot.writeFieldEnd()
    if self.lastModifiedTime is not None:
      oprot.writeFieldBegin('lastModifiedTime', TType.I64, 6)
      oprot.writeI64(self.lastModifiedTime)
      oprot.writeFieldEnd()
    if self.validUntilTime is not None:
      oprot.writeFieldBegin('validUntilTime', TType.I64, 7)
      oprot.writeI64(self.validUntilTime)
      oprot.writeFieldEnd()
    if self.replicaLocationCategory is not None:
      oprot.writeFieldBegin('replicaLocationCategory', TType.I32, 8)
      oprot.writeI32(self.replicaLocationCategory)
      oprot.writeFieldEnd()
    if self.replicaPersistentType is not None:
      oprot.writeFieldBegin('replicaPersistentType', TType.I32, 9)
      oprot.writeI32(self.replicaPersistentType)
      oprot.writeFieldEnd()
    if self.storageResourceId is not None:
      oprot.writeFieldBegin('storageResourceId', TType.STRING, 10)
      oprot.writeString(self.storageResourceId)
      oprot.writeFieldEnd()
    if self.filePath is not None:
      oprot.writeFieldBegin('filePath', TType.STRING, 11)
      oprot.writeString(self.filePath)
      oprot.writeFieldEnd()
    if self.replicaMetadata is not None:
      oprot.writeFieldBegin('replicaMetadata', TType.MAP, 12)
      oprot.writeMapBegin(TType.STRING, TType.STRING, len(self.replicaMetadata))
      for kiter7,viter8 in self.replicaMetadata.items():
        oprot.writeString(kiter7)
        oprot.writeString(viter8)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __hash__(self):
    value = 17
    value = (value * 31) ^ hash(self.replicaId)
    value = (value * 31) ^ hash(self.productUri)
    value = (value * 31) ^ hash(self.replicaName)
    value = (value * 31) ^ hash(self.replicaDescription)
    value = (value * 31) ^ hash(self.creationTime)
    value = (value * 31) ^ hash(self.lastModifiedTime)
    value = (value * 31) ^ hash(self.validUntilTime)
    value = (value * 31) ^ hash(self.replicaLocationCategory)
    value = (value * 31) ^ hash(self.replicaPersistentType)
    value = (value * 31) ^ hash(self.storageResourceId)
    value = (value * 31) ^ hash(self.filePath)
    value = (value * 31) ^ hash(self.replicaMetadata)
    return value

  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class DataProductModel:
  """
  Attributes:
   - productUri
   - gatewayId
   - parentProductUri
   - productName
   - productDescription
   - ownerName
   - dataProductType
   - productSize
   - creationTime
   - lastModifiedTime
   - productMetadata
   - replicaLocations
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRING, 'productUri', None, None, ), # 1
    (2, TType.STRING, 'gatewayId', None, None, ), # 2
    (3, TType.STRING, 'parentProductUri', None, None, ), # 3
    (4, TType.STRING, 'productName', None, None, ), # 4
    (5, TType.STRING, 'productDescription', None, None, ), # 5
    (6, TType.STRING, 'ownerName', None, None, ), # 6
    (7, TType.I32, 'dataProductType', None, None, ), # 7
    (8, TType.I32, 'productSize', None, None, ), # 8
    (9, TType.I64, 'creationTime', None, None, ), # 9
    (10, TType.I64, 'lastModifiedTime', None, None, ), # 10
    (11, TType.MAP, 'productMetadata', (TType.STRING,None,TType.STRING,None), None, ), # 11
    (12, TType.LIST, 'replicaLocations', (TType.STRUCT,(DataReplicaLocationModel, DataReplicaLocationModel.thrift_spec)), None, ), # 12
  )

  def __init__(self, productUri=None, gatewayId=None, parentProductUri=None, productName=None, productDescription=None, ownerName=None, dataProductType=None, productSize=None, creationTime=None, lastModifiedTime=None, productMetadata=None, replicaLocations=None,):
    self.productUri = productUri
    self.gatewayId = gatewayId
    self.parentProductUri = parentProductUri
    self.productName = productName
    self.productDescription = productDescription
    self.ownerName = ownerName
    self.dataProductType = dataProductType
    self.productSize = productSize
    self.creationTime = creationTime
    self.lastModifiedTime = lastModifiedTime
    self.productMetadata = productMetadata
    self.replicaLocations = replicaLocations

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRING:
          self.productUri = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRING:
          self.gatewayId = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRING:
          self.parentProductUri = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRING:
          self.productName = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 5:
        if ftype == TType.STRING:
          self.productDescription = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 6:
        if ftype == TType.STRING:
          self.ownerName = iprot.readString()
        else:
          iprot.skip(ftype)
      elif fid == 7:
        if ftype == TType.I32:
          self.dataProductType = iprot.readI32()
        else:
          iprot.skip(ftype)
      elif fid == 8:
        if ftype == TType.I32:
          self.productSize = iprot.readI32()
        else:
          iprot.skip(ftype)
      elif fid == 9:
        if ftype == TType.I64:
          self.creationTime = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 10:
        if ftype == TType.I64:
          self.lastModifiedTime = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 11:
        if ftype == TType.MAP:
          self.productMetadata = {}
          (_ktype10, _vtype11, _size9 ) = iprot.readMapBegin()
          for _i13 in xrange(_size9):
            _key14 = iprot.readString()
            _val15 = iprot.readString()
            self.productMetadata[_key14] = _val15
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      elif fid == 12:
        if ftype == TType.LIST:
          self.replicaLocations = []
          (_etype19, _size16) = iprot.readListBegin()
          for _i20 in xrange(_size16):
            _elem21 = DataReplicaLocationModel()
            _elem21.read(iprot)
            self.replicaLocations.append(_elem21)
          iprot.readListEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('DataProductModel')
    if self.productUri is not None:
      oprot.writeFieldBegin('productUri', TType.STRING, 1)
      oprot.writeString(self.productUri)
      oprot.writeFieldEnd()
    if self.gatewayId is not None:
      oprot.writeFieldBegin('gatewayId', TType.STRING, 2)
      oprot.writeString(self.gatewayId)
      oprot.writeFieldEnd()
    if self.parentProductUri is not None:
      oprot.writeFieldBegin('parentProductUri', TType.STRING, 3)
      oprot.writeString(self.parentProductUri)
      oprot.writeFieldEnd()
    if self.productName is not None:
      oprot.writeFieldBegin('productName', TType.STRING, 4)
      oprot.writeString(self.productName)
      oprot.writeFieldEnd()
    if self.productDescription is not None:
      oprot.writeFieldBegin('productDescription', TType.STRING, 5)
      oprot.writeString(self.productDescription)
      oprot.writeFieldEnd()
    if self.ownerName is not None:
      oprot.writeFieldBegin('ownerName', TType.STRING, 6)
      oprot.writeString(self.ownerName)
      oprot.writeFieldEnd()
    if self.dataProductType is not None:
      oprot.writeFieldBegin('dataProductType', TType.I32, 7)
      oprot.writeI32(self.dataProductType)
      oprot.writeFieldEnd()
    if self.productSize is not None:
      oprot.writeFieldBegin('productSize', TType.I32, 8)
      oprot.writeI32(self.productSize)
      oprot.writeFieldEnd()
    if self.creationTime is not None:
      oprot.writeFieldBegin('creationTime', TType.I64, 9)
      oprot.writeI64(self.creationTime)
      oprot.writeFieldEnd()
    if self.lastModifiedTime is not None:
      oprot.writeFieldBegin('lastModifiedTime', TType.I64, 10)
      oprot.writeI64(self.lastModifiedTime)
      oprot.writeFieldEnd()
    if self.productMetadata is not None:
      oprot.writeFieldBegin('productMetadata', TType.MAP, 11)
      oprot.writeMapBegin(TType.STRING, TType.STRING, len(self.productMetadata))
      for kiter22,viter23 in self.productMetadata.items():
        oprot.writeString(kiter22)
        oprot.writeString(viter23)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    if self.replicaLocations is not None:
      oprot.writeFieldBegin('replicaLocations', TType.LIST, 12)
      oprot.writeListBegin(TType.STRUCT, len(self.replicaLocations))
      for iter24 in self.replicaLocations:
        iter24.write(oprot)
      oprot.writeListEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __hash__(self):
    value = 17
    value = (value * 31) ^ hash(self.productUri)
    value = (value * 31) ^ hash(self.gatewayId)
    value = (value * 31) ^ hash(self.parentProductUri)
    value = (value * 31) ^ hash(self.productName)
    value = (value * 31) ^ hash(self.productDescription)
    value = (value * 31) ^ hash(self.ownerName)
    value = (value * 31) ^ hash(self.dataProductType)
    value = (value * 31) ^ hash(self.productSize)
    value = (value * 31) ^ hash(self.creationTime)
    value = (value * 31) ^ hash(self.lastModifiedTime)
    value = (value * 31) ^ hash(self.productMetadata)
    value = (value * 31) ^ hash(self.replicaLocations)
    return value

  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)
