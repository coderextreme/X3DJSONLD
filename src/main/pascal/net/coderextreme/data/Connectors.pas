unit Connectors;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateConnectors: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group9: TGroupNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
SFFloat12: TSFFloat;
SFVec2f13: TSFVec2f;
SFBool14: TSFBool;
X3DPrototype15: TX3DPrototype;
IndexedFaceSet16: TIndexedFaceSetNode;
IS17: TIS;
connect18: Tconnect;
Coordinate19: TCoordinateNode;
Script20: TScriptNode;
SFFloat21: TSFFloat;
SFFloat22: TSFFloat;
SFVec2f23: TSFVec2f;
SFNode24: TSFNode;
IndexedFaceSet25: TIndexedFaceSetNode;
IS26: TIS;
connect27: Tconnect;
connect28: Tconnect;
X3DPrototype29: TX3DPrototype;
X3DInterfaceDeclaration30: TX3DInterfaceDeclaration;
SFColor31: TSFColor;
SFColor32: TSFColor;
SFFloat33: TSFFloat;
SFNode34: TSFNode;
X3DPrototype35: TX3DPrototype;
Transform36: TTransformNode;
Shape37: TShapeNode;
IS38: TIS;
connect39: Tconnect;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
IS42: TIS;
connect43: Tconnect;
Shape44: TShapeNode;
IS45: TIS;
connect46: Tconnect;
Appearance47: TAppearanceNode;
FillProperties48: TFillPropertiesNode;
LineProperties49: TLinePropertiesNode;
IS50: TIS;
connect51: Tconnect;
Material52: TMaterialNode;
IS53: TIS;
connect54: Tconnect;
X3DPrototype55: TX3DPrototype;
X3DInterfaceDeclaration56: TX3DInterfaceDeclaration;
SFVec3f57: TSFVec3f;
X3DPrototype58: TX3DPrototype;
Group59: TGroupNode;
PlaneSensor60: TPlaneSensorNode;
Transform61: TTransformNode;
IS62: TIS;
connect63: Tconnect;
X3DPrototype64: TX3DPrototypeNode;
SFNode65: TSFNode;
X3DPrototype66: TX3DPrototypeNode;
SFFloat67: TSFFloat;
SFVec2f68: TSFVec2f;
Transform69: TTransformNode;
X3DPrototype70: TX3DPrototypeNode;
SFColor71: TSFColor;
SFNode72: TSFNode;
Disk2D73: TDisk2DNode;
Transform74: TTransformNode;
X3DPrototype75: TX3DPrototypeNode;
SFColor76: TSFColor;
SFNode77: TSFNode;
Disk2D78: TDisk2DNode;
Script79: TScriptNode;
SFVec3f80: TSFVec3f;
SFNode81: TSFNode;
PlaneSensor82: TPlaneSensorNode;
SFNode83: TSFNode;
Transform84: TTransformNode;
IS85: TIS;
connect86: Tconnect;
X3DPrototype88: TX3DPrototype;
X3DInterfaceDeclaration89: TX3DInterfaceDeclaration;
SFColor90: TSFColor;
SFFloat91: TSFFloat;
SFNode92: TSFNode;
SFNode93: TSFNode;
X3DPrototype94: TX3DPrototype;
Shape95: TShapeNode;
Appearance96: TAppearanceNode;
LineProperties97: TLinePropertiesNode;
IS98: TIS;
connect99: Tconnect;
Material100: TMaterialNode;
IS101: TIS;
connect102: Tconnect;
LineSet103: TLineSetNode;
Coordinate104: TCoordinateNode;
Script105: TScriptNode;
SFVec3f106: TSFVec3f;
SFInt32107: TSFInt32;
SFNode108: TSFNode;
SFNode109: TSFNode;
SFNode110: TSFNode;
LineSet111: TLineSetNode;
SFNode112: TSFNode;
Script113: TScriptNode;
IS114: TIS;
connect115: Tconnect;
connect116: Tconnect;
NavigationInfo117: TNavigationInfoNode;
Background118: TBackgroundNode;
OrthoViewpoint119: TOrthoViewpointNode;
Viewpoint120: TViewpointNode;
Transform121: TTransformNode;
X3DPrototype122: TX3DPrototypeNode;
SFNode123: TSFNode;
X3DPrototype124: TX3DPrototypeNode;
SFVec3f125: TSFVec3f;
SFNode126: TSFNode;
X3DPrototype127: TX3DPrototypeNode;
SFVec3f128: TSFVec3f;
X3DPrototype129: TX3DPrototypeNode;
SFNode130: TSFNode;
X3DPrototype131: TX3DPrototypeNode;
SFNode132: TSFNode;
X3DPrototype133: TX3DPrototypeNode;
SFVec3f134: TSFVec3f;
X3DPrototype135: TX3DPrototypeNode;
SFNode136: TSFNode;
X3DPrototype137: TX3DPrototypeNode;
SFNode138: TSFNode;
X3DPrototype139: TX3DPrototypeNode;
SFVec3f140: TSFVec3f;
X3DPrototype141: TX3DPrototypeNode;
SFNode142: TSFNode;
X3DPrototype143: TX3DPrototypeNode;
SFNode144: TSFNode;
X3DPrototype145: TX3DPrototypeNode;
SFVec3f146: TSFVec3f;
X3DPrototype147: TX3DPrototypeNode;
SFNode148: TSFNode;
X3DPrototype149: TX3DPrototypeNode;
SFNode150: TSFNode;
X3DPrototype151: TX3DPrototypeNode;
SFVec3f152: TSFVec3f;
X3DPrototype153: TX3DPrototypeNode;
SFNode154: TSFNode;
X3DPrototype155: TX3DPrototypeNode;
SFNode156: TSFNode;
X3DPrototype157: TX3DPrototypeNode;
X3DPrototype158: TX3DPrototypeNode;
SFNode159: TSFNode;
X3DPrototype160: TX3DPrototypeNode;
SFNode161: TSFNode;
X3DPrototype162: TX3DPrototypeNode;
SFVec3f163: TSFVec3f;
X3DPrototype164: TX3DPrototypeNode;
SFNode165: TSFNode;
X3DPrototype166: TX3DPrototypeNode;
SFNode167: TSFNode;
X3DPrototype168: TX3DPrototypeNode;
X3DPrototype169: TX3DPrototypeNode;
SFNode170: TSFNode;
X3DPrototype171: TX3DPrototypeNode;
SFNode172: TSFNode;
X3DPrototype173: TX3DPrototypeNode;
SFVec3f174: TSFVec3f;
X3DPrototype175: TX3DPrototypeNode;
SFNode176: TSFNode;
X3DPrototype177: TX3DPrototypeNode;
SFNode178: TSFNode;
X3DPrototype179: TX3DPrototypeNode;
X3DPrototype180: TX3DPrototypeNode;
X3DPrototype181: TX3DPrototypeNode;
X3DPrototype182: TX3DPrototypeNode;
X3DPrototype183: TX3DPrototypeNode;
X3DPrototype184: TX3DPrototypeNode;
X3DPrototype185: TX3DPrototypeNode;
X3DPrototype186: TX3DPrototypeNode;
X3DPrototype187: TX3DPrototypeNode;

procedure InitConnectorsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['comment'] := 'World of Titania';
{ METHOD .Meta }
X3D0.Meta['created'] := 'Fri, 04 Sep 2015 10:19:01 GMT';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Holger Seelig';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Titania V3.0.4, https://titania.create3000.de';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'Tue, 25 Jul 2017 09:42:17 GMT';
{ METHOD .Meta }
X3D0.Meta['title'] := 'Connectors';
{ METHOD .Meta }
{ METHOD .Head }
Group9 := TGroupNode.Create;
X3DPrototype10 := TX3DPrototype.Create;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
SFFloat12 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration11, false, 'cornerRadius');
SFFloat12.Value := '1';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration11.AddSFFloat([SFFloat12]);
SFVec2f13 := TSFVec2f.CreateUndefined(X3DInterfaceDeclaration11, false, 'size');
SFVec2f13.Value := '2 2';
{ METHOD .AddSFVec2f }
X3DInterfaceDeclaration11.AddSFVec2f([SFVec2f13]);
SFBool14 := TSFBool.CreateUndefined(X3DInterfaceDeclaration11, false, 'solid');
SFBool14.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration11.AddSFBool([SFBool14]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype15 := TX3DPrototype.Create;
IndexedFaceSet16 := TIndexedFaceSetNode.Create;
IS17 := TIS.Create;
connect18 := Tconnect.Create;
connect18.NodeField := 'solid';
connect18.ProtoField := 'solid';
{ METHOD .Connect }
IS17.Connect := connect18;
{ METHOD .IS }
IndexedFaceSet16.IS := IS17;
Coordinate19 := TCoordinateNode.Create;
{ METHOD .Coord }
IndexedFaceSet16.Coord := Coordinate19;
{ METHOD .AddIndexedFaceSet }
X3DPrototype15.AddIndexedFaceSet([IndexedFaceSet16]);
Script20 := TScriptNode.Create;
Script20.DirectOutput := True;
SFFloat21 := TSFFloat.CreateUndefined(Script20, false, 'cornerDimension');
SFFloat21.Value := '10';
{ METHOD .Fd.AddCustomField }
Script20.AddCustomField(SFFloat21);
end;

procedure InitConnectorsPart1;
begin

SFFloat22 := TSFFloat.CreateUndefined(Script20, false, 'cornerRadius');
{ METHOD .Fd.AddCustomField }
Script20.AddCustomField(SFFloat22);
SFVec2f23 := TSFVec2f.CreateUndefined(Script20, false, 'size');
{ METHOD .Fd.AddCustomField }
Script20.AddCustomField(SFVec2f23);
SFNode24 := TSFNode.CreateUndefined(Script20, false, 'geometry');
{ METHOD .AddIndexedFaceSet }
SFNode24.AddIndexedFaceSet([IndexedFaceSet16]);
{ METHOD .Fd.AddCustomField }
Script20.AddCustomField(SFNode24);
IS26 := TIS.Create;
connect27 := Tconnect.Create;
connect27.NodeField := 'cornerRadius';
connect27.ProtoField := 'cornerRadius';
{ METHOD .Connect }
IS26.Connect := connect27;
connect28 := Tconnect.Create;
connect28.NodeField := 'size';
connect28.ProtoField := 'size';
{ METHOD .Connect }
IS26.Connect := connect28;
{ METHOD .Fd.AddCustomField }
Script20.AddCustomField(IS26);

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
{ METHOD .AddScript }
X3DPrototype15.AddScript([Script20]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype15]);
{ METHOD .AddX3DPrototype }
Group9.AddX3DPrototype([X3DPrototype10]);
X3DPrototype29 := TX3DPrototype.Create;
X3DInterfaceDeclaration30 := TX3DInterfaceDeclaration.Create(nil);
SFColor31 := TSFColor.CreateUndefined(X3DInterfaceDeclaration30, false, 'fillColor');
SFColor31.Value := '0.1 0.1 0.1';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration30.AddSFColor([SFColor31]);
SFColor32 := TSFColor.CreateUndefined(X3DInterfaceDeclaration30, false, 'lineColor');
SFColor32.Value := '0.4 0.4 0.4';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration30.AddSFColor([SFColor32]);
SFFloat33 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration30, false, 'linewidthScaleFactor');
SFFloat33.Value := '1';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration30.AddSFFloat([SFFloat33]);
SFNode34 := TSFNode.CreateUndefined(X3DInterfaceDeclaration30, false, 'geometry');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration30.AddSFNode([SFNode34]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype29.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration30]);
X3DPrototype35 := TX3DPrototype.Create;
Transform36 := TTransformNode.Create;
Shape37 := TShapeNode.Create;
IS38 := TIS.Create;
connect39 := Tconnect.Create;
connect39.NodeField := 'geometry';
connect39.ProtoField := 'geometry';
{ METHOD .Connect }
IS38.Connect := connect39;
{ METHOD .IS }
Shape37.IS := IS38;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
IS42 := TIS.Create;
connect43 := Tconnect.Create;
connect43.NodeField := 'diffuseColor';
connect43.ProtoField := 'fillColor';
{ METHOD .Connect }
IS42.Connect := connect43;
{ METHOD .IS }
Material41.IS := IS42;
{ METHOD .SetMaterial }
Appearance40.Material := Material41;
{ METHOD .Appearance }
Shape37.Appearance := Appearance40;
{ METHOD .FdChildren.Add }
Transform36.FdChildren.Add(Shape37);
Shape44 := TShapeNode.Create;
IS45 := TIS.Create;
connect46 := Tconnect.Create;
connect46.NodeField := 'geometry';
connect46.ProtoField := 'geometry';
{ METHOD .Connect }
IS45.Connect := connect46;
{ METHOD .IS }
Shape44.IS := IS45;
Appearance47 := TAppearanceNode.Create;
FillProperties48 := TFillPropertiesNode.Create;
FillProperties48.Filled := False;
FillProperties48.Hatched := False;
{ METHOD .FillProperties }
Appearance47.FillProperties := FillProperties48;
LineProperties49 := TLinePropertiesNode.Create;
IS50 := TIS.Create;
connect51 := Tconnect.Create;
connect51.NodeField := 'linewidthScaleFactor';
connect51.ProtoField := 'linewidthScaleFactor';
{ METHOD .Connect }
IS50.Connect := connect51;
{ METHOD .IS }
LineProperties49.IS := IS50;
{ METHOD .LineProperties }
Appearance47.LineProperties := LineProperties49;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(0,0,0);
IS53 := TIS.Create;
connect54 := Tconnect.Create;
connect54.NodeField := 'emissiveColor';
connect54.ProtoField := 'lineColor';
{ METHOD .Connect }
IS53.Connect := connect54;
{ METHOD .IS }
Material52.IS := IS53;
{ METHOD .SetMaterial }
Appearance47.Material := Material52;
{ METHOD .Appearance }
Shape44.Appearance := Appearance47;
{ METHOD .FdChildren.Add }
Transform36.FdChildren.Add(Shape44);
{ METHOD .AddTransform }
X3DPrototype35.AddTransform([Transform36]);
{ METHOD .AddX3DPrototype }
X3DPrototype29.AddX3DPrototype([X3DPrototype35]);
{ METHOD .AddX3DPrototype }
Group9.AddX3DPrototype([X3DPrototype29]);
X3DPrototype55 := TX3DPrototype.Create;
X3DInterfaceDeclaration56 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f57 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration56, false, 'translation');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration56.AddSFVec3f([SFVec3f57]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype55.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration56]);
X3DPrototype58 := TX3DPrototype.Create;
Group59 := TGroupNode.Create;
PlaneSensor60 := TPlaneSensorNode.Create;
{ METHOD .FdChildren.Add }
Group59.FdChildren.Add(PlaneSensor60);
Transform61 := TTransformNode.Create;
IS62 := TIS.Create;
connect63 := Tconnect.Create;
connect63.NodeField := 'translation';
connect63.ProtoField := 'translation';
{ METHOD .Connect }
IS62.Connect := connect63;
{ METHOD .IS }
Transform61.IS := IS62;
X3DPrototype64 := TX3DPrototypeNode.Create;
SFNode65 := TSFNode.CreateUndefined(X3DPrototype64, false, 'geometry');
X3DPrototype66 := TX3DPrototypeNode.Create;
SFFloat67 := TSFFloat.CreateUndefined(X3DPrototype66, false, 'cornerRadius');
SFFloat67.Value := '0.12';
{ METHOD .AddSFFloat }
X3DPrototype66.AddSFFloat([SFFloat67]);
SFVec2f68 := TSFVec2f.CreateUndefined(X3DPrototype66, false, 'size');
SFVec2f68.Value := '2 1';
{ METHOD .AddSFVec2f }
X3DPrototype66.AddSFVec2f([SFVec2f68]);
{ METHOD .AddX3DPrototype }
SFNode65.AddX3DPrototype([X3DPrototype66]);
{ METHOD .AddSFNode }
X3DPrototype64.AddSFNode([SFNode65]);
{ METHOD .AddX3DPrototype }
Transform61.AddX3DPrototype([X3DPrototype64]);
Transform69 := TTransformNode.Create;
Transform69.Translation := Vector3(-1,0,0);
X3DPrototype70 := TX3DPrototypeNode.Create;
SFColor71 := TSFColor.CreateUndefined(X3DPrototype70, false, 'lineColor');
SFColor71.Value := '0.72 0.14 0.23';
{ METHOD .AddSFColor }
X3DPrototype70.AddSFColor([SFColor71]);
SFNode72 := TSFNode.CreateUndefined(X3DPrototype70, false, 'geometry');
Disk2D73 := TDisk2DNode.Create;
Disk2D73.OuterRadius := 0.2;
{ METHOD .AddDisk2D }
SFNode72.AddDisk2D([Disk2D73]);
{ METHOD .AddSFNode }
X3DPrototype70.AddSFNode([SFNode72]);
{ METHOD .AddX3DPrototype }
Transform69.AddX3DPrototype([X3DPrototype70]);
{ METHOD .FdChildren.Add }
Transform61.FdChildren.Add(Transform69);
Transform74 := TTransformNode.Create;
Transform74.Translation := Vector3(1,0,0);
X3DPrototype75 := TX3DPrototypeNode.Create;
SFColor76 := TSFColor.CreateUndefined(X3DPrototype75, false, 'lineColor');
SFColor76.Value := '0.44 0.5 0.72';
{ METHOD .AddSFColor }
X3DPrototype75.AddSFColor([SFColor76]);
SFNode77 := TSFNode.CreateUndefined(X3DPrototype75, false, 'geometry');
{ METHOD .AddDisk2D }
SFNode77.AddDisk2D([Disk2D73]);
{ METHOD .AddSFNode }
X3DPrototype75.AddSFNode([SFNode77]);
{ METHOD .AddX3DPrototype }
Transform74.AddX3DPrototype([X3DPrototype75]);
{ METHOD .FdChildren.Add }
Transform61.FdChildren.Add(Transform74);
{ METHOD .FdChildren.Add }
Group59.FdChildren.Add(Transform61);
{ METHOD .AddGroup }
X3DPrototype58.AddChildren([Group59]);
Script79 := TScriptNode.Create;
Script79.DirectOutput := True;
SFVec3f80 := TSFVec3f.CreateUndefined(Script79, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script79.AddCustomField(SFVec3f80);
SFNode81 := TSFNode.CreateUndefined(Script79, false, 'sensor');
{ METHOD .Fd.Value }
SFNode81.Value := PlaneSensor60;
{ METHOD .Fd.AddCustomField }
Script79.AddCustomField(SFNode81);
SFNode83 := TSFNode.CreateUndefined(Script79, false, 'transform');
{ METHOD .Fd.Value }
SFNode83.Value := Transform61;
{ METHOD .Fd.AddCustomField }
Script79.AddCustomField(SFNode83);
IS85 := TIS.Create;
connect86 := Tconnect.Create;
connect86.NodeField := 'translation';
connect86.ProtoField := 'translation';
{ METHOD .Connect }
IS85.Connect := connect86;
{ METHOD .Fd.AddCustomField }
Script79.AddCustomField(IS85);

Script79.SetSourceCode('''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype58.AddScript([Script79]);
{ Original "PlaneSensor.EventTranslation_changed TO Node.EventSet_translation }
{ Sample PlaneSensor.EventTranslation_changed TO Node.EventSet_translation}
X3DPrototype58.AddRoute(PlaneSensor60.EventTranslation_changed, Transform61.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype55.AddX3DPrototype([X3DPrototype58]);
{ METHOD .AddX3DPrototype }
Group9.AddX3DPrototype([X3DPrototype55]);
X3DPrototype88 := TX3DPrototype.Create;
X3DInterfaceDeclaration89 := TX3DInterfaceDeclaration.Create(nil);
SFColor90 := TSFColor.CreateUndefined(X3DInterfaceDeclaration89, false, 'lineColor');
SFColor90.Value := '0.43 0.43 0.98';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration89.AddSFColor([SFColor90]);
SFFloat91 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration89, false, 'linewidthScaleFactor');
SFFloat91.Value := '2';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration89.AddSFFloat([SFFloat91]);
SFNode92 := TSFNode.CreateUndefined(X3DInterfaceDeclaration89, false, 'output');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration89.AddSFNode([SFNode92]);
SFNode93 := TSFNode.CreateUndefined(X3DInterfaceDeclaration89, false, 'input');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration89.AddSFNode([SFNode93]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype88.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration89]);
X3DPrototype94 := TX3DPrototype.Create;
Shape95 := TShapeNode.Create;
Appearance96 := TAppearanceNode.Create;
LineProperties97 := TLinePropertiesNode.Create;
IS98 := TIS.Create;
connect99 := Tconnect.Create;
connect99.NodeField := 'linewidthScaleFactor';
connect99.ProtoField := 'linewidthScaleFactor';
{ METHOD .Connect }
IS98.Connect := connect99;
{ METHOD .IS }
LineProperties97.IS := IS98;
{ METHOD .LineProperties }
Appearance96.LineProperties := LineProperties97;
Material100 := TMaterialNode.Create;
Material100.DiffuseColor := Vector3(0,0,0);
IS101 := TIS.Create;
connect102 := Tconnect.Create;
connect102.NodeField := 'emissiveColor';
connect102.ProtoField := 'lineColor';
{ METHOD .Connect }
IS101.Connect := connect102;
{ METHOD .IS }
Material100.IS := IS101;
{ METHOD .SetMaterial }
Appearance96.Material := Material100;
{ METHOD .Appearance }
Shape95.Appearance := Appearance96;
LineSet103 := TLineSetNode.Create;
LineSet103.SetVertexCount([2]);
Coordinate104 := TCoordinateNode.Create;
Coordinate104.SetPoint([Vector3(-1,0,0),Vector3(1,0,0)]);
{ METHOD .Coord }
LineSet103.Coord := Coordinate104;
{ METHOD .Geometry }
Shape95.Geometry := LineSet103;
{ METHOD .AddShape }
X3DPrototype94.AddShape([Shape95]);
Script105 := TScriptNode.Create;
Script105.DirectOutput := True;
SFVec3f106 := TSFVec3f.CreateUndefined(Script105, false, 'set_translation');
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(SFVec3f106);
SFInt32107 := TSFInt32.CreateUndefined(Script105, false, 'routeDimension');
SFInt32107.Value := '21';
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(SFInt32107);
SFNode108 := TSFNode.CreateUndefined(Script105, false, 'output');
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(SFNode108);
SFNode109 := TSFNode.CreateUndefined(Script105, false, 'input');
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(SFNode109);
SFNode110 := TSFNode.CreateUndefined(Script105, false, 'geometry');
{ METHOD .AddLineSet }
SFNode110.AddLineSet([LineSet103]);
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(SFNode110);
SFNode112 := TSFNode.CreateUndefined(Script105, false, 'self');
{ METHOD .AddScript }
SFNode112.AddScript([Script105]);
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(SFNode112);
IS114 := TIS.Create;
connect115 := Tconnect.Create;
connect115.NodeField := 'output';
connect115.ProtoField := 'output';
{ METHOD .Connect }
IS114.Connect := connect115;
connect116 := Tconnect.Create;
connect116.NodeField := 'input';
connect116.ProtoField := 'input';
{ METHOD .Connect }
IS114.Connect := connect116;
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(IS114);

Script105.SetSourceCode('''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .addRoute (output, 'translation_changed', self, 'set_translation');\\n	Browser .addRoute (input,  'translation_changed', self, 'set_translation');\n"+
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
{ METHOD .AddScript }
X3DPrototype94.AddScript([Script105]);
{ METHOD .AddX3DPrototype }
X3DPrototype88.AddX3DPrototype([X3DPrototype94]);
{ METHOD .AddX3DPrototype }
Group9.AddX3DPrototype([X3DPrototype88]);
NavigationInfo117 := TNavigationInfoNode.Create;
NavigationInfo117.SetType(['FLY','ANY']);
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(NavigationInfo117);
Background118 := TBackgroundNode.Create;
Background118.SetSkyColor([Vector3(0.2,0.2,0.2)]);
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Background118);
OrthoViewpoint119 := TOrthoViewpointNode.Create;
OrthoViewpoint119.Description := 'OthoViewpoint';
OrthoViewpoint119.Position := Vector3(-3.13496,-4.19776,10);
OrthoViewpoint119.CenterOfRotation := Vector3(-3.13496,-4.19776,0);
OrthoViewpoint119.SetFieldOfView([0,0,10,10]);
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(OrthoViewpoint119);
Viewpoint120 := TViewpointNode.Create;
Viewpoint120.Description := 'Viewpoint';
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Viewpoint120);
Transform121 := TTransformNode.Create;
X3DPrototype122 := TX3DPrototypeNode.Create;
SFNode123 := TSFNode.CreateUndefined(X3DPrototype122, false, 'output');
X3DPrototype124 := TX3DPrototypeNode.Create;
SFVec3f125 := TSFVec3f.CreateUndefined(X3DPrototype124, false, 'translation');
SFVec3f125.Value := '-3.98323 2.88948 0';
{ METHOD .AddSFVec3f }
X3DPrototype124.AddSFVec3f([SFVec3f125]);
{ METHOD .AddX3DPrototype }
SFNode123.AddX3DPrototype([X3DPrototype124]);
{ METHOD .AddSFNode }
X3DPrototype122.AddSFNode([SFNode123]);
SFNode126 := TSFNode.CreateUndefined(X3DPrototype122, false, 'input');
X3DPrototype127 := TX3DPrototypeNode.Create;
SFVec3f128 := TSFVec3f.CreateUndefined(X3DPrototype127, false, 'translation');
SFVec3f128.Value := '-0.0890862 2.96049 0';
{ METHOD .AddSFVec3f }
X3DPrototype127.AddSFVec3f([SFVec3f128]);
{ METHOD .AddX3DPrototype }
SFNode126.AddX3DPrototype([X3DPrototype127]);
{ METHOD .AddSFNode }
X3DPrototype122.AddSFNode([SFNode126]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype122]);
X3DPrototype129 := TX3DPrototypeNode.Create;
SFNode130 := TSFNode.CreateUndefined(X3DPrototype129, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode130.AddX3DPrototype([X3DPrototype124]);
{ METHOD .AddSFNode }
X3DPrototype129.AddSFNode([SFNode130]);
SFNode132 := TSFNode.CreateUndefined(X3DPrototype129, false, 'input');
X3DPrototype133 := TX3DPrototypeNode.Create;
SFVec3f134 := TSFVec3f.CreateUndefined(X3DPrototype133, false, 'translation');
SFVec3f134.Value := '-0.104169 1.16371 0';
{ METHOD .AddSFVec3f }
X3DPrototype133.AddSFVec3f([SFVec3f134]);
{ METHOD .AddX3DPrototype }
SFNode132.AddX3DPrototype([X3DPrototype133]);
{ METHOD .AddSFNode }
X3DPrototype129.AddSFNode([SFNode132]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype129]);
X3DPrototype135 := TX3DPrototypeNode.Create;
SFNode136 := TSFNode.CreateUndefined(X3DPrototype135, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode136.AddX3DPrototype([X3DPrototype124]);
{ METHOD .AddSFNode }
X3DPrototype135.AddSFNode([SFNode136]);
SFNode138 := TSFNode.CreateUndefined(X3DPrototype135, false, 'input');
X3DPrototype139 := TX3DPrototypeNode.Create;
SFVec3f140 := TSFVec3f.CreateUndefined(X3DPrototype139, false, 'translation');
SFVec3f140.Value := '-0.0998688 -0.40172 0';
{ METHOD .AddSFVec3f }
X3DPrototype139.AddSFVec3f([SFVec3f140]);
{ METHOD .AddX3DPrototype }
SFNode138.AddX3DPrototype([X3DPrototype139]);
{ METHOD .AddSFNode }
X3DPrototype135.AddSFNode([SFNode138]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype135]);
X3DPrototype141 := TX3DPrototypeNode.Create;
SFNode142 := TSFNode.CreateUndefined(X3DPrototype141, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode142.AddX3DPrototype([X3DPrototype124]);
{ METHOD .AddSFNode }
X3DPrototype141.AddSFNode([SFNode142]);
SFNode144 := TSFNode.CreateUndefined(X3DPrototype141, false, 'input');
X3DPrototype145 := TX3DPrototypeNode.Create;
SFVec3f146 := TSFVec3f.CreateUndefined(X3DPrototype145, false, 'translation');
SFVec3f146.Value := '-0.0998687 -2.14742 0';
{ METHOD .AddSFVec3f }
X3DPrototype145.AddSFVec3f([SFVec3f146]);
{ METHOD .AddX3DPrototype }
SFNode144.AddX3DPrototype([X3DPrototype145]);
{ METHOD .AddSFNode }
X3DPrototype141.AddSFNode([SFNode144]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype141]);
X3DPrototype147 := TX3DPrototypeNode.Create;
SFNode148 := TSFNode.CreateUndefined(X3DPrototype147, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode148.AddX3DPrototype([X3DPrototype127]);
{ METHOD .AddSFNode }
X3DPrototype147.AddSFNode([SFNode148]);
SFNode150 := TSFNode.CreateUndefined(X3DPrototype147, false, 'input');
X3DPrototype151 := TX3DPrototypeNode.Create;
SFVec3f152 := TSFVec3f.CreateUndefined(X3DPrototype151, false, 'translation');
SFVec3f152.Value := '3.55694 2.4116 0';
{ METHOD .AddSFVec3f }
X3DPrototype151.AddSFVec3f([SFVec3f152]);
{ METHOD .AddX3DPrototype }
SFNode150.AddX3DPrototype([X3DPrototype151]);
{ METHOD .AddSFNode }
X3DPrototype147.AddSFNode([SFNode150]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype147]);
X3DPrototype153 := TX3DPrototypeNode.Create;
SFNode154 := TSFNode.CreateUndefined(X3DPrototype153, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode154.AddX3DPrototype([X3DPrototype133]);
{ METHOD .AddSFNode }
X3DPrototype153.AddSFNode([SFNode154]);
SFNode156 := TSFNode.CreateUndefined(X3DPrototype153, false, 'input');
{ METHOD .AddX3DPrototype }
SFNode156.AddX3DPrototype([X3DPrototype151]);
{ METHOD .AddSFNode }
X3DPrototype153.AddSFNode([SFNode156]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype153]);
X3DPrototype158 := TX3DPrototypeNode.Create;
SFNode159 := TSFNode.CreateUndefined(X3DPrototype158, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode159.AddX3DPrototype([X3DPrototype139]);
{ METHOD .AddSFNode }
X3DPrototype158.AddSFNode([SFNode159]);
SFNode161 := TSFNode.CreateUndefined(X3DPrototype158, false, 'input');
X3DPrototype162 := TX3DPrototypeNode.Create;
SFVec3f163 := TSFVec3f.CreateUndefined(X3DPrototype162, false, 'translation');
SFVec3f163.Value := '3.75106 -0.0794556 0';
{ METHOD .AddSFVec3f }
X3DPrototype162.AddSFVec3f([SFVec3f163]);
{ METHOD .AddX3DPrototype }
SFNode161.AddX3DPrototype([X3DPrototype162]);
{ METHOD .AddSFNode }
X3DPrototype158.AddSFNode([SFNode161]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype158]);
X3DPrototype164 := TX3DPrototypeNode.Create;
SFNode165 := TSFNode.CreateUndefined(X3DPrototype164, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode165.AddX3DPrototype([X3DPrototype145]);
{ METHOD .AddSFNode }
X3DPrototype164.AddSFNode([SFNode165]);
SFNode167 := TSFNode.CreateUndefined(X3DPrototype164, false, 'input');
{ METHOD .AddX3DPrototype }
SFNode167.AddX3DPrototype([X3DPrototype162]);
{ METHOD .AddSFNode }
X3DPrototype164.AddSFNode([SFNode167]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype164]);
X3DPrototype169 := TX3DPrototypeNode.Create;
SFNode170 := TSFNode.CreateUndefined(X3DPrototype169, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode170.AddX3DPrototype([X3DPrototype151]);
{ METHOD .AddSFNode }
X3DPrototype169.AddSFNode([SFNode170]);
SFNode172 := TSFNode.CreateUndefined(X3DPrototype169, false, 'input');
X3DPrototype173 := TX3DPrototypeNode.Create;
SFVec3f174 := TSFVec3f.CreateUndefined(X3DPrototype173, false, 'translation');
SFVec3f174.Value := '7.68077 1.21228 0';
{ METHOD .AddSFVec3f }
X3DPrototype173.AddSFVec3f([SFVec3f174]);
{ METHOD .AddX3DPrototype }
SFNode172.AddX3DPrototype([X3DPrototype173]);
{ METHOD .AddSFNode }
X3DPrototype169.AddSFNode([SFNode172]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype169]);
X3DPrototype175 := TX3DPrototypeNode.Create;
SFNode176 := TSFNode.CreateUndefined(X3DPrototype175, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode176.AddX3DPrototype([X3DPrototype162]);
{ METHOD .AddSFNode }
X3DPrototype175.AddSFNode([SFNode176]);
SFNode178 := TSFNode.CreateUndefined(X3DPrototype175, false, 'input');
{ METHOD .AddX3DPrototype }
SFNode178.AddX3DPrototype([X3DPrototype173]);
{ METHOD .AddSFNode }
X3DPrototype175.AddSFNode([SFNode178]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype175]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype124]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype127]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype133]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype139]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype145]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype151]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype162]);
{ METHOD .AddX3DPrototype }
Transform121.AddX3DPrototype([X3DPrototype173]);
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Transform121);
{ METHOD .AddGroup }
X3D0.AddChildren([Group9]);
end;

function CreateConnectors: TX3DRootNode;
begin
InitConnectorsPart0;
InitConnectorsPart1;
Result := X3D0;
end;

begin
end.
