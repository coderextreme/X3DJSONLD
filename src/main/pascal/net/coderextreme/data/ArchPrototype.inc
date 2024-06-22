function ArchPrototype: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
ProtoDeclare14: TProtoDeclareNode;
ProtoInterface15: TProtoInterfaceNode;
field16: TfieldNode;
field17: TfieldNode;
field18: TfieldNode;
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
field22: TfieldNode;
field23: TfieldNode;
field24: TfieldNode;
field25: TfieldNode;
field26: TfieldNode;
field27: TfieldNode;
field28: TfieldNode;
field29: TfieldNode;
ProtoBody30: TProtoBodyNode;
Transform31: TTransformNode;
Shape32: TShapeNode;
IndexedFaceSet33: TIndexedFaceSetNode;
Coordinate34: TCoordinateNode;
Appearance35: TAppearanceNode;
Material36: TMaterialNode;
IS37: TISNode;
connect38: TconnectNode;
connect39: TconnectNode;
Script40: TScriptNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
IS56: TISNode;
connect57: TconnectNode;
connect58: TconnectNode;
connect59: TconnectNode;
connect60: TconnectNode;
connect61: TconnectNode;
connect62: TconnectNode;
connect63: TconnectNode;
connect64: TconnectNode;
connect65: TconnectNode;
connect66: TconnectNode;
connect67: TconnectNode;
connect68: TconnectNode;
ProtoInstance72: TProtoInstanceNode;
fieldValue73: TfieldValueNode;
fieldValue74: TfieldValueNode;
fieldValue75: TfieldValueNode;
fieldValue76: TfieldValueNode;
fieldValue77: TfieldValueNode;
fieldValue78: TfieldValueNode;
fieldValue79: TfieldValueNode;
fieldValue80: TfieldValueNode;
Inline81: TInlineNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'ArchPrototype.x3d';
X3D0.Meta['description'] := 'Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.';
X3D0.Meta['description'] := 'Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.';
X3D0.Meta['creator'] := 'Michele Foti, Don Brutzman';
X3D0.Meta['created'] := '15 December 2014';
X3D0.Meta['modified'] := '27 November 2015';
X3D0.Meta['reference'] := 'ArchModelingDiagrams.pdf';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Arch';
X3D0.Meta['identifier'] := 'http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group13 := TGroupNode.Create;
ProtoDeclare14 := TProtoDeclareNode.Create;
ProtoDeclare14.NameField := 'ArchPrototype';
ProtoDeclare14.Appinfo := 'Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.';
ProtoInterface15 := TProtoInterfaceNode.Create;
{ COLOR OF ARCH }
{ INPUT PARAMETERS }
{ General parameters: measures in meters }
{ Parameters to create to create shapes related to arch: put true to apply }
field16 := TfieldNode.Create;
field16.NameField := 'diffuseColor';
field16.AccessType := 'inputOutput';
field16.Appinfo := 'color of arch';
field16.Type := 'SFColor';
field16.Value := '0.2 0.8 0.8';
{ .AddField }
ProtoInterface15.Field := field16;
field17 := TfieldNode.Create;
field17.NameField := 'emissiveColor';
field17.AccessType := 'inputOutput';
field17.Appinfo := 'color of arch';
field17.Type := 'SFColor';
field17.Value := '0.2 0.8 0.8';
{ .AddField }
ProtoInterface15.Field := field17;
field18 := TfieldNode.Create;
field18.NameField := 'clearSpanWidth';
field18.AccessType := 'initializeOnly';
field18.Appinfo := 'clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference';
field18.Type := 'SFFloat';
field18.Value := '4';
{ .AddField }
ProtoInterface15.Field := field18;
field19 := TfieldNode.Create;
field19.NameField := 'riseHeight';
field19.AccessType := 'initializeOnly';
field19.Appinfo := 'riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference';
field19.Type := 'SFFloat';
field19.Value := '2';
{ .AddField }
ProtoInterface15.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'depth';
field20.AccessType := 'initializeOnly';
field20.Appinfo := 'depth';
field20.Type := 'SFFloat';
field20.Value := '3';
{ .AddField }
ProtoInterface15.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'topAbutmentHeight';
field21.AccessType := 'initializeOnly';
field21.Appinfo := 'topAbutmentHeight:topAbutmentHeight=0 means no topAbutment';
field21.Type := 'SFFloat';
field21.Value := '0.5';
{ .AddField }
ProtoInterface15.Field := field21;
field22 := TfieldNode.Create;
field22.NameField := 'pierWidth';
field22.AccessType := 'initializeOnly';
field22.Appinfo := 'pierWidth:pierWidtht=0 means no pierWidth';
field22.Type := 'SFFloat';
field22.Value := '0.5';
{ .AddField }
ProtoInterface15.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'pierHeight';
field23.AccessType := 'initializeOnly';
field23.Appinfo := 'pierHeight: pierHeight=0 means no pierHeight';
field23.Type := 'SFFloat';
field23.Value := '1';
{ .AddField }
ProtoInterface15.Field := field23;
field24 := TfieldNode.Create;
field24.NameField := 'archHalf';
field24.AccessType := 'initializeOnly';
field24.Appinfo := 'archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width';
field24.Type := 'SFBool';
field24.Value := 'false';
{ .AddField }
ProtoInterface15.Field := field24;
field25 := TfieldNode.Create;
field25.NameField := 'archHalfExtensionWidth';
field25.AccessType := 'initializeOnly';
field25.Appinfo := 'archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.';
field25.Type := 'SFFloat';
field25.Value := '0';
{ .AddField }
ProtoInterface15.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'onlyIntrados';
field26.AccessType := 'initializeOnly';
field26.Appinfo := 'onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.';
field26.Type := 'SFBool';
field26.Value := 'false';
{ .AddField }
ProtoInterface15.Field := field26;
field27 := TfieldNode.Create;
field27.NameField := 'archFilled';
field27.AccessType := 'initializeOnly';
field27.Appinfo := 'archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.';
field27.Type := 'SFBool';
field27.Value := 'false';
{ .AddField }
ProtoInterface15.Field := field27;
field28 := TfieldNode.Create;
field28.NameField := 'archHalfFilled';
field28.AccessType := 'initializeOnly';
field28.Appinfo := 'archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.';
field28.Type := 'SFBool';
field28.Value := 'false';
{ .AddField }
ProtoInterface15.Field := field28;
field29 := TfieldNode.Create;
field29.NameField := 'lintel';
field29.AccessType := 'initializeOnly';
field29.Appinfo := 'lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.';
field29.Type := 'SFBool';
field29.Value := 'false';
{ .AddField }
ProtoInterface15.Field := field29;
{ .SetProtoInterface }
ProtoDeclare14.ProtoInterface := ProtoInterface15;
ProtoBody30 := TProtoBodyNode.Create;
{ First node determines node type of this prototype }
{ IndexedFaceset creates arch }
Transform31 := TTransformNode.Create;
Shape32 := TShapeNode.Create;
{ note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly }
IndexedFaceSet33 := TIndexedFaceSetNode.Create;
IndexedFaceSet33.Convex := False;
IndexedFaceSet33.Solid := False;
Coordinate34 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet33.Coord := Coordinate34;
{ .SetGeometry }
Shape32.Geometry := IndexedFaceSet33;
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
IS37 := TISNode.Create;
connect38 := TconnectNode.Create;
connect38.NodeField := 'emissiveColor';
connect38.ProtoField := 'emissiveColor';
{ .AddConnect }
IS37.Connect := connect38;
connect39 := TconnectNode.Create;
connect39.NodeField := 'diffuseColor';
connect39.ProtoField := 'diffuseColor';
{ .AddConnect }
IS37.Connect := connect39;
{ .SetIS }
Material36.IS := IS37;
{ .SetMaterial }
Appearance35.Material := Material36;
{ .SetAppearance }
Shape32.Appearance := Appearance35;
{ .AddChild }
Transform31.AddChildren([Shape32]);
{ .AddChildren }
ProtoBody30.AddChildren([Transform31]);
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs }
Script40 := TScriptNode.Create;
Script40.SetUrl(['../node/ArchPrototypeScript.js','https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js']);
{ INPUT PARAMETERS }
{ General parameters }
{ Parameters to create to create shapes related to arch: put true to apply }
{ OUTPUT PARAMETERS }
field41 := TfieldNode.Create;
field41.NameField := 'clearSpanWidth';
field41.AccessType := 'initializeOnly';
field41.Appinfo := 'user or default input for clearSpanWidth parameter';
field41.Type := 'SFFloat';
{ .AddField }
Script40.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'riseHeight';
field42.AccessType := 'initializeOnly';
field42.Appinfo := 'user or default input for riseHeight parameter';
field42.Type := 'SFFloat';
{ .AddField }
Script40.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'depth';
field43.AccessType := 'initializeOnly';
field43.Appinfo := 'user or default input for depth parameter';
field43.Type := 'SFFloat';
{ .AddField }
Script40.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'topAbutmentHeight';
field44.AccessType := 'initializeOnly';
field44.Appinfo := 'user or default input for topAbutmentHeight parameter';
field44.Type := 'SFFloat';
{ .AddField }
Script40.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'pierWidth';
field45.AccessType := 'initializeOnly';
field45.Appinfo := 'user or default input for pierWidth parameter';
field45.Type := 'SFFloat';
{ .AddField }
Script40.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'pierHeight';
field46.AccessType := 'initializeOnly';
field46.Appinfo := 'user or default input for pierHeight parameter';
field46.Type := 'SFFloat';
{ .AddField }
Script40.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'archHalf';
field47.AccessType := 'initializeOnly';
field47.Appinfo := 'user or default input for archHalf parameter';
field47.Type := 'SFBool';
{ .AddField }
Script40.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'archHalfExtensionWidth';
field48.AccessType := 'initializeOnly';
field48.Appinfo := 'user or default input for archHalfExtensionWidth parameter';
field48.Type := 'SFFloat';
{ .AddField }
Script40.Field := field48;
field49 := TfieldNode.Create;
field49.NameField := 'onlyIntrados';
field49.AccessType := 'initializeOnly';
field49.Appinfo := 'user or default input for onlyIntrados parameter';
field49.Type := 'SFBool';
{ .AddField }
Script40.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'archFilled';
field50.AccessType := 'initializeOnly';
field50.Appinfo := 'user or default input for archFilled parameter';
field50.Type := 'SFBool';
{ .AddField }
Script40.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'archHalfFilled';
field51.AccessType := 'initializeOnly';
field51.Appinfo := 'user or default input for archHalfFilled parameter';
field51.Type := 'SFBool';
{ .AddField }
Script40.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'lintel';
field52.AccessType := 'initializeOnly';
field52.Appinfo := 'user or default input for lintel parameter';
field52.Type := 'SFBool';
{ .AddField }
Script40.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'computedScale';
field53.AccessType := 'outputOnly';
field53.Appinfo := 'computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth';
field53.Type := 'SFVec3f';
{ .AddField }
Script40.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'pointOut';
field54.AccessType := 'outputOnly';
field54.Appinfo := 'send computed points to the Coordinate node';
field54.Type := 'MFVec3f';
{ .AddField }
Script40.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'indexOut';
field55.AccessType := 'outputOnly';
field55.Appinfo := 'send computed indices to the IndexedFaceSet node';
field55.Type := 'MFInt32';
{ .AddField }
Script40.Field := field55;
IS56 := TISNode.Create;
connect57 := TconnectNode.Create;
connect57.NodeField := 'clearSpanWidth';
connect57.ProtoField := 'clearSpanWidth';
{ .AddConnect }
IS56.Connect := connect57;
connect58 := TconnectNode.Create;
connect58.NodeField := 'riseHeight';
connect58.ProtoField := 'riseHeight';
{ .AddConnect }
IS56.Connect := connect58;
connect59 := TconnectNode.Create;
connect59.NodeField := 'depth';
connect59.ProtoField := 'depth';
{ .AddConnect }
IS56.Connect := connect59;
connect60 := TconnectNode.Create;
connect60.NodeField := 'pierWidth';
connect60.ProtoField := 'pierWidth';
{ .AddConnect }
IS56.Connect := connect60;
connect61 := TconnectNode.Create;
connect61.NodeField := 'topAbutmentHeight';
connect61.ProtoField := 'topAbutmentHeight';
{ .AddConnect }
IS56.Connect := connect61;
connect62 := TconnectNode.Create;
connect62.NodeField := 'pierHeight';
connect62.ProtoField := 'pierHeight';
{ .AddConnect }
IS56.Connect := connect62;
connect63 := TconnectNode.Create;
connect63.NodeField := 'archHalf';
connect63.ProtoField := 'archHalf';
{ .AddConnect }
IS56.Connect := connect63;
connect64 := TconnectNode.Create;
connect64.NodeField := 'archHalfExtensionWidth';
connect64.ProtoField := 'archHalfExtensionWidth';
{ .AddConnect }
IS56.Connect := connect64;
connect65 := TconnectNode.Create;
connect65.NodeField := 'onlyIntrados';
connect65.ProtoField := 'onlyIntrados';
{ .AddConnect }
IS56.Connect := connect65;
connect66 := TconnectNode.Create;
connect66.NodeField := 'archFilled';
connect66.ProtoField := 'archFilled';
{ .AddConnect }
IS56.Connect := connect66;
connect67 := TconnectNode.Create;
connect67.NodeField := 'archHalfFilled';
connect67.ProtoField := 'archHalfFilled';
{ .AddConnect }
IS56.Connect := connect67;
connect68 := TconnectNode.Create;
connect68.NodeField := 'lintel';
connect68.ProtoField := 'lintel';
{ .AddConnect }
IS56.Connect := connect68;
{ .SetIS }
Script40.IS := IS56;
{ .AddChildren }
ProtoBody30.AddChildren([Script40]);
ProtoBody30.AddRoute(Script40.FdComputedscale, Transform31.FdScale);
{ .AddX3DRoute }
ProtoBody30.AddRoute(Script40.FdPointout, Coordinate34.FdPoint);
{ .AddX3DRoute }
ProtoBody30.AddRoute(Script40.FdIndexout, IndexedFaceSet33.EventSet_coordindex);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare14.ProtoBody := ProtoBody30;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare14]);
ProtoInstance72 := TProtoInstanceNode.Create;
ProtoInstance72.NameField := 'ArchPrototype';
fieldValue73 := TfieldValueNode.Create;
fieldValue73.NameField := 'diffuseColor';
fieldValue73.Value := '0.5 0.3 0.6';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue73;
fieldValue74 := TfieldValueNode.Create;
fieldValue74.NameField := 'emissiveColor';
fieldValue74.Value := '0.5 0.3 0.6';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue74;
fieldValue75 := TfieldValueNode.Create;
fieldValue75.NameField := 'clearSpanWidth';
fieldValue75.Value := '5';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue75;
fieldValue76 := TfieldValueNode.Create;
fieldValue76.NameField := 'riseHeight';
fieldValue76.Value := '2.5';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue76;
fieldValue77 := TfieldValueNode.Create;
fieldValue77.NameField := 'depth';
fieldValue77.Value := '2';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue77;
fieldValue78 := TfieldValueNode.Create;
fieldValue78.NameField := 'topAbutmentHeight';
fieldValue78.Value := '0.6';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue78;
fieldValue79 := TfieldValueNode.Create;
fieldValue79.NameField := 'pierWidth';
fieldValue79.Value := '1';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue79;
fieldValue80 := TfieldValueNode.Create;
fieldValue80.NameField := 'pierHeight';
fieldValue80.Value := '2';
{ .AddFieldValue }
ProtoInstance72.FieldValue := fieldValue80;
{ .AddChildren }
Group13.AddChildren([ProtoInstance72]);
{ Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) }
Inline81 := TInlineNode.Create;
Inline81.SetUrl(['../data/CoordinateAxes.x3d']);
{ .AddChildren }
Group13.AddChildren([Inline81]);
{ .AddGroup }
X3D0.AddChildren([Group13]);
Result := X3D0;
end;
