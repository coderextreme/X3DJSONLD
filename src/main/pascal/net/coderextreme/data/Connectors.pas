unit Connectors;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateConnectors: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group11: TGroupNode;
X3DPrototype12: TX3DPrototype;
X3DInterfaceDeclaration13: TX3DInterfaceDeclaration;
SFFloat14: TSFFloat;
SFVec2f15: TSFVec2f;
SFBool16: TSFBool;
X3DPrototype17: TX3DPrototype;
IndexedFaceSet18: TIndexedFaceSetNode;
Coordinate20: TCoordinateNode;
Script21: TScriptNode;
SFFloat22: TSFFloat;
SFFloat23: TSFFloat;
SFVec2f24: TSFVec2f;
SFNode25: TSFNode;
IndexedFaceSet26: TIndexedFaceSetNode;
X3DPrototype28: TX3DPrototype;
X3DInterfaceDeclaration29: TX3DInterfaceDeclaration;
SFColor30: TSFColor;
SFColor31: TSFColor;
SFFloat32: TSFFloat;
SFNode33: TSFNode;
X3DPrototype34: TX3DPrototype;
Transform35: TTransformNode;
Shape36: TShapeNode;
Appearance38: TAppearanceNode;
Material39: TMaterialNode;
Shape41: TShapeNode;
Appearance43: TAppearanceNode;
FillProperties44: TFillPropertiesNode;
LineProperties45: TLinePropertiesNode;
Material47: TMaterialNode;
X3DPrototype49: TX3DPrototype;
X3DInterfaceDeclaration50: TX3DInterfaceDeclaration;
SFVec3f51: TSFVec3f;
X3DPrototype52: TX3DPrototype;
Group53: TGroupNode;
PlaneSensor54: TPlaneSensorNode;
Transform55: TTransformNode;
X3DPrototype57: TX3DPrototypeNode;
SFNode58: TSFNode;
X3DPrototype59: TX3DPrototypeNode;
SFFloat60: TSFFloat;
SFVec2f61: TSFVec2f;
Transform62: TTransformNode;
X3DPrototype63: TX3DPrototypeNode;
SFColor64: TSFColor;
SFNode65: TSFNode;
Disk2D66: TDisk2DNode;
Transform67: TTransformNode;
X3DPrototype68: TX3DPrototypeNode;
SFColor69: TSFColor;
SFNode70: TSFNode;
Disk2D71: TDisk2DNode;
Script72: TScriptNode;
SFVec3f73: TSFVec3f;
SFNode74: TSFNode;
PlaneSensor75: TPlaneSensorNode;
SFNode76: TSFNode;
Transform77: TTransformNode;
X3DPrototype80: TX3DPrototype;
X3DInterfaceDeclaration81: TX3DInterfaceDeclaration;
SFColor82: TSFColor;
SFFloat83: TSFFloat;
SFNode84: TSFNode;
SFNode85: TSFNode;
X3DPrototype86: TX3DPrototype;
Shape87: TShapeNode;
Appearance88: TAppearanceNode;
LineProperties89: TLinePropertiesNode;
Material91: TMaterialNode;
LineSet93: TLineSetNode;
Coordinate94: TCoordinateNode;
Script95: TScriptNode;
SFVec3f96: TSFVec3f;
SFInt3297: TSFInt32;
SFNode98: TSFNode;
SFNode99: TSFNode;
SFNode100: TSFNode;
LineSet101: TLineSetNode;
SFNode102: TSFNode;
Script103: TScriptNode;
NavigationInfo105: TNavigationInfoNode;
Background106: TBackgroundNode;
OrthoViewpoint107: TOrthoViewpointNode;
Viewpoint108: TViewpointNode;
Transform109: TTransformNode;
X3DPrototype110: TX3DPrototypeNode;
SFNode111: TSFNode;
X3DPrototype112: TX3DPrototypeNode;
SFVec3f113: TSFVec3f;
SFNode114: TSFNode;
X3DPrototype115: TX3DPrototypeNode;
SFVec3f116: TSFVec3f;
X3DPrototype117: TX3DPrototypeNode;
SFNode118: TSFNode;
X3DPrototype119: TX3DPrototypeNode;
SFNode120: TSFNode;
X3DPrototype121: TX3DPrototypeNode;
SFVec3f122: TSFVec3f;
X3DPrototype123: TX3DPrototypeNode;
SFNode124: TSFNode;
X3DPrototype125: TX3DPrototypeNode;
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
X3DPrototype146: TX3DPrototypeNode;
SFNode147: TSFNode;
X3DPrototype148: TX3DPrototypeNode;
SFNode149: TSFNode;
X3DPrototype150: TX3DPrototypeNode;
SFVec3f151: TSFVec3f;
X3DPrototype152: TX3DPrototypeNode;
SFNode153: TSFNode;
X3DPrototype154: TX3DPrototypeNode;
SFNode155: TSFNode;
X3DPrototype156: TX3DPrototypeNode;
X3DPrototype157: TX3DPrototypeNode;
SFNode158: TSFNode;
X3DPrototype159: TX3DPrototypeNode;
SFNode160: TSFNode;
X3DPrototype161: TX3DPrototypeNode;
SFVec3f162: TSFVec3f;
X3DPrototype163: TX3DPrototypeNode;
SFNode164: TSFNode;
X3DPrototype165: TX3DPrototypeNode;
SFNode166: TSFNode;
X3DPrototype167: TX3DPrototypeNode;
X3DPrototype168: TX3DPrototypeNode;
X3DPrototype169: TX3DPrototypeNode;
X3DPrototype170: TX3DPrototypeNode;
X3DPrototype171: TX3DPrototypeNode;
X3DPrototype172: TX3DPrototypeNode;
X3DPrototype173: TX3DPrototypeNode;
X3DPrototype174: TX3DPrototypeNode;
X3DPrototype175: TX3DPrototypeNode;

