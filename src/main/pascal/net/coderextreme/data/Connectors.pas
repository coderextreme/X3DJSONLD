unit Connectors;

interface

uses X3DNodes;

function CreateConnectors: TX3DRootNode;

implementation

uses CastleVectors;

function CreateConnectors: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group9: TGroupNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
X3DField12: TX3DField;
X3DField13: TX3DField;
X3DField14: TX3DField;
X3DPrototype15: TX3DPrototype;
IndexedFaceSet16: TIndexedFaceSetNode;
IS17: TIS;
connect18: Tconnect;
Coordinate19: TCoordinateNode;
Script20: TScriptNode;
X3DField21: TX3DField;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DField24: TX3DField;
IndexedFaceSet25: TIndexedFaceSetNode;
IS26: TIS;
connect27: Tconnect;
connect28: Tconnect;
X3DPrototype29: TX3DPrototype;
X3DInterfaceDeclaration30: TX3DInterfaceDeclaration;
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
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
X3DField57: TX3DField;
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
X3DField80: TX3DField;
X3DField81: TX3DField;
PlaneSensor82: TPlaneSensorNode;
X3DField83: TX3DField;
Transform84: TTransformNode;
IS85: TIS;
connect86: Tconnect;
X3DPrototype88: TX3DPrototype;
X3DInterfaceDeclaration89: TX3DInterfaceDeclaration;
X3DField90: TX3DField;
X3DField91: TX3DField;
X3DField92: TX3DField;
X3DField93: TX3DField;
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
X3DField106: TX3DField;
X3DField107: TX3DField;
X3DField108: TX3DField;
X3DField109: TX3DField;
X3DField110: TX3DField;
LineSet111: TLineSetNode;
X3DField112: TX3DField;
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
X3DPrototype10 := TX3DPrototype.Create;
X3DPrototype10.NameField := 'RoundedRectangle2D';
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
X3DField12 := TX3DField.Create;
X3DField12.NameField := 'cornerRadius';
X3DField12.AccessType := 'initializeOnly';
X3DField12.Type := 'SFFloat';
X3DField12.Value := '1';
{ .SetX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField12;
X3DField13 := TX3DField.Create;
X3DField13.NameField := 'size';
X3DField13.AccessType := 'initializeOnly';
X3DField13.Type := 'SFVec2f';
X3DField13.Value := '2 2';
{ .AddX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField13;
X3DField14 := TX3DField.Create;
X3DField14.NameField := 'solid';
X3DField14.AccessType := 'initializeOnly';
X3DField14.Type := 'SFBool';
X3DField14.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField14;
{ .SetX3DInterfaceDeclaration }
X3DPrototype10.X3DInterfaceDeclaration := X3DInterfaceDeclaration11;
X3DPrototype15 := TX3DPrototype.Create;
IndexedFaceSet16 := TIndexedFaceSetNode.Create;
IS17 := TIS.Create;
connect18 := Tconnect.Create;
connect18.NodeField := 'solid';
connect18.ProtoField := 'solid';
{ .AddConnect }
IS17.Connect := connect18;
{ .SetIS }
IndexedFaceSet16.IS := IS17;
Coordinate19 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet16.Coord := Coordinate19;
{ .SetIndexedFaceSet }
X3DPrototype15.IndexedFaceSet := IndexedFaceSet16;
Script20 := TScriptNode.Create;
Script20.DirectOutput := True;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'cornerDimension';
X3DField21.AccessType := 'initializeOnly';
X3DField21.Type := 'SFFloat';
X3DField21.Value := '10';
{ .SetX3DField }
Script20.X3DField := X3DField21;
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'cornerRadius';
X3DField22.AccessType := 'initializeOnly';
X3DField22.Type := 'SFFloat';
{ .AddX3DField }
Script20.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'size';
X3DField23.AccessType := 'initializeOnly';
X3DField23.Type := 'SFVec2f';
{ .AddX3DField }
Script20.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'geometry';
X3DField24.AccessType := 'initializeOnly';
X3DField24.Type := 'SFNode';
IndexedFaceSet25 := IndexedFaceSet16;
{ .SetIndexedFaceSet }
X3DField24.IndexedFaceSet := IndexedFaceSet25;
{ .AddX3DField }
Script20.X3DField := X3DField24;
IS26 := TIS.Create;
connect27 := Tconnect.Create;
connect27.NodeField := 'cornerRadius';
connect27.ProtoField := 'cornerRadius';
{ .AddConnect }
IS26.Connect := connect27;
connect28 := Tconnect.Create;
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
{ .AddScript }
X3DPrototype15.Script := Script20;
{ .AddX3DPrototype }
X3DPrototype10.X3DPrototype := X3DPrototype15;
{ .SetX3DPrototype }
Group9.X3DPrototype := X3DPrototype10;
X3DPrototype29 := TX3DPrototype.Create;
X3DPrototype29.NameField := 'Widget';
X3DInterfaceDeclaration30 := TX3DInterfaceDeclaration.Create(nil);
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'fillColor';
X3DField31.AccessType := 'inputOutput';
X3DField31.Type := 'SFColor';
X3DField31.Value := '0.1 0.1 0.1';
{ .SetX3DField }
X3DInterfaceDeclaration30.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'lineColor';
X3DField32.AccessType := 'inputOutput';
X3DField32.Type := 'SFColor';
X3DField32.Value := '0.4 0.4 0.4';
{ .AddX3DField }
X3DInterfaceDeclaration30.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'linewidthScaleFactor';
X3DField33.AccessType := 'inputOutput';
X3DField33.Type := 'SFFloat';
X3DField33.Value := '1';
{ .AddX3DField }
X3DInterfaceDeclaration30.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'geometry';
X3DField34.AccessType := 'inputOutput';
X3DField34.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration30.X3DField := X3DField34;
{ .SetX3DInterfaceDeclaration }
X3DPrototype29.X3DInterfaceDeclaration := X3DInterfaceDeclaration30;
X3DPrototype35 := TX3DPrototype.Create;
Transform36 := TTransformNode.Create;
Shape37 := TShapeNode.Create;
IS38 := TIS.Create;
connect39 := Tconnect.Create;
connect39.NodeField := 'geometry';
connect39.ProtoField := 'geometry';
{ .AddConnect }
IS38.Connect := connect39;
{ .SetIS }
Shape37.IS := IS38;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
IS42 := TIS.Create;
connect43 := Tconnect.Create;
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
IS45 := TIS.Create;
connect46 := Tconnect.Create;
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
IS50 := TIS.Create;
connect51 := Tconnect.Create;
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
IS53 := TIS.Create;
connect54 := Tconnect.Create;
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
{ .SetTransform }
X3DPrototype35.Transform := Transform36;
{ .AddX3DPrototype }
X3DPrototype29.X3DPrototype := X3DPrototype35;
{ .AddX3DPrototype }
Group9.X3DPrototype := X3DPrototype29;
X3DPrototype55 := TX3DPrototype.Create;
X3DPrototype55.NameField := 'Node';
X3DInterfaceDeclaration56 := TX3DInterfaceDeclaration.Create(nil);
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'translation';
X3DField57.AccessType := 'inputOutput';
X3DField57.Type := 'SFVec3f';
{ .SetX3DField }
X3DInterfaceDeclaration56.X3DField := X3DField57;
{ .SetX3DInterfaceDeclaration }
X3DPrototype55.X3DInterfaceDeclaration := X3DInterfaceDeclaration56;
X3DPrototype58 := TX3DPrototype.Create;
Group59 := TGroupNode.Create;
PlaneSensor60 := TPlaneSensorNode.Create;
{ .AddChildren }
Group59.AddChildren([PlaneSensor60]);
Transform61 := TTransformNode.Create;
IS62 := TIS.Create;
connect63 := Tconnect.Create;
connect63.NodeField := 'translation';
connect63.ProtoField := 'translation';
{ .AddConnect }
IS62.Connect := connect63;
{ .SetIS }
Transform61.IS := IS62;
X3DPrototype64 := TX3DPrototypeNode.Create;
X3DPrototype64.NameField := 'Widget';
SFNode65 := TSFNode.Create;
SFNode65.NameField := 'geometry';
X3DPrototype66 := TX3DPrototypeNode.Create;
X3DPrototype66.NameField := 'RoundedRectangle2D';
SFFloat67 := TSFFloat.Create(RoundedRectangle2D3, false, 'cornerRadius', 0.12);
SFFloat67.NameField := 'cornerRadius';
SFFloat67.Value := '0.12';
{ .SetSFFloat }
X3DPrototype66.SFFloat := SFFloat67;
SFVec2f68 := TSFVec2f.Create(RoundedRectangle2D3, false, 'size', Vector2Single(2,1));
SFVec2f68.NameField := 'size';
SFVec2f68.Value := '2 1';
{ .AddSFVec2f }
X3DPrototype66.SFVec2f := SFVec2f68;
{ .SetX3DPrototype }
SFNode65.X3DPrototype := X3DPrototype66;
{ .SetSFNode }
X3DPrototype64.SFNode := SFNode65;
{ .AddX3DPrototype }
Transform61.X3DPrototype := X3DPrototype64;
Transform69 := TTransformNode.Create;
Transform69.Translation := Vector3(-1,0,0);
X3DPrototype70 := TX3DPrototypeNode.Create;
X3DPrototype70.NameField := 'Widget';
SFColor71 := TSFColor.Create(Widget3, false, 'lineColor', Vector3(0.72,0.14,0.23));
SFColor71.NameField := 'lineColor';
SFColor71.Value := '0.72 0.14 0.23';
{ .SetSFColor }
X3DPrototype70.SFColor := SFColor71;
SFNode72 := TSFNode.Create;
SFNode72.NameField := 'geometry';
Disk2D73 := TDisk2DNode.Create;
Disk2D73.OuterRadius := 0.2;
{ .SetDisk2D }
SFNode72.Disk2D := Disk2D73;
{ .AddSFNode }
X3DPrototype70.SFNode := SFNode72;
{ .SetX3DPrototype }
Transform69.X3DPrototype := X3DPrototype70;
{ .AddChildren }
Transform61.AddChildren([Transform69]);
Transform74 := TTransformNode.Create;
Transform74.Translation := Vector3(1,0,0);
X3DPrototype75 := TX3DPrototypeNode.Create;
X3DPrototype75.NameField := 'Widget';
SFColor76 := TSFColor.Create(Widget3, false, 'lineColor', Vector3(0.44,0.5,0.72));
SFColor76.NameField := 'lineColor';
SFColor76.Value := '0.44 0.5 0.72';
{ .SetSFColor }
X3DPrototype75.SFColor := SFColor76;
SFNode77 := TSFNode.Create;
SFNode77.NameField := 'geometry';
Disk2D78 := Disk2D73;
{ .SetDisk2D }
SFNode77.Disk2D := Disk2D78;
{ .AddSFNode }
X3DPrototype75.SFNode := SFNode77;
{ .SetX3DPrototype }
Transform74.X3DPrototype := X3DPrototype75;
{ .AddChildren }
Transform61.AddChildren([Transform74]);
{ .AddChildren }
Group59.AddChildren([Transform61]);
{ .SetGroup }
X3DPrototype58.Group := Group59;
Script79 := TScriptNode.Create;
Script79.DirectOutput := True;
X3DField80 := TX3DField.Create;
X3DField80.NameField := 'translation';
X3DField80.AccessType := 'inputOutput';
X3DField80.Type := 'SFVec3f';
{ .SetX3DField }
Script79.X3DField := X3DField80;
X3DField81 := TX3DField.Create;
X3DField81.NameField := 'sensor';
X3DField81.AccessType := 'initializeOnly';
X3DField81.Type := 'SFNode';
PlaneSensor82 := PlaneSensor60;
{ .SetPlaneSensor }
X3DField81.PlaneSensor := PlaneSensor82;
{ .AddX3DField }
Script79.X3DField := X3DField81;
X3DField83 := TX3DField.Create;
X3DField83.NameField := 'transform';
X3DField83.AccessType := 'initializeOnly';
X3DField83.Type := 'SFNode';
Transform84 := Transform61;
{ .SetTransform }
X3DField83.Transform := Transform84;
{ .AddX3DField }
Script79.X3DField := X3DField83;
IS85 := TIS.Create;
connect86 := Tconnect.Create;
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
{ .AddScript }
X3DPrototype58.Script := Script79;
X3DPrototype58.AddRoute(PlaneSensor60.EventTranslation_changed, Transform61.FdTranslation);
{ .AddX3DRoute }
{ .AddX3DPrototype }
X3DPrototype55.X3DPrototype := X3DPrototype58;
{ .AddX3DPrototype }
Group9.X3DPrototype := X3DPrototype55;
X3DPrototype88 := TX3DPrototype.Create;
X3DPrototype88.NameField := 'Route';
X3DInterfaceDeclaration89 := TX3DInterfaceDeclaration.Create(nil);
X3DField90 := TX3DField.Create;
X3DField90.NameField := 'lineColor';
X3DField90.AccessType := 'inputOutput';
X3DField90.Type := 'SFColor';
X3DField90.Value := '0.43 0.43 0.98';
{ .SetX3DField }
X3DInterfaceDeclaration89.X3DField := X3DField90;
X3DField91 := TX3DField.Create;
X3DField91.NameField := 'linewidthScaleFactor';
X3DField91.AccessType := 'inputOutput';
X3DField91.Type := 'SFFloat';
X3DField91.Value := '2';
{ .AddX3DField }
X3DInterfaceDeclaration89.X3DField := X3DField91;
X3DField92 := TX3DField.Create;
X3DField92.NameField := 'output';
X3DField92.AccessType := 'initializeOnly';
X3DField92.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration89.X3DField := X3DField92;
X3DField93 := TX3DField.Create;
X3DField93.NameField := 'input';
X3DField93.AccessType := 'initializeOnly';
X3DField93.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration89.X3DField := X3DField93;
{ .SetX3DInterfaceDeclaration }
X3DPrototype88.X3DInterfaceDeclaration := X3DInterfaceDeclaration89;
X3DPrototype94 := TX3DPrototype.Create;
Shape95 := TShapeNode.Create;
Appearance96 := TAppearanceNode.Create;
LineProperties97 := TLinePropertiesNode.Create;
IS98 := TIS.Create;
connect99 := Tconnect.Create;
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
IS101 := TIS.Create;
connect102 := Tconnect.Create;
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
{ .SetShape }
X3DPrototype94.Shape := Shape95;
Script105 := TScriptNode.Create;
Script105.DirectOutput := True;
X3DField106 := TX3DField.Create;
X3DField106.NameField := 'set_translation';
X3DField106.AccessType := 'inputOnly';
X3DField106.Type := 'SFVec3f';
{ .SetX3DField }
Script105.X3DField := X3DField106;
X3DField107 := TX3DField.Create;
X3DField107.NameField := 'routeDimension';
X3DField107.AccessType := 'initializeOnly';
X3DField107.Type := 'SFInt32';
X3DField107.Value := '21';
{ .AddX3DField }
Script105.X3DField := X3DField107;
X3DField108 := TX3DField.Create;
X3DField108.NameField := 'output';
X3DField108.AccessType := 'initializeOnly';
X3DField108.Type := 'SFNode';
{ .AddX3DField }
Script105.X3DField := X3DField108;
X3DField109 := TX3DField.Create;
X3DField109.NameField := 'input';
X3DField109.AccessType := 'initializeOnly';
X3DField109.Type := 'SFNode';
{ .AddX3DField }
Script105.X3DField := X3DField109;
X3DField110 := TX3DField.Create;
X3DField110.NameField := 'geometry';
X3DField110.AccessType := 'initializeOnly';
X3DField110.Type := 'SFNode';
LineSet111 := LineSet103;
{ .SetLineSet }
X3DField110.LineSet := LineSet111;
{ .AddX3DField }
Script105.X3DField := X3DField110;
X3DField112 := TX3DField.Create;
X3DField112.NameField := 'self';
X3DField112.AccessType := 'initializeOnly';
X3DField112.Type := 'SFNode';
Script113 := Script105;
{ .SetScript }
X3DField112.Script := Script113;
{ .AddX3DField }
Script105.X3DField := X3DField112;
IS114 := TIS.Create;
connect115 := Tconnect.Create;
connect115.NodeField := 'output';
connect115.ProtoField := 'output';
{ .AddConnect }
IS114.Connect := connect115;
connect116 := Tconnect.Create;
connect116.NodeField := 'input';
connect116.ProtoField := 'input';
{ .AddConnect }
IS114.Connect := connect116;
{ .SetIS }
Script105.IS := IS114;

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
{ .AddScript }
X3DPrototype94.Script := Script105;
{ .AddX3DPrototype }
X3DPrototype88.X3DPrototype := X3DPrototype94;
{ .AddX3DPrototype }
Group9.X3DPrototype := X3DPrototype88;
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
X3DPrototype122 := TX3DPrototypeNode.Create;
X3DPrototype122.NameField := 'Route';
SFNode123 := TSFNode.Create;
SFNode123.NameField := 'output';
X3DPrototype124 := TX3DPrototypeNode.Create;
X3DPrototype124.NameField := 'Node';
SFVec3f125 := TSFVec3f.Create(Node4, false, 'translation', Vector3(-3.98323,2.88948,0));
SFVec3f125.NameField := 'translation';
SFVec3f125.Value := '-3.98323 2.88948 0';
{ .SetSFVec3f }
X3DPrototype124.SFVec3f := SFVec3f125;
{ .SetX3DPrototype }
SFNode123.X3DPrototype := X3DPrototype124;
{ .SetSFNode }
X3DPrototype122.SFNode := SFNode123;
SFNode126 := TSFNode.Create;
SFNode126.NameField := 'input';
X3DPrototype127 := TX3DPrototypeNode.Create;
X3DPrototype127.NameField := 'Node';
SFVec3f128 := TSFVec3f.Create(Node4, false, 'translation', Vector3(-0.0890862,2.96049,0));
SFVec3f128.NameField := 'translation';
SFVec3f128.Value := '-0.0890862 2.96049 0';
{ .SetSFVec3f }
X3DPrototype127.SFVec3f := SFVec3f128;
{ .SetX3DPrototype }
SFNode126.X3DPrototype := X3DPrototype127;
{ .AddSFNode }
X3DPrototype122.SFNode := SFNode126;
{ .SetX3DPrototype }
Transform121.X3DPrototype := X3DPrototype122;
X3DPrototype129 := TX3DPrototypeNode.Create;
X3DPrototype129.NameField := 'Route';
SFNode130 := TSFNode.Create;
SFNode130.NameField := 'output';
X3DPrototype131.NameField := 'Node';
X3DPrototype131 := X3DPrototype124;
{ .SetX3DPrototype }
SFNode130.X3DPrototype := X3DPrototype131;
{ .SetSFNode }
X3DPrototype129.SFNode := SFNode130;
SFNode132 := TSFNode.Create;
SFNode132.NameField := 'input';
X3DPrototype133 := TX3DPrototypeNode.Create;
X3DPrototype133.NameField := 'Node';
SFVec3f134 := TSFVec3f.Create(Node4, false, 'translation', Vector3(-0.104169,1.16371,0));
SFVec3f134.NameField := 'translation';
SFVec3f134.Value := '-0.104169 1.16371 0';
{ .SetSFVec3f }
X3DPrototype133.SFVec3f := SFVec3f134;
{ .SetX3DPrototype }
SFNode132.X3DPrototype := X3DPrototype133;
{ .AddSFNode }
X3DPrototype129.SFNode := SFNode132;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype129;
X3DPrototype135 := TX3DPrototypeNode.Create;
X3DPrototype135.NameField := 'Route';
SFNode136 := TSFNode.Create;
SFNode136.NameField := 'output';
X3DPrototype137.NameField := 'Node';
X3DPrototype137 := X3DPrototype124;
{ .SetX3DPrototype }
SFNode136.X3DPrototype := X3DPrototype137;
{ .SetSFNode }
X3DPrototype135.SFNode := SFNode136;
SFNode138 := TSFNode.Create;
SFNode138.NameField := 'input';
X3DPrototype139 := TX3DPrototypeNode.Create;
X3DPrototype139.NameField := 'Node';
SFVec3f140 := TSFVec3f.Create(Node4, false, 'translation', Vector3(-0.0998688,-0.40172,0));
SFVec3f140.NameField := 'translation';
SFVec3f140.Value := '-0.0998688 -0.40172 0';
{ .SetSFVec3f }
X3DPrototype139.SFVec3f := SFVec3f140;
{ .SetX3DPrototype }
SFNode138.X3DPrototype := X3DPrototype139;
{ .AddSFNode }
X3DPrototype135.SFNode := SFNode138;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype135;
X3DPrototype141 := TX3DPrototypeNode.Create;
X3DPrototype141.NameField := 'Route';
SFNode142 := TSFNode.Create;
SFNode142.NameField := 'output';
X3DPrototype143.NameField := 'Node';
X3DPrototype143 := X3DPrototype124;
{ .SetX3DPrototype }
SFNode142.X3DPrototype := X3DPrototype143;
{ .SetSFNode }
X3DPrototype141.SFNode := SFNode142;
SFNode144 := TSFNode.Create;
SFNode144.NameField := 'input';
X3DPrototype145 := TX3DPrototypeNode.Create;
X3DPrototype145.NameField := 'Node';
SFVec3f146 := TSFVec3f.Create(Node4, false, 'translation', Vector3(-0.0998687,-2.14742,0));
SFVec3f146.NameField := 'translation';
SFVec3f146.Value := '-0.0998687 -2.14742 0';
{ .SetSFVec3f }
X3DPrototype145.SFVec3f := SFVec3f146;
{ .SetX3DPrototype }
SFNode144.X3DPrototype := X3DPrototype145;
{ .AddSFNode }
X3DPrototype141.SFNode := SFNode144;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype141;
X3DPrototype147 := TX3DPrototypeNode.Create;
X3DPrototype147.NameField := 'Route';
SFNode148 := TSFNode.Create;
SFNode148.NameField := 'output';
X3DPrototype149.NameField := 'Node';
X3DPrototype149 := X3DPrototype127;
{ .SetX3DPrototype }
SFNode148.X3DPrototype := X3DPrototype149;
{ .SetSFNode }
X3DPrototype147.SFNode := SFNode148;
SFNode150 := TSFNode.Create;
SFNode150.NameField := 'input';
X3DPrototype151 := TX3DPrototypeNode.Create;
X3DPrototype151.NameField := 'Node';
SFVec3f152 := TSFVec3f.Create(Node4, false, 'translation', Vector3(3.55694,2.4116,0));
SFVec3f152.NameField := 'translation';
SFVec3f152.Value := '3.55694 2.4116 0';
{ .SetSFVec3f }
X3DPrototype151.SFVec3f := SFVec3f152;
{ .SetX3DPrototype }
SFNode150.X3DPrototype := X3DPrototype151;
{ .AddSFNode }
X3DPrototype147.SFNode := SFNode150;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype147;
X3DPrototype153 := TX3DPrototypeNode.Create;
X3DPrototype153.NameField := 'Route';
SFNode154 := TSFNode.Create;
SFNode154.NameField := 'output';
X3DPrototype155.NameField := 'Node';
X3DPrototype155 := X3DPrototype133;
{ .SetX3DPrototype }
SFNode154.X3DPrototype := X3DPrototype155;
{ .SetSFNode }
X3DPrototype153.SFNode := SFNode154;
SFNode156 := TSFNode.Create;
SFNode156.NameField := 'input';
X3DPrototype157.NameField := 'Node';
X3DPrototype157 := X3DPrototype151;
{ .SetX3DPrototype }
SFNode156.X3DPrototype := X3DPrototype157;
{ .AddSFNode }
X3DPrototype153.SFNode := SFNode156;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype153;
X3DPrototype158 := TX3DPrototypeNode.Create;
X3DPrototype158.NameField := 'Route';
SFNode159 := TSFNode.Create;
SFNode159.NameField := 'output';
X3DPrototype160.NameField := 'Node';
X3DPrototype160 := X3DPrototype139;
{ .SetX3DPrototype }
SFNode159.X3DPrototype := X3DPrototype160;
{ .SetSFNode }
X3DPrototype158.SFNode := SFNode159;
SFNode161 := TSFNode.Create;
SFNode161.NameField := 'input';
X3DPrototype162 := TX3DPrototypeNode.Create;
X3DPrototype162.NameField := 'Node';
SFVec3f163 := TSFVec3f.Create(Node4, false, 'translation', Vector3(3.75106,-0.0794556,0));
SFVec3f163.NameField := 'translation';
SFVec3f163.Value := '3.75106 -0.0794556 0';
{ .SetSFVec3f }
X3DPrototype162.SFVec3f := SFVec3f163;
{ .SetX3DPrototype }
SFNode161.X3DPrototype := X3DPrototype162;
{ .AddSFNode }
X3DPrototype158.SFNode := SFNode161;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype158;
X3DPrototype164 := TX3DPrototypeNode.Create;
X3DPrototype164.NameField := 'Route';
SFNode165 := TSFNode.Create;
SFNode165.NameField := 'output';
X3DPrototype166.NameField := 'Node';
X3DPrototype166 := X3DPrototype145;
{ .SetX3DPrototype }
SFNode165.X3DPrototype := X3DPrototype166;
{ .SetSFNode }
X3DPrototype164.SFNode := SFNode165;
SFNode167 := TSFNode.Create;
SFNode167.NameField := 'input';
X3DPrototype168.NameField := 'Node';
X3DPrototype168 := X3DPrototype162;
{ .SetX3DPrototype }
SFNode167.X3DPrototype := X3DPrototype168;
{ .AddSFNode }
X3DPrototype164.SFNode := SFNode167;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype164;
X3DPrototype169 := TX3DPrototypeNode.Create;
X3DPrototype169.NameField := 'Route';
SFNode170 := TSFNode.Create;
SFNode170.NameField := 'output';
X3DPrototype171.NameField := 'Node';
X3DPrototype171 := X3DPrototype151;
{ .SetX3DPrototype }
SFNode170.X3DPrototype := X3DPrototype171;
{ .SetSFNode }
X3DPrototype169.SFNode := SFNode170;
SFNode172 := TSFNode.Create;
SFNode172.NameField := 'input';
X3DPrototype173 := TX3DPrototypeNode.Create;
X3DPrototype173.NameField := 'Node';
SFVec3f174 := TSFVec3f.Create(Node4, false, 'translation', Vector3(7.68077,1.21228,0));
SFVec3f174.NameField := 'translation';
SFVec3f174.Value := '7.68077 1.21228 0';
{ .SetSFVec3f }
X3DPrototype173.SFVec3f := SFVec3f174;
{ .SetX3DPrototype }
SFNode172.X3DPrototype := X3DPrototype173;
{ .AddSFNode }
X3DPrototype169.SFNode := SFNode172;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype169;
X3DPrototype175 := TX3DPrototypeNode.Create;
X3DPrototype175.NameField := 'Route';
SFNode176 := TSFNode.Create;
SFNode176.NameField := 'output';
X3DPrototype177.NameField := 'Node';
X3DPrototype177 := X3DPrototype162;
{ .SetX3DPrototype }
SFNode176.X3DPrototype := X3DPrototype177;
{ .SetSFNode }
X3DPrototype175.SFNode := SFNode176;
SFNode178 := TSFNode.Create;
SFNode178.NameField := 'input';
X3DPrototype179.NameField := 'Node';
X3DPrototype179 := X3DPrototype173;
{ .SetX3DPrototype }
SFNode178.X3DPrototype := X3DPrototype179;
{ .AddSFNode }
X3DPrototype175.SFNode := SFNode178;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype175;
X3DPrototype180.NameField := 'Node';
X3DPrototype180 := X3DPrototype124;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype180;
X3DPrototype181.NameField := 'Node';
X3DPrototype181 := X3DPrototype127;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype181;
X3DPrototype182.NameField := 'Node';
X3DPrototype182 := X3DPrototype133;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype182;
X3DPrototype183.NameField := 'Node';
X3DPrototype183 := X3DPrototype139;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype183;
X3DPrototype184.NameField := 'Node';
X3DPrototype184 := X3DPrototype145;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype184;
X3DPrototype185.NameField := 'Node';
X3DPrototype185 := X3DPrototype151;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype185;
X3DPrototype186.NameField := 'Node';
X3DPrototype186 := X3DPrototype162;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype186;
X3DPrototype187.NameField := 'Node';
X3DPrototype187 := X3DPrototype173;
{ .AddX3DPrototype }
Transform121.X3DPrototype := X3DPrototype187;
{ .AddChildren }
Group9.AddChildren([Transform121]);
{ .AddGroup }
X3D0.AddChildren([Group9]);
Result := X3D0;
end;

begin
end.
