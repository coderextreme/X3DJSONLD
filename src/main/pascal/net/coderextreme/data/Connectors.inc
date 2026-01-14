function Connectors: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group9: TGroupNode;
ProtoDeclare10: TProtoDeclareNode;
ProtoInterface11: TProtoInterfaceNode;
field12: TfieldNode;
field13: TfieldNode;
field14: TfieldNode;
ProtoBody15: TProtoBodyNode;
IndexedFaceSet16: TIndexedFaceSetNode;
IS17: TISNode;
connect18: TconnectNode;
Coordinate19: TCoordinateNode;
Script20: TScriptNode;
field21: TfieldNode;
field22: TfieldNode;
field23: TfieldNode;
field24: TfieldNode;
IndexedFaceSet25: TIndexedFaceSetNode;
IS26: TISNode;
connect27: TconnectNode;
connect28: TconnectNode;
ProtoDeclare29: TProtoDeclareNode;
ProtoInterface30: TProtoInterfaceNode;
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
ProtoBody35: TProtoBodyNode;
Transform36: TTransformNode;
Shape37: TShapeNode;
IS38: TISNode;
connect39: TconnectNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
IS42: TISNode;
connect43: TconnectNode;
Shape44: TShapeNode;
IS45: TISNode;
connect46: TconnectNode;
Appearance47: TAppearanceNode;
FillProperties48: TFillPropertiesNode;
LineProperties49: TLinePropertiesNode;
IS50: TISNode;
connect51: TconnectNode;
Material52: TMaterialNode;
IS53: TISNode;
connect54: TconnectNode;
ProtoDeclare55: TProtoDeclareNode;
ProtoInterface56: TProtoInterfaceNode;
field57: TfieldNode;
ProtoBody58: TProtoBodyNode;
Group59: TGroupNode;
PlaneSensor60: TPlaneSensorNode;
Transform61: TTransformNode;
IS62: TISNode;
connect63: TconnectNode;
ProtoInstance64: TProtoInstanceNode;
fieldValue65: TfieldValueNode;
ProtoInstance66: TProtoInstanceNode;
fieldValue67: TfieldValueNode;
fieldValue68: TfieldValueNode;
Transform69: TTransformNode;
ProtoInstance70: TProtoInstanceNode;
fieldValue71: TfieldValueNode;
fieldValue72: TfieldValueNode;
Disk2D73: TDisk2DNode;
Transform74: TTransformNode;
ProtoInstance75: TProtoInstanceNode;
fieldValue76: TfieldValueNode;
fieldValue77: TfieldValueNode;
Disk2D78: TDisk2DNode;
Script79: TScriptNode;
field80: TfieldNode;
field81: TfieldNode;
PlaneSensor82: TPlaneSensorNode;
field83: TfieldNode;
Transform84: TTransformNode;
IS85: TISNode;
connect86: TconnectNode;
ProtoDeclare88: TProtoDeclareNode;
ProtoInterface89: TProtoInterfaceNode;
field90: TfieldNode;
field91: TfieldNode;
field92: TfieldNode;
field93: TfieldNode;
ProtoBody94: TProtoBodyNode;
Shape95: TShapeNode;
Appearance96: TAppearanceNode;
LineProperties97: TLinePropertiesNode;
IS98: TISNode;
connect99: TconnectNode;
Material100: TMaterialNode;
IS101: TISNode;
connect102: TconnectNode;
LineSet103: TLineSetNode;
Coordinate104: TCoordinateNode;
Script105: TScriptNode;
field106: TfieldNode;
field107: TfieldNode;
field108: TfieldNode;
field109: TfieldNode;
field110: TfieldNode;
LineSet111: TLineSetNode;
field112: TfieldNode;
Script113: TScriptNode;
IS114: TISNode;
connect115: TconnectNode;
connect116: TconnectNode;
NavigationInfo117: TNavigationInfoNode;
Background118: TBackgroundNode;
OrthoViewpoint119: TOrthoViewpointNode;
Viewpoint120: TViewpointNode;
Transform121: TTransformNode;
ProtoInstance122: TProtoInstanceNode;
fieldValue123: TfieldValueNode;
ProtoInstance124: TProtoInstanceNode;
fieldValue125: TfieldValueNode;
fieldValue126: TfieldValueNode;
ProtoInstance127: TProtoInstanceNode;
fieldValue128: TfieldValueNode;
ProtoInstance129: TProtoInstanceNode;
fieldValue130: TfieldValueNode;
ProtoInstance131: TProtoInstanceNode;
fieldValue132: TfieldValueNode;
ProtoInstance133: TProtoInstanceNode;
fieldValue134: TfieldValueNode;
ProtoInstance135: TProtoInstanceNode;
fieldValue136: TfieldValueNode;
ProtoInstance137: TProtoInstanceNode;
fieldValue138: TfieldValueNode;
ProtoInstance139: TProtoInstanceNode;
fieldValue140: TfieldValueNode;
ProtoInstance141: TProtoInstanceNode;
fieldValue142: TfieldValueNode;
ProtoInstance143: TProtoInstanceNode;
fieldValue144: TfieldValueNode;
ProtoInstance145: TProtoInstanceNode;
fieldValue146: TfieldValueNode;
ProtoInstance147: TProtoInstanceNode;
fieldValue148: TfieldValueNode;
ProtoInstance149: TProtoInstanceNode;
fieldValue150: TfieldValueNode;
ProtoInstance151: TProtoInstanceNode;
fieldValue152: TfieldValueNode;
ProtoInstance153: TProtoInstanceNode;
fieldValue154: TfieldValueNode;
ProtoInstance155: TProtoInstanceNode;
fieldValue156: TfieldValueNode;
ProtoInstance157: TProtoInstanceNode;
ProtoInstance158: TProtoInstanceNode;
fieldValue159: TfieldValueNode;
ProtoInstance160: TProtoInstanceNode;
fieldValue161: TfieldValueNode;
ProtoInstance162: TProtoInstanceNode;
fieldValue163: TfieldValueNode;
ProtoInstance164: TProtoInstanceNode;
fieldValue165: TfieldValueNode;
ProtoInstance166: TProtoInstanceNode;
fieldValue167: TfieldValueNode;
ProtoInstance168: TProtoInstanceNode;
ProtoInstance169: TProtoInstanceNode;
fieldValue170: TfieldValueNode;
ProtoInstance171: TProtoInstanceNode;
fieldValue172: TfieldValueNode;
ProtoInstance173: TProtoInstanceNode;
fieldValue174: TfieldValueNode;
ProtoInstance175: TProtoInstanceNode;
fieldValue176: TfieldValueNode;
ProtoInstance177: TProtoInstanceNode;
fieldValue178: TfieldValueNode;
ProtoInstance179: TProtoInstanceNode;
ProtoInstance180: TProtoInstanceNode;
ProtoInstance181: TProtoInstanceNode;
ProtoInstance182: TProtoInstanceNode;
ProtoInstance183: TProtoInstanceNode;
ProtoInstance184: TProtoInstanceNode;
ProtoInstance185: TProtoInstanceNode;
ProtoInstance186: TProtoInstanceNode;
ProtoInstance187: TProtoInstanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['comment'] := 'World of Titania';
X3D0.Meta['created'] := 'Fri, 04 Sep 2015 10:19:01 GMT';
X3D0.Meta['creator'] := 'Holger Seelig';
X3D0.Meta['generator'] := 'Titania V3.0.4, https://titania.create3000.de';
X3D0.Meta['identifier'] := 'file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d';
X3D0.Meta['modified'] := 'Tue, 25 Jul 2017 09:42:17 GMT';
X3D0.Meta['title'] := 'Connectors';
Group9 := TGroupNode.Create;
ProtoDeclare10 := TProtoDeclareNode.Create;
ProtoDeclare10.NameField := 'RoundedRectangle2D';
ProtoInterface11 := TProtoInterfaceNode.Create;
field12 := TfieldNode.Create;
field12.NameField := 'cornerRadius';
field12.AccessType := 'initializeOnly';
field12.Type := 'SFFloat';
field12.Value := '1';
{ .AddField }
ProtoInterface11.Field := field12;
field13 := TfieldNode.Create;
field13.NameField := 'size';
field13.AccessType := 'initializeOnly';
field13.Type := 'SFVec2f';
field13.Value := '2 2';
{ .AddField }
ProtoInterface11.Field := field13;
field14 := TfieldNode.Create;
field14.NameField := 'solid';
field14.AccessType := 'initializeOnly';
field14.Type := 'SFBool';
field14.Value := 'true';
{ .AddField }
ProtoInterface11.Field := field14;
{ .SetProtoInterface }
ProtoDeclare10.ProtoInterface := ProtoInterface11;
ProtoBody15 := TProtoBodyNode.Create;
IndexedFaceSet16 := TIndexedFaceSetNode.Create;
IS17 := TISNode.Create;
connect18 := TconnectNode.Create;
connect18.NodeField := 'solid';
connect18.ProtoField := 'solid';
{ .AddConnect }
IS17.Connect := connect18;
{ .SetIS }
IndexedFaceSet16.IS := IS17;
Coordinate19 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet16.Coord := Coordinate19;
{ .AddChildren }
ProtoBody15.AddChildren([IndexedFaceSet16]);
Script20 := TScriptNode.Create;
Script20.DirectOutput := True;
field21 := TfieldNode.Create;
field21.NameField := 'cornerDimension';
field21.AccessType := 'initializeOnly';
field21.Type := 'SFFloat';
field21.Value := '10';
{ .AddField }
Script20.Field := field21;
field22 := TfieldNode.Create;
field22.NameField := 'cornerRadius';
field22.AccessType := 'initializeOnly';
field22.Type := 'SFFloat';
{ .AddField }
Script20.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'size';
field23.AccessType := 'initializeOnly';
field23.Type := 'SFVec2f';
{ .AddField }
Script20.Field := field23;
field24 := TfieldNode.Create;
field24.NameField := 'geometry';
field24.AccessType := 'initializeOnly';
field24.Type := 'SFNode';
IndexedFaceSet25 := TIndexedFaceSetNode.Create;
IndexedFaceSet25 := IndexedFaceSet16;
{ .AddChildren }
field24.AddChildren([IndexedFaceSet25]);
{ .AddField }
Script20.Field := field24;
IS26 := TISNode.Create;
connect27 := TconnectNode.Create;
connect27.NodeField := 'cornerRadius';
connect27.ProtoField := 'cornerRadius';
{ .AddConnect }
IS26.Connect := connect27;
connect28 := TconnectNode.Create;
connect28.NodeField := 'size';
connect28.ProtoField := 'size';
{ .AddConnect }
IS26.Connect := connect28;
{ .SetIS }
Script20.IS := IS26;

Script20.SetSourceCode('''ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	var point         = new SFVec3f (cornerRadius, 0, 0);\n"+
"	var startRotation = new SFRotation ();\n"+
"	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);\n"+
"	var corner        = new MFVec3f ();\n"+
"	var coordIndex    = new MFInt32 ();\n"+
"	var points        = new MFVec3f ();\n"+
"\n"+
"	for (var i = 0; i < cornerDimension * 4; ++ i)\n"+
"		coordIndex [coordIndex .length] = i;\n"+
"\n"+
"	geometry .coordIndex = coordIndex;\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++i)\n"+
"		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);\n"+
"\n"+
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = corner [i] .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	geometry .coord .point = points;\n"+
"}''');
{ .AddChildren }
ProtoBody15.AddChildren([Script20]);
{ .SetProtoBody }
ProtoDeclare10.ProtoBody := ProtoBody15;
{ .AddChildren }
Group9.AddChildren([ProtoDeclare10]);
ProtoDeclare29 := TProtoDeclareNode.Create;
ProtoDeclare29.NameField := 'Widget';
ProtoInterface30 := TProtoInterfaceNode.Create;
field31 := TfieldNode.Create;
field31.NameField := 'fillColor';
field31.AccessType := 'inputOutput';
field31.Type := 'SFColor';
field31.Value := '0.1 0.1 0.1';
{ .AddField }
ProtoInterface30.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'lineColor';
field32.AccessType := 'inputOutput';
field32.Type := 'SFColor';
field32.Value := '0.4 0.4 0.4';
{ .AddField }
ProtoInterface30.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'linewidthScaleFactor';
field33.AccessType := 'inputOutput';
field33.Type := 'SFFloat';
field33.Value := '1';
{ .AddField }
ProtoInterface30.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'geometry';
field34.AccessType := 'inputOutput';
field34.Type := 'SFNode';
{ .AddField }
ProtoInterface30.Field := field34;
{ .SetProtoInterface }
ProtoDeclare29.ProtoInterface := ProtoInterface30;
ProtoBody35 := TProtoBodyNode.Create;
Transform36 := TTransformNode.Create;
Shape37 := TShapeNode.Create;
IS38 := TISNode.Create;
connect39 := TconnectNode.Create;
connect39.NodeField := 'geometry';
connect39.ProtoField := 'geometry';
{ .AddConnect }
IS38.Connect := connect39;
{ .SetIS }
Shape37.IS := IS38;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
IS42 := TISNode.Create;
connect43 := TconnectNode.Create;
connect43.NodeField := 'diffuseColor';
connect43.ProtoField := 'fillColor';
{ .AddConnect }
IS42.Connect := connect43;
{ .SetIS }
Material41.IS := IS42;
{ .SetMaterial }
Appearance40.Material := Material41;
{ .SetAppearance }
Shape37.Appearance := Appearance40;
{ .AddChild }
Transform36.AddChildren([Shape37]);
Shape44 := TShapeNode.Create;
IS45 := TISNode.Create;
connect46 := TconnectNode.Create;
connect46.NodeField := 'geometry';
connect46.ProtoField := 'geometry';
{ .AddConnect }
IS45.Connect := connect46;
{ .SetIS }
Shape44.IS := IS45;
Appearance47 := TAppearanceNode.Create;
FillProperties48 := TFillPropertiesNode.Create;
FillProperties48.Filled := False;
FillProperties48.Hatched := False;
{ .SetFillProperties }
Appearance47.FillProperties := FillProperties48;
LineProperties49 := TLinePropertiesNode.Create;
IS50 := TISNode.Create;
connect51 := TconnectNode.Create;
connect51.NodeField := 'linewidthScaleFactor';
connect51.ProtoField := 'linewidthScaleFactor';
{ .AddConnect }
IS50.Connect := connect51;
{ .SetIS }
LineProperties49.IS := IS50;
{ .SetLineProperties }
Appearance47.LineProperties := LineProperties49;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(0,0,0);
IS53 := TISNode.Create;
connect54 := TconnectNode.Create;
connect54.NodeField := 'emissiveColor';
connect54.ProtoField := 'lineColor';
{ .AddConnect }
IS53.Connect := connect54;
{ .SetIS }
Material52.IS := IS53;
{ .SetMaterial }
Appearance47.Material := Material52;
{ .SetAppearance }
Shape44.Appearance := Appearance47;
{ .AddChild }
Transform36.AddChildren([Shape44]);
{ .AddChildren }
ProtoBody35.AddChildren([Transform36]);
{ .SetProtoBody }
ProtoDeclare29.ProtoBody := ProtoBody35;
{ .AddChildren }
Group9.AddChildren([ProtoDeclare29]);
ProtoDeclare55 := TProtoDeclareNode.Create;
ProtoDeclare55.NameField := 'Node';
ProtoInterface56 := TProtoInterfaceNode.Create;
field57 := TfieldNode.Create;
field57.NameField := 'translation';
field57.AccessType := 'inputOutput';
field57.Type := 'SFVec3f';
{ .AddField }
ProtoInterface56.Field := field57;
{ .SetProtoInterface }
ProtoDeclare55.ProtoInterface := ProtoInterface56;
ProtoBody58 := TProtoBodyNode.Create;
Group59 := TGroupNode.Create;
PlaneSensor60 := TPlaneSensorNode.Create;
{ .AddChildren }
Group59.AddChildren([PlaneSensor60]);
Transform61 := TTransformNode.Create;
IS62 := TISNode.Create;
connect63 := TconnectNode.Create;
connect63.NodeField := 'translation';
connect63.ProtoField := 'translation';
{ .AddConnect }
IS62.Connect := connect63;
{ .SetIS }
Transform61.IS := IS62;
ProtoInstance64 := TProtoInstanceNode.Create;
ProtoInstance64.NameField := 'Widget';
fieldValue65 := TfieldValueNode.Create;
fieldValue65.NameField := 'geometry';
ProtoInstance66 := TProtoInstanceNode.Create;
ProtoInstance66.NameField := 'RoundedRectangle2D';
fieldValue67 := TfieldValueNode.Create;
fieldValue67.NameField := 'cornerRadius';
fieldValue67.Value := '0.12';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue67;
fieldValue68 := TfieldValueNode.Create;
fieldValue68.NameField := 'size';
fieldValue68.Value := '2 1';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue68;
{ .AddChildren }
fieldValue65.AddChildren([ProtoInstance66]);
{ .AddFieldValue }
ProtoInstance64.FieldValue := fieldValue65;
{ .AddChildren }
Transform61.AddChildren([ProtoInstance64]);
Transform69 := TTransformNode.Create;
Transform69.Translation := Vector3(-1,0,0);
ProtoInstance70 := TProtoInstanceNode.Create;
ProtoInstance70.NameField := 'Widget';
fieldValue71 := TfieldValueNode.Create;
fieldValue71.NameField := 'lineColor';
fieldValue71.Value := '0.72 0.14 0.23';
{ .AddFieldValue }
ProtoInstance70.FieldValue := fieldValue71;
fieldValue72 := TfieldValueNode.Create;
fieldValue72.NameField := 'geometry';
Disk2D73 := TDisk2DNode.Create;
Disk2D73.OuterRadius := 0.2;
{ .AddChildren }
fieldValue72.AddChildren([Disk2D73]);
{ .AddFieldValue }
ProtoInstance70.FieldValue := fieldValue72;
{ .AddChildren }
Transform69.AddChildren([ProtoInstance70]);
{ .AddChildren }
Transform61.AddChildren([Transform69]);
Transform74 := TTransformNode.Create;
Transform74.Translation := Vector3(1,0,0);
ProtoInstance75 := TProtoInstanceNode.Create;
ProtoInstance75.NameField := 'Widget';
fieldValue76 := TfieldValueNode.Create;
fieldValue76.NameField := 'lineColor';
fieldValue76.Value := '0.44 0.5 0.72';
{ .AddFieldValue }
ProtoInstance75.FieldValue := fieldValue76;
fieldValue77 := TfieldValueNode.Create;
fieldValue77.NameField := 'geometry';
Disk2D78 := TDisk2DNode.Create;
Disk2D78 := Disk2D73;
{ .AddChildren }
fieldValue77.AddChildren([Disk2D78]);
{ .AddFieldValue }
ProtoInstance75.FieldValue := fieldValue77;
{ .AddChildren }
Transform74.AddChildren([ProtoInstance75]);
{ .AddChildren }
Transform61.AddChildren([Transform74]);
{ .AddChildren }
Group59.AddChildren([Transform61]);
{ .AddChildren }
ProtoBody58.AddChildren([Group59]);
Script79 := TScriptNode.Create;
Script79.DirectOutput := True;
field80 := TfieldNode.Create;
field80.NameField := 'translation';
field80.AccessType := 'inputOutput';
field80.Type := 'SFVec3f';
{ .AddField }
Script79.Field := field80;
field81 := TfieldNode.Create;
field81.NameField := 'sensor';
field81.AccessType := 'initializeOnly';
field81.Type := 'SFNode';
PlaneSensor82 := TPlaneSensorNode.Create;
PlaneSensor82 := PlaneSensor60;
{ .AddChildren }
field81.AddChildren([PlaneSensor82]);
{ .AddField }
Script79.Field := field81;
field83 := TfieldNode.Create;
field83.NameField := 'transform';
field83.AccessType := 'initializeOnly';
field83.Type := 'SFNode';
Transform84 := TTransformNode.Create;
Transform84 := Transform61;
{ .AddChildren }
field83.AddChildren([Transform84]);
{ .AddField }
Script79.Field := field83;
IS85 := TISNode.Create;
connect86 := TconnectNode.Create;
connect86.NodeField := 'translation';
connect86.ProtoField := 'translation';
{ .AddConnect }
IS85.Connect := connect86;
{ .SetIS }
Script79.IS := IS85;

Script79.SetSourceCode('''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}''');
{ .AddChildren }
ProtoBody58.AddChildren([Script79]);
ProtoBody58.AddRoute(PlaneSensor60.EventTranslation_changed, Transform61.FdTranslation);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare55.ProtoBody := ProtoBody58;
{ .AddChildren }
Group9.AddChildren([ProtoDeclare55]);
ProtoDeclare88 := TProtoDeclareNode.Create;
ProtoDeclare88.NameField := 'Route';
ProtoInterface89 := TProtoInterfaceNode.Create;
field90 := TfieldNode.Create;
field90.NameField := 'lineColor';
field90.AccessType := 'inputOutput';
field90.Type := 'SFColor';
field90.Value := '0.43 0.43 0.98';
{ .AddField }
ProtoInterface89.Field := field90;
field91 := TfieldNode.Create;
field91.NameField := 'linewidthScaleFactor';
field91.AccessType := 'inputOutput';
field91.Type := 'SFFloat';
field91.Value := '2';
{ .AddField }
ProtoInterface89.Field := field91;
field92 := TfieldNode.Create;
field92.NameField := 'output';
field92.AccessType := 'initializeOnly';
field92.Type := 'SFNode';
{ .AddField }
ProtoInterface89.Field := field92;
field93 := TfieldNode.Create;
field93.NameField := 'input';
field93.AccessType := 'initializeOnly';
field93.Type := 'SFNode';
{ .AddField }
ProtoInterface89.Field := field93;
{ .SetProtoInterface }
ProtoDeclare88.ProtoInterface := ProtoInterface89;
ProtoBody94 := TProtoBodyNode.Create;
Shape95 := TShapeNode.Create;
Appearance96 := TAppearanceNode.Create;
LineProperties97 := TLinePropertiesNode.Create;
IS98 := TISNode.Create;
connect99 := TconnectNode.Create;
connect99.NodeField := 'linewidthScaleFactor';
connect99.ProtoField := 'linewidthScaleFactor';
{ .AddConnect }
IS98.Connect := connect99;
{ .SetIS }
LineProperties97.IS := IS98;
{ .SetLineProperties }
Appearance96.LineProperties := LineProperties97;
Material100 := TMaterialNode.Create;
Material100.DiffuseColor := Vector3(0,0,0);
IS101 := TISNode.Create;
connect102 := TconnectNode.Create;
connect102.NodeField := 'emissiveColor';
connect102.ProtoField := 'lineColor';
{ .AddConnect }
IS101.Connect := connect102;
{ .SetIS }
Material100.IS := IS101;
{ .SetMaterial }
Appearance96.Material := Material100;
{ .SetAppearance }
Shape95.Appearance := Appearance96;
LineSet103 := TLineSetNode.Create;
LineSet103.SetVertexCount([2]);
Coordinate104 := TCoordinateNode.Create;
Coordinate104.SetPoint([Vector3(-1,0,0),Vector3(1,0,0)]);
{ .SetCoord }
LineSet103.Coord := Coordinate104;
{ .SetGeometry }
Shape95.Geometry := LineSet103;
{ .AddChildren }
ProtoBody94.AddChildren([Shape95]);
Script105 := TScriptNode.Create;
Script105.DirectOutput := True;
field106 := TfieldNode.Create;
field106.NameField := 'set_translation';
field106.AccessType := 'inputOnly';
field106.Type := 'SFVec3f';
{ .AddField }
Script105.Field := field106;
field107 := TfieldNode.Create;
field107.NameField := 'routeDimension';
field107.AccessType := 'initializeOnly';
field107.Type := 'SFInt32';
field107.Value := '21';
{ .AddField }
Script105.Field := field107;
field108 := TfieldNode.Create;
field108.NameField := 'output';
field108.AccessType := 'initializeOnly';
field108.Type := 'SFNode';
{ .AddField }
Script105.Field := field108;
field109 := TfieldNode.Create;
field109.NameField := 'input';
field109.AccessType := 'initializeOnly';
field109.Type := 'SFNode';
{ .AddField }
Script105.Field := field109;
field110 := TfieldNode.Create;
field110.NameField := 'geometry';
field110.AccessType := 'initializeOnly';
field110.Type := 'SFNode';
LineSet111 := TLineSetNode.Create;
LineSet111 := LineSet103;
{ .AddChildren }
field110.AddChildren([LineSet111]);
{ .AddField }
Script105.Field := field110;
field112 := TfieldNode.Create;
field112.NameField := 'self';
field112.AccessType := 'initializeOnly';
field112.Type := 'SFNode';
Script113 := TScriptNode.Create;
Script113 := Script105;
{ .AddChildren }
field112.AddChildren([Script113]);
{ .AddField }
Script105.Field := field112;
IS114 := TISNode.Create;
connect115 := TconnectNode.Create;
connect115.NodeField := 'output';
connect115.ProtoField := 'output';
{ .AddConnect }
IS114.Connect := connect115;
connect116 := TconnectNode.Create;
connect116.NodeField := 'input';
connect116.ProtoField := 'input';
{ .AddConnect }
IS114.Connect := connect116;
{ .SetIS }
Script105.IS := IS114;

Script105.SetSourceCode('''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .addRoute (output, 'translation_changed', self, 'set_translation');\n"+
"	Browser .addRoute (input,  'translation_changed', self, 'set_translation');\n"+
"\n"+
"	set_translation ();\n"+
"}\n"+
"\n"+
"function set_translation ()\n"+
"{\n"+
"	geometry .vertexCount [0] = routeDimension;\n"+
"\n"+
"	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));\n"+
"	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));\n"+
"\n"+
"	var w = inPoint .x - outPoint .x;\n"+
"	var h = outPoint .y - inPoint .y;\n"+
"\n"+
"	for (var i = 0; i < routeDimension; ++ i)\n"+
"	{\n"+
"		var t = i / (routeDimension - 1);\n"+
"		var y = h / 2 * (Math .cos (t * Math .PI) - 1);\n"+
"\n"+
"		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));\n"+
"	}\n"+
"}''');
{ .AddChildren }
ProtoBody94.AddChildren([Script105]);
{ .SetProtoBody }
ProtoDeclare88.ProtoBody := ProtoBody94;
{ .AddChildren }
Group9.AddChildren([ProtoDeclare88]);
NavigationInfo117 := TNavigationInfoNode.Create;
NavigationInfo117.SetType(['FLY','ANY']);
{ .AddChildren }
Group9.AddChildren([NavigationInfo117]);
Background118 := TBackgroundNode.Create;
Background118.SetSkyColor([Vector3(0.2,0.2,0.2)]);
{ .AddChildren }
Group9.AddChildren([Background118]);
OrthoViewpoint119 := TOrthoViewpointNode.Create;
OrthoViewpoint119.Description := 'OthoViewpoint';
OrthoViewpoint119.Position := Vector3(-3.13496,-4.19776,10);
OrthoViewpoint119.CenterOfRotation := Vector3(-3.13496,-4.19776,0);
OrthoViewpoint119.SetFieldOfView([0,0,10,10]);
{ .AddChildren }
Group9.AddChildren([OrthoViewpoint119]);
Viewpoint120 := TViewpointNode.Create;
Viewpoint120.Description := 'Viewpoint';
{ .AddChildren }
Group9.AddChildren([Viewpoint120]);
Transform121 := TTransformNode.Create;
ProtoInstance122 := TProtoInstanceNode.Create;
ProtoInstance122.NameField := 'Route';
fieldValue123 := TfieldValueNode.Create;
fieldValue123.NameField := 'output';
ProtoInstance124 := TProtoInstanceNode.Create;
ProtoInstance124.NameField := 'Node';
fieldValue125 := TfieldValueNode.Create;
fieldValue125.NameField := 'translation';
fieldValue125.Value := '-3.98323 2.88948 0';
{ .AddFieldValue }
ProtoInstance124.FieldValue := fieldValue125;
{ .AddChildren }
fieldValue123.AddChildren([ProtoInstance124]);
{ .AddFieldValue }
ProtoInstance122.FieldValue := fieldValue123;
fieldValue126 := TfieldValueNode.Create;
fieldValue126.NameField := 'input';
ProtoInstance127 := TProtoInstanceNode.Create;
ProtoInstance127.NameField := 'Node';
fieldValue128 := TfieldValueNode.Create;
fieldValue128.NameField := 'translation';
fieldValue128.Value := '-0.0890862 2.96049 0';
{ .AddFieldValue }
ProtoInstance127.FieldValue := fieldValue128;
{ .AddChildren }
fieldValue126.AddChildren([ProtoInstance127]);
{ .AddFieldValue }
ProtoInstance122.FieldValue := fieldValue126;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance122]);
ProtoInstance129 := TProtoInstanceNode.Create;
ProtoInstance129.NameField := 'Route';
fieldValue130 := TfieldValueNode.Create;
fieldValue130.NameField := 'output';
ProtoInstance131 := TProtoInstanceNode.Create;
ProtoInstance131.NameField := 'Node';
ProtoInstance131 := ProtoInstance124;
{ .AddChildren }
fieldValue130.AddChildren([ProtoInstance131]);
{ .AddFieldValue }
ProtoInstance129.FieldValue := fieldValue130;
fieldValue132 := TfieldValueNode.Create;
fieldValue132.NameField := 'input';
ProtoInstance133 := TProtoInstanceNode.Create;
ProtoInstance133.NameField := 'Node';
fieldValue134 := TfieldValueNode.Create;
fieldValue134.NameField := 'translation';
fieldValue134.Value := '-0.104169 1.16371 0';
{ .AddFieldValue }
ProtoInstance133.FieldValue := fieldValue134;
{ .AddChildren }
fieldValue132.AddChildren([ProtoInstance133]);
{ .AddFieldValue }
ProtoInstance129.FieldValue := fieldValue132;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance129]);
ProtoInstance135 := TProtoInstanceNode.Create;
ProtoInstance135.NameField := 'Route';
fieldValue136 := TfieldValueNode.Create;
fieldValue136.NameField := 'output';
ProtoInstance137 := TProtoInstanceNode.Create;
ProtoInstance137.NameField := 'Node';
ProtoInstance137 := ProtoInstance124;
{ .AddChildren }
fieldValue136.AddChildren([ProtoInstance137]);
{ .AddFieldValue }
ProtoInstance135.FieldValue := fieldValue136;
fieldValue138 := TfieldValueNode.Create;
fieldValue138.NameField := 'input';
ProtoInstance139 := TProtoInstanceNode.Create;
ProtoInstance139.NameField := 'Node';
fieldValue140 := TfieldValueNode.Create;
fieldValue140.NameField := 'translation';
fieldValue140.Value := '-0.0998688 -0.40172 0';
{ .AddFieldValue }
ProtoInstance139.FieldValue := fieldValue140;
{ .AddChildren }
fieldValue138.AddChildren([ProtoInstance139]);
{ .AddFieldValue }
ProtoInstance135.FieldValue := fieldValue138;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance135]);
ProtoInstance141 := TProtoInstanceNode.Create;
ProtoInstance141.NameField := 'Route';
fieldValue142 := TfieldValueNode.Create;
fieldValue142.NameField := 'output';
ProtoInstance143 := TProtoInstanceNode.Create;
ProtoInstance143.NameField := 'Node';
ProtoInstance143 := ProtoInstance124;
{ .AddChildren }
fieldValue142.AddChildren([ProtoInstance143]);
{ .AddFieldValue }
ProtoInstance141.FieldValue := fieldValue142;
fieldValue144 := TfieldValueNode.Create;
fieldValue144.NameField := 'input';
ProtoInstance145 := TProtoInstanceNode.Create;
ProtoInstance145.NameField := 'Node';
fieldValue146 := TfieldValueNode.Create;
fieldValue146.NameField := 'translation';
fieldValue146.Value := '-0.0998687 -2.14742 0';
{ .AddFieldValue }
ProtoInstance145.FieldValue := fieldValue146;
{ .AddChildren }
fieldValue144.AddChildren([ProtoInstance145]);
{ .AddFieldValue }
ProtoInstance141.FieldValue := fieldValue144;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance141]);
ProtoInstance147 := TProtoInstanceNode.Create;
ProtoInstance147.NameField := 'Route';
fieldValue148 := TfieldValueNode.Create;
fieldValue148.NameField := 'output';
ProtoInstance149 := TProtoInstanceNode.Create;
ProtoInstance149.NameField := 'Node';
ProtoInstance149 := ProtoInstance127;
{ .AddChildren }
fieldValue148.AddChildren([ProtoInstance149]);
{ .AddFieldValue }
ProtoInstance147.FieldValue := fieldValue148;
fieldValue150 := TfieldValueNode.Create;
fieldValue150.NameField := 'input';
ProtoInstance151 := TProtoInstanceNode.Create;
ProtoInstance151.NameField := 'Node';
fieldValue152 := TfieldValueNode.Create;
fieldValue152.NameField := 'translation';
fieldValue152.Value := '3.55694 2.4116 0';
{ .AddFieldValue }
ProtoInstance151.FieldValue := fieldValue152;
{ .AddChildren }
fieldValue150.AddChildren([ProtoInstance151]);
{ .AddFieldValue }
ProtoInstance147.FieldValue := fieldValue150;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance147]);
ProtoInstance153 := TProtoInstanceNode.Create;
ProtoInstance153.NameField := 'Route';
fieldValue154 := TfieldValueNode.Create;
fieldValue154.NameField := 'output';
ProtoInstance155 := TProtoInstanceNode.Create;
ProtoInstance155.NameField := 'Node';
ProtoInstance155 := ProtoInstance133;
{ .AddChildren }
fieldValue154.AddChildren([ProtoInstance155]);
{ .AddFieldValue }
ProtoInstance153.FieldValue := fieldValue154;
fieldValue156 := TfieldValueNode.Create;
fieldValue156.NameField := 'input';
ProtoInstance157 := TProtoInstanceNode.Create;
ProtoInstance157.NameField := 'Node';
ProtoInstance157 := ProtoInstance151;
{ .AddChildren }
fieldValue156.AddChildren([ProtoInstance157]);
{ .AddFieldValue }
ProtoInstance153.FieldValue := fieldValue156;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance153]);
ProtoInstance158 := TProtoInstanceNode.Create;
ProtoInstance158.NameField := 'Route';
fieldValue159 := TfieldValueNode.Create;
fieldValue159.NameField := 'output';
ProtoInstance160 := TProtoInstanceNode.Create;
ProtoInstance160.NameField := 'Node';
ProtoInstance160 := ProtoInstance139;
{ .AddChildren }
fieldValue159.AddChildren([ProtoInstance160]);
{ .AddFieldValue }
ProtoInstance158.FieldValue := fieldValue159;
fieldValue161 := TfieldValueNode.Create;
fieldValue161.NameField := 'input';
ProtoInstance162 := TProtoInstanceNode.Create;
ProtoInstance162.NameField := 'Node';
fieldValue163 := TfieldValueNode.Create;
fieldValue163.NameField := 'translation';
fieldValue163.Value := '3.75106 -0.0794556 0';
{ .AddFieldValue }
ProtoInstance162.FieldValue := fieldValue163;
{ .AddChildren }
fieldValue161.AddChildren([ProtoInstance162]);
{ .AddFieldValue }
ProtoInstance158.FieldValue := fieldValue161;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance158]);
ProtoInstance164 := TProtoInstanceNode.Create;
ProtoInstance164.NameField := 'Route';
fieldValue165 := TfieldValueNode.Create;
fieldValue165.NameField := 'output';
ProtoInstance166 := TProtoInstanceNode.Create;
ProtoInstance166.NameField := 'Node';
ProtoInstance166 := ProtoInstance145;
{ .AddChildren }
fieldValue165.AddChildren([ProtoInstance166]);
{ .AddFieldValue }
ProtoInstance164.FieldValue := fieldValue165;
fieldValue167 := TfieldValueNode.Create;
fieldValue167.NameField := 'input';
ProtoInstance168 := TProtoInstanceNode.Create;
ProtoInstance168.NameField := 'Node';
ProtoInstance168 := ProtoInstance162;
{ .AddChildren }
fieldValue167.AddChildren([ProtoInstance168]);
{ .AddFieldValue }
ProtoInstance164.FieldValue := fieldValue167;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance164]);
ProtoInstance169 := TProtoInstanceNode.Create;
ProtoInstance169.NameField := 'Route';
fieldValue170 := TfieldValueNode.Create;
fieldValue170.NameField := 'output';
ProtoInstance171 := TProtoInstanceNode.Create;
ProtoInstance171.NameField := 'Node';
ProtoInstance171 := ProtoInstance151;
{ .AddChildren }
fieldValue170.AddChildren([ProtoInstance171]);
{ .AddFieldValue }
ProtoInstance169.FieldValue := fieldValue170;
fieldValue172 := TfieldValueNode.Create;
fieldValue172.NameField := 'input';
ProtoInstance173 := TProtoInstanceNode.Create;
ProtoInstance173.NameField := 'Node';
fieldValue174 := TfieldValueNode.Create;
fieldValue174.NameField := 'translation';
fieldValue174.Value := '7.68077 1.21228 0';
{ .AddFieldValue }
ProtoInstance173.FieldValue := fieldValue174;
{ .AddChildren }
fieldValue172.AddChildren([ProtoInstance173]);
{ .AddFieldValue }
ProtoInstance169.FieldValue := fieldValue172;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance169]);
ProtoInstance175 := TProtoInstanceNode.Create;
ProtoInstance175.NameField := 'Route';
fieldValue176 := TfieldValueNode.Create;
fieldValue176.NameField := 'output';
ProtoInstance177 := TProtoInstanceNode.Create;
ProtoInstance177.NameField := 'Node';
ProtoInstance177 := ProtoInstance162;
{ .AddChildren }
fieldValue176.AddChildren([ProtoInstance177]);
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue176;
fieldValue178 := TfieldValueNode.Create;
fieldValue178.NameField := 'input';
ProtoInstance179 := TProtoInstanceNode.Create;
ProtoInstance179.NameField := 'Node';
ProtoInstance179 := ProtoInstance173;
{ .AddChildren }
fieldValue178.AddChildren([ProtoInstance179]);
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue178;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance175]);
ProtoInstance180 := TProtoInstanceNode.Create;
ProtoInstance180.NameField := 'Node';
ProtoInstance180 := ProtoInstance124;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance180]);
ProtoInstance181 := TProtoInstanceNode.Create;
ProtoInstance181.NameField := 'Node';
ProtoInstance181 := ProtoInstance127;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance181]);
ProtoInstance182 := TProtoInstanceNode.Create;
ProtoInstance182.NameField := 'Node';
ProtoInstance182 := ProtoInstance133;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance182]);
ProtoInstance183 := TProtoInstanceNode.Create;
ProtoInstance183.NameField := 'Node';
ProtoInstance183 := ProtoInstance139;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance183]);
ProtoInstance184 := TProtoInstanceNode.Create;
ProtoInstance184.NameField := 'Node';
ProtoInstance184 := ProtoInstance145;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance184]);
ProtoInstance185 := TProtoInstanceNode.Create;
ProtoInstance185.NameField := 'Node';
ProtoInstance185 := ProtoInstance151;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance185]);
ProtoInstance186 := TProtoInstanceNode.Create;
ProtoInstance186.NameField := 'Node';
ProtoInstance186 := ProtoInstance162;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance186]);
ProtoInstance187 := TProtoInstanceNode.Create;
ProtoInstance187.NameField := 'Node';
ProtoInstance187 := ProtoInstance173;
{ .AddChildren }
Transform121.AddChildren([ProtoInstance187]);
{ .AddChildren }
Group9.AddChildren([Transform121]);
{ .AddGroup }
X3D0.AddChildren([Group9]);
Result := X3D0;
end;