procedure InitConnectorsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Navigation'] := 3;
{ METHOD .Component }
X3D0.Meta['comment'] := 'World of Titania';
{ METHOD .Meta }
X3D0.Meta['created'] := 'Fri, 4 Sep 2015 10:19:01 GMT';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Holger Seelig';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Titania V3.0.4, https://titania.create3000.de';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A graph of nodes you can move around';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'Tue, 25 Jul 2017 09:42:17 GMT';
{ METHOD .Meta }
X3D0.Meta['title'] := 'Connectors';
{ METHOD .Meta }
{ METHOD .Head }
Group11 := TGroupNode.Create;;
X3DPrototype12 := TX3DPrototype.Create;;
X3DInterfaceDeclaration13 := TX3DInterfaceDeclaration.Create(nil);;
SFFloat14 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration13, false, 'cornerRadius');
SFFloat14.Value := '1';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration13.AddSFFloat([SFFloat14]);
SFVec2f15 := TSFVec2f.CreateUndefined(X3DInterfaceDeclaration13, false, 'size');
SFVec2f15.Value := '2 2';
{ METHOD .AddSFVec2f }
X3DInterfaceDeclaration13.AddSFVec2f([SFVec2f15]);
SFBool16 := TSFBool.CreateUndefined(X3DInterfaceDeclaration13, false, 'solid');
SFBool16.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration13.AddSFBool([SFBool16]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype12.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration13]);
X3DPrototype17 := TX3DPrototype.Create;;
IndexedFaceSet18 := TIndexedFaceSetNode.Create;;
Coordinate20 := TCoordinateNode.Create;;
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet18.Coord := Coordinate20;
{ METHOD .AddIndexedFaceSet }
X3DPrototype17.AddIndexedFaceSet([IndexedFaceSet18]);
Script21 := TScriptNode.Create;;
Script21.DirectOutput := True;
end;

procedure InitConnectorsPart1;
begin

SFFloat22 := TSFFloat.CreateUndefined(Script21, false, 'cornerDimension');
SFFloat22.Value := '10';
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFFloat22);
SFFloat23 := TSFFloat.CreateUndefined(Script21, false, 'cornerRadius');
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFFloat23);
SFVec2f24 := TSFVec2f.CreateUndefined(Script21, false, 'size');
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFVec2f24);
SFNode25 := TSFNode.CreateUndefined(Script21, false, 'geometry');
{ METHOD .AddIndexedFaceSet }
SFNode25.AddIndexedFaceSet([IndexedFaceSet18]);
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFNode25);

Script21.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype17.AddScript([Script21]);
{ METHOD .AddX3DPrototype }
X3DPrototype12.AddX3DPrototype([X3DPrototype17]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype12]);
X3DPrototype28 := TX3DPrototype.Create;;
X3DInterfaceDeclaration29 := TX3DInterfaceDeclaration.Create(nil);;
SFColor30 := TSFColor.CreateUndefined(X3DInterfaceDeclaration29, false, 'fillColor');
SFColor30.Value := '0.1 0.1 0.1';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration29.AddSFColor([SFColor30]);
SFColor31 := TSFColor.CreateUndefined(X3DInterfaceDeclaration29, false, 'lineColor');
SFColor31.Value := '0.4 0.4 0.4';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration29.AddSFColor([SFColor31]);
SFFloat32 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration29, false, 'linewidthScaleFactor');
SFFloat32.Value := '1';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration29.AddSFFloat([SFFloat32]);
SFNode33 := TSFNode.CreateUndefined(X3DInterfaceDeclaration29, false, 'geometry');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration29.AddSFNode([SFNode33]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype28.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration29]);
X3DPrototype34 := TX3DPrototype.Create;;
Transform35 := TTransformNode.Create;;
Shape36 := TShapeNode.Create;;
Appearance38 := TAppearanceNode.Create;;
Material39 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance38.Material := Material39;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape36.Appearance := Appearance38;
{ METHOD .FdChildren.Add }
Transform35.FdChildren.Add(Shape36);
Shape41 := TShapeNode.Create;;
Appearance43 := TAppearanceNode.Create;;
FillProperties44 := TFillPropertiesNode.Create;;
FillProperties44.Filled := False;
FillProperties44.Hatched := False;
{ METHOD .FillProperties }
{ METHOD.SET .FillProperties }
Appearance43.FillProperties := FillProperties44;
LineProperties45 := TLinePropertiesNode.Create;;
{ METHOD .LineProperties }
{ METHOD.SET .LineProperties }
Appearance43.LineProperties := LineProperties45;
Material47 := TMaterialNode.Create;;
Material47.DiffuseColor := Vector3(0,0,0);
{ METHOD .SetMaterial }
Appearance43.Material := Material47;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape41.Appearance := Appearance43;
{ METHOD .FdChildren.Add }
Transform35.FdChildren.Add(Shape41);
{ METHOD .AddTransform }
X3DPrototype34.AddTransform([Transform35]);
{ METHOD .AddX3DPrototype }
X3DPrototype28.AddX3DPrototype([X3DPrototype34]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype28]);
X3DPrototype49 := TX3DPrototype.Create;;
X3DInterfaceDeclaration50 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f51 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration50, false, 'translation');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration50.AddSFVec3f([SFVec3f51]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype49.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration50]);
X3DPrototype52 := TX3DPrototype.Create;;
Group53 := TGroupNode.Create;;
PlaneSensor54 := TPlaneSensorNode.Create;;
PlaneSensor54.Description := 'Move Node';
{ METHOD .FdChildren.Add }
Group53.FdChildren.Add(PlaneSensor54);
Transform55 := TTransformNode.Create;;
X3DPrototype57 := TX3DPrototypeNode;
SFNode58 := TSFNode.CreateUndefined(X3DPrototype57, false, 'geometry');
X3DPrototype59 := TX3DPrototypeNode;
SFFloat60 := TSFFloat.CreateUndefined(X3DPrototype59, false, 'cornerRadius');
SFFloat60.Value := '0.12';
{ METHOD .AddSFFloat }
X3DPrototype59.AddSFFloat([SFFloat60]);
SFVec2f61 := TSFVec2f.CreateUndefined(X3DPrototype59, false, 'size');
SFVec2f61.Value := '2 1';
{ METHOD .AddSFVec2f }
X3DPrototype59.AddSFVec2f([SFVec2f61]);
{ METHOD .AddX3DPrototype }
SFNode58.AddX3DPrototype([X3DPrototype59]);
{ METHOD .AddSFNode }
X3DPrototype57.AddSFNode([SFNode58]);
{ METHOD .AddX3DPrototype }
Transform55.AddX3DPrototype([X3DPrototype57]);
Transform62 := TTransformNode.Create;;
Transform62.Translation := Vector3(-1,0,0);
X3DPrototype63 := TX3DPrototypeNode;
SFColor64 := TSFColor.CreateUndefined(X3DPrototype63, false, 'lineColor');
SFColor64.Value := '0.72 0.14 0.23';
{ METHOD .AddSFColor }
X3DPrototype63.AddSFColor([SFColor64]);
SFNode65 := TSFNode.CreateUndefined(X3DPrototype63, false, 'geometry');
Disk2D66 := TDisk2DNode.Create;;
Disk2D66.OuterRadius := 0.2;
{ METHOD .AddDisk2D }
SFNode65.AddDisk2D([Disk2D66]);
{ METHOD .AddSFNode }
X3DPrototype63.AddSFNode([SFNode65]);
{ METHOD .AddX3DPrototype }
Transform62.AddX3DPrototype([X3DPrototype63]);
{ METHOD .FdChildren.Add }
Transform55.FdChildren.Add(Transform62);
Transform67 := TTransformNode.Create;;
Transform67.Translation := Vector3(1,0,0);
X3DPrototype68 := TX3DPrototypeNode;
SFColor69 := TSFColor.CreateUndefined(X3DPrototype68, false, 'lineColor');
SFColor69.Value := '0.44 0.5 0.72';
{ METHOD .AddSFColor }
X3DPrototype68.AddSFColor([SFColor69]);
SFNode70 := TSFNode.CreateUndefined(X3DPrototype68, false, 'geometry');
{ METHOD .AddDisk2D }
SFNode70.AddDisk2D([Disk2D66]);
{ METHOD .AddSFNode }
X3DPrototype68.AddSFNode([SFNode70]);
{ METHOD .AddX3DPrototype }
Transform67.AddX3DPrototype([X3DPrototype68]);
{ METHOD .FdChildren.Add }
Transform55.FdChildren.Add(Transform67);
{ METHOD .FdChildren.Add }
Group53.FdChildren.Add(Transform55);
{ METHOD .AddGroup }
X3DPrototype52.AddChildren([Group53]);
Script72 := TScriptNode.Create;;
Script72.DirectOutput := True;
SFVec3f73 := TSFVec3f.CreateUndefined(Script72, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script72.AddCustomField(SFVec3f73);
SFNode74 := TSFNode.CreateUndefined(Script72, false, 'sensor');
{ METHOD .Fd.Value }
SFNode74.Value := PlaneSensor54;
{ METHOD .Fd.AddCustomField }
Script72.AddCustomField(SFNode74);
SFNode76 := TSFNode.CreateUndefined(Script72, false, 'transform');
{ METHOD .Fd.Value }
SFNode76.Value := Transform55;
{ METHOD .Fd.AddCustomField }
Script72.AddCustomField(SFNode76);

Script72.SetSourceCode('''ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype52.AddScript([Script72]);
{ Original "PlaneSensor.EventTranslation_changed TO Node.FdTranslation.EventIn }
{ Sample PlaneSensor.EventTranslation_changed TO Node.FdTranslation.EventIn}
X3DPrototype52.AddRoute(PlaneSensor54.EventTranslation_changed, Transform55.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype49.AddX3DPrototype([X3DPrototype52]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype49]);
X3DPrototype80 := TX3DPrototype.Create;;
X3DInterfaceDeclaration81 := TX3DInterfaceDeclaration.Create(nil);;
SFColor82 := TSFColor.CreateUndefined(X3DInterfaceDeclaration81, false, 'lineColor');
SFColor82.Value := '0.43 0.43 0.98';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration81.AddSFColor([SFColor82]);
SFFloat83 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration81, false, 'linewidthScaleFactor');
SFFloat83.Value := '2';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration81.AddSFFloat([SFFloat83]);
SFNode84 := TSFNode.CreateUndefined(X3DInterfaceDeclaration81, false, 'output');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration81.AddSFNode([SFNode84]);
SFNode85 := TSFNode.CreateUndefined(X3DInterfaceDeclaration81, false, 'input');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration81.AddSFNode([SFNode85]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype80.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration81]);
X3DPrototype86 := TX3DPrototype.Create;;
Shape87 := TShapeNode.Create;;
Appearance88 := TAppearanceNode.Create;;
LineProperties89 := TLinePropertiesNode.Create;;
{ METHOD .LineProperties }
{ METHOD.SET .LineProperties }
Appearance88.LineProperties := LineProperties89;
Material91 := TMaterialNode.Create;;
Material91.DiffuseColor := Vector3(0,0,0);
{ METHOD .SetMaterial }
Appearance88.Material := Material91;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape87.Appearance := Appearance88;
LineSet93 := TLineSetNode.Create;;
LineSet93.SetVertexCount([2]);
Coordinate94 := TCoordinateNode.Create;;
Coordinate94.SetPoint([Vector3(-1,0,0),Vector3(1,0,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet93.Coord := Coordinate94;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape87.Geometry := LineSet93;
{ METHOD .AddShape }
X3DPrototype86.AddShape([Shape87]);
Script95 := TScriptNode.Create;;
Script95.DirectOutput := True;
SFVec3f96 := TSFVec3f.CreateUndefined(Script95, false, 'set_translation');
{ METHOD .Fd.AddCustomField }
Script95.AddCustomField(SFVec3f96);
SFInt3297 := TSFInt32.CreateUndefined(Script95, false, 'routeDimension');
SFInt3297.Value := '21';
{ METHOD .Fd.AddCustomField }
Script95.AddCustomField(SFInt3297);
SFNode98 := TSFNode.CreateUndefined(Script95, false, 'output');
{ METHOD .Fd.AddCustomField }
Script95.AddCustomField(SFNode98);
SFNode99 := TSFNode.CreateUndefined(Script95, false, 'input');
{ METHOD .Fd.AddCustomField }
Script95.AddCustomField(SFNode99);
SFNode100 := TSFNode.CreateUndefined(Script95, false, 'geometry');
{ METHOD .AddLineSet }
SFNode100.AddLineSet([LineSet93]);
{ METHOD .Fd.AddCustomField }
Script95.AddCustomField(SFNode100);
SFNode102 := TSFNode.CreateUndefined(Script95, false, 'self');
{ METHOD .AddScript }
SFNode102.AddScript([Script95]);
{ METHOD .Fd.AddCustomField }
Script95.AddCustomField(SFNode102);

Script95.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype86.AddScript([Script95]);
{ METHOD .AddX3DPrototype }
X3DPrototype80.AddX3DPrototype([X3DPrototype86]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype80]);
NavigationInfo105 := TNavigationInfoNode.Create;;
NavigationInfo105.SetType(['FLY','ANY']);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(NavigationInfo105);
Background106 := TBackgroundNode.Create;;
Background106.SetSkyColor([Vector3(0.2,0.2,0.2)]);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Background106);
OrthoViewpoint107 := TOrthoViewpointNode.Create;;
OrthoViewpoint107.Description := 'OthoViewpoint';
OrthoViewpoint107.Position := Vector3(-3.13496,-4.19776,10);
OrthoViewpoint107.CenterOfRotation := Vector3(-3.13496,-4.19776,0);
OrthoViewpoint107.SetFieldOfView([0,0,10,10]);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(OrthoViewpoint107);
Viewpoint108 := TViewpointNode.Create;;
Viewpoint108.Description := 'Viewpoint';
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Viewpoint108);
Transform109 := TTransformNode.Create;;
X3DPrototype110 := TX3DPrototypeNode;
SFNode111 := TSFNode.CreateUndefined(X3DPrototype110, false, 'output');
X3DPrototype112 := TX3DPrototypeNode;
SFVec3f113 := TSFVec3f.CreateUndefined(X3DPrototype112, false, 'translation');
SFVec3f113.Value := '-3.98323 2.88948 0';
{ METHOD .AddSFVec3f }
X3DPrototype112.AddSFVec3f([SFVec3f113]);
{ METHOD .AddX3DPrototype }
SFNode111.AddX3DPrototype([X3DPrototype112]);
{ METHOD .AddSFNode }
X3DPrototype110.AddSFNode([SFNode111]);
SFNode114 := TSFNode.CreateUndefined(X3DPrototype110, false, 'input');
X3DPrototype115 := TX3DPrototypeNode;
SFVec3f116 := TSFVec3f.CreateUndefined(X3DPrototype115, false, 'translation');
SFVec3f116.Value := '-0.0890862 2.96049 0';
{ METHOD .AddSFVec3f }
X3DPrototype115.AddSFVec3f([SFVec3f116]);
{ METHOD .AddX3DPrototype }
SFNode114.AddX3DPrototype([X3DPrototype115]);
{ METHOD .AddSFNode }
X3DPrototype110.AddSFNode([SFNode114]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype110]);
X3DPrototype117 := TX3DPrototypeNode;
SFNode118 := TSFNode.CreateUndefined(X3DPrototype117, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode118.AddX3DPrototype([X3DPrototype112]);
{ METHOD .AddSFNode }
X3DPrototype117.AddSFNode([SFNode118]);
SFNode120 := TSFNode.CreateUndefined(X3DPrototype117, false, 'input');
X3DPrototype121 := TX3DPrototypeNode;
SFVec3f122 := TSFVec3f.CreateUndefined(X3DPrototype121, false, 'translation');
SFVec3f122.Value := '-0.104169 1.16371 0';
{ METHOD .AddSFVec3f }
X3DPrototype121.AddSFVec3f([SFVec3f122]);
{ METHOD .AddX3DPrototype }
SFNode120.AddX3DPrototype([X3DPrototype121]);
{ METHOD .AddSFNode }
X3DPrototype117.AddSFNode([SFNode120]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype117]);
X3DPrototype123 := TX3DPrototypeNode;
SFNode124 := TSFNode.CreateUndefined(X3DPrototype123, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode124.AddX3DPrototype([X3DPrototype112]);
{ METHOD .AddSFNode }
X3DPrototype123.AddSFNode([SFNode124]);
SFNode126 := TSFNode.CreateUndefined(X3DPrototype123, false, 'input');
X3DPrototype127 := TX3DPrototypeNode;
SFVec3f128 := TSFVec3f.CreateUndefined(X3DPrototype127, false, 'translation');
SFVec3f128.Value := '-0.0998688 -0.40172 0';
{ METHOD .AddSFVec3f }
X3DPrototype127.AddSFVec3f([SFVec3f128]);
{ METHOD .AddX3DPrototype }
SFNode126.AddX3DPrototype([X3DPrototype127]);
{ METHOD .AddSFNode }
X3DPrototype123.AddSFNode([SFNode126]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype123]);
X3DPrototype129 := TX3DPrototypeNode;
SFNode130 := TSFNode.CreateUndefined(X3DPrototype129, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode130.AddX3DPrototype([X3DPrototype112]);
{ METHOD .AddSFNode }
X3DPrototype129.AddSFNode([SFNode130]);
SFNode132 := TSFNode.CreateUndefined(X3DPrototype129, false, 'input');
X3DPrototype133 := TX3DPrototypeNode;
SFVec3f134 := TSFVec3f.CreateUndefined(X3DPrototype133, false, 'translation');
SFVec3f134.Value := '-0.0998687 -2.14742 0';
{ METHOD .AddSFVec3f }
X3DPrototype133.AddSFVec3f([SFVec3f134]);
{ METHOD .AddX3DPrototype }
SFNode132.AddX3DPrototype([X3DPrototype133]);
{ METHOD .AddSFNode }
X3DPrototype129.AddSFNode([SFNode132]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype129]);
X3DPrototype135 := TX3DPrototypeNode;
SFNode136 := TSFNode.CreateUndefined(X3DPrototype135, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode136.AddX3DPrototype([X3DPrototype115]);
{ METHOD .AddSFNode }
X3DPrototype135.AddSFNode([SFNode136]);
SFNode138 := TSFNode.CreateUndefined(X3DPrototype135, false, 'input');
X3DPrototype139 := TX3DPrototypeNode;
SFVec3f140 := TSFVec3f.CreateUndefined(X3DPrototype139, false, 'translation');
SFVec3f140.Value := '3.55694 2.4116 0';
{ METHOD .AddSFVec3f }
X3DPrototype139.AddSFVec3f([SFVec3f140]);
{ METHOD .AddX3DPrototype }
SFNode138.AddX3DPrototype([X3DPrototype139]);
{ METHOD .AddSFNode }
X3DPrototype135.AddSFNode([SFNode138]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype135]);
X3DPrototype141 := TX3DPrototypeNode;
SFNode142 := TSFNode.CreateUndefined(X3DPrototype141, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode142.AddX3DPrototype([X3DPrototype121]);
{ METHOD .AddSFNode }
X3DPrototype141.AddSFNode([SFNode142]);
SFNode144 := TSFNode.CreateUndefined(X3DPrototype141, false, 'input');
{ METHOD .AddX3DPrototype }
SFNode144.AddX3DPrototype([X3DPrototype139]);
{ METHOD .AddSFNode }
X3DPrototype141.AddSFNode([SFNode144]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype141]);
X3DPrototype146 := TX3DPrototypeNode;
SFNode147 := TSFNode.CreateUndefined(X3DPrototype146, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode147.AddX3DPrototype([X3DPrototype127]);
{ METHOD .AddSFNode }
X3DPrototype146.AddSFNode([SFNode147]);
SFNode149 := TSFNode.CreateUndefined(X3DPrototype146, false, 'input');
X3DPrototype150 := TX3DPrototypeNode;
SFVec3f151 := TSFVec3f.CreateUndefined(X3DPrototype150, false, 'translation');
SFVec3f151.Value := '3.75106 -0.0794556 0';
{ METHOD .AddSFVec3f }
X3DPrototype150.AddSFVec3f([SFVec3f151]);
{ METHOD .AddX3DPrototype }
SFNode149.AddX3DPrototype([X3DPrototype150]);
{ METHOD .AddSFNode }
X3DPrototype146.AddSFNode([SFNode149]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype146]);
X3DPrototype152 := TX3DPrototypeNode;
SFNode153 := TSFNode.CreateUndefined(X3DPrototype152, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode153.AddX3DPrototype([X3DPrototype133]);
{ METHOD .AddSFNode }
X3DPrototype152.AddSFNode([SFNode153]);
SFNode155 := TSFNode.CreateUndefined(X3DPrototype152, false, 'input');
{ METHOD .AddX3DPrototype }
SFNode155.AddX3DPrototype([X3DPrototype150]);
{ METHOD .AddSFNode }
X3DPrototype152.AddSFNode([SFNode155]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype152]);
X3DPrototype157 := TX3DPrototypeNode;
SFNode158 := TSFNode.CreateUndefined(X3DPrototype157, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode158.AddX3DPrototype([X3DPrototype139]);
{ METHOD .AddSFNode }
X3DPrototype157.AddSFNode([SFNode158]);
SFNode160 := TSFNode.CreateUndefined(X3DPrototype157, false, 'input');
X3DPrototype161 := TX3DPrototypeNode;
SFVec3f162 := TSFVec3f.CreateUndefined(X3DPrototype161, false, 'translation');
SFVec3f162.Value := '7.68077 1.21228 0';
{ METHOD .AddSFVec3f }
X3DPrototype161.AddSFVec3f([SFVec3f162]);
{ METHOD .AddX3DPrototype }
SFNode160.AddX3DPrototype([X3DPrototype161]);
{ METHOD .AddSFNode }
X3DPrototype157.AddSFNode([SFNode160]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype157]);
X3DPrototype163 := TX3DPrototypeNode;
SFNode164 := TSFNode.CreateUndefined(X3DPrototype163, false, 'output');
{ METHOD .AddX3DPrototype }
SFNode164.AddX3DPrototype([X3DPrototype150]);
{ METHOD .AddSFNode }
X3DPrototype163.AddSFNode([SFNode164]);
SFNode166 := TSFNode.CreateUndefined(X3DPrototype163, false, 'input');
{ METHOD .AddX3DPrototype }
SFNode166.AddX3DPrototype([X3DPrototype161]);
{ METHOD .AddSFNode }
X3DPrototype163.AddSFNode([SFNode166]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype163]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype112]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype115]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype121]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype127]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype133]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype139]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype150]);
{ METHOD .AddX3DPrototype }
Transform109.AddX3DPrototype([X3DPrototype161]);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Transform109);
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function CreateConnectors: TX3DRootNode;
begin
InitConnectorsPart0;
InitConnectorsPart1;
Result := X3D0;
end;

begin
end.
