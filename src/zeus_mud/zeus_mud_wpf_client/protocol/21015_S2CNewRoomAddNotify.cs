//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: 21015_S2CNewRoomAddNotify.proto
namespace Protocol
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"S2CNewRoomAddNotify")]
  public partial class S2CNewRoomAddNotify : global::ProtoBuf.IExtensible
  {
    public S2CNewRoomAddNotify() {}
    
    private uint _room_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"room_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public uint room_id
    {
      get { return _room_id; }
      set { _room_id = value; }
    }
    private string _room_name;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"room_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string room_name
    {
      get { return _room_name; }
      set { _room_name = value; }
    }
    private bool _public;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"public", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public bool @public
    {
      get { return _public; }
      set { _public = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}