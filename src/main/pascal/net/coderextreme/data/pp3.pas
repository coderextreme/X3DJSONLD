unit pp3;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createpp3: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group10: TGroupNode;
X3DPrototype11: TX3DPrototype;
X3DPrototype12: TX3DPrototype;
Group13: TGroupNode;
Transform14: TTransformNode;
Shape15: TShapeNode;
Appearance16: TAppearanceNode;
Material17: TMaterialNode;
Extrusion18: TExtrusionNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Extrusion23: TExtrusionNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
Text28: TTextNode;
StringSensor29: TStringSensorNode;
TouchSensor30: TTouchSensorNode;
Transform31: TTransformNode;
Shape32: TShapeNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
Extrusion35: TExtrusionNode;
Transform36: TTransformNode;
Shape37: TShapeNode;
Appearance38: TAppearanceNode;
Material39: TMaterialNode;
Text40: TTextNode;
StringSensor41: TStringSensorNode;
TouchSensor42: TTouchSensorNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Appearance45: TAppearanceNode;
Material46: TMaterialNode;
Extrusion47: TExtrusionNode;
Transform48: TTransformNode;
Shape49: TShapeNode;
Appearance50: TAppearanceNode;
Material51: TMaterialNode;
Sphere52: TSphereNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
Appearance55: TAppearanceNode;
Material56: TMaterialNode;
Text57: TTextNode;
StringSensor58: TStringSensorNode;
TouchSensor59: TTouchSensorNode;
Script60: TScriptNode;
SFString61: TSFString;
MFString62: TMFString;
Script63: TScriptNode;
SFString64: TSFString;
MFString65: TMFString;
Script66: TScriptNode;
SFString67: TSFString;
MFString68: TMFString;
NavigationInfo78: TNavigationInfoNode;
Viewpoint79: TViewpointNode;
Transform80: TTransformNode;
X3DPrototype81: TX3DPrototypeNode;
Transform82: TTransformNode;
X3DPrototype83: TX3DPrototypeNode;
Transform84: TTransformNode;
X3DPrototype85: TX3DPrototypeNode;

procedure Initpp3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'pp3.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := '5 May 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 Dec 2022';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A process pipeline between three spheres (try typing on spheres and blue';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/x3d/pp3.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
{ METHOD .Head }
Group10 := TGroupNode.Create;;
X3DPrototype11 := TX3DPrototype.Create;;
X3DPrototype12 := TX3DPrototype.Create;;
Group13 := TGroupNode.Create;;
{ left }
Transform14 := TTransformNode.Create;;
Transform14.Scale := Vector3(0.5,0.5,0.5);
Shape15 := TShapeNode.Create;;
Appearance16 := TAppearanceNode.Create;;
Material17 := TMaterialNode.Create;;
Material17.DiffuseColor := Vector3(0.7,1,0);
Material17.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance16.Material := Material17;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape15.Appearance := Appearance16;
Extrusion18 := TExtrusionNode.Create;;
Extrusion18.CreaseAngle := 0.785;
Extrusion18.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion18.SetSpine([Vector3(-2.5,0,0),Vector3(-2,0,0),Vector3(-1.5,0,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape15.Geometry := Extrusion18;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape15);
end;

procedure Initpp3Part1;
begin

{ <Transform translation="-2.5 0 0"> <Shape> <Text DEF="LeftString" string='"l"'/> </Shape> </Transform> <StringSensor DEF="LeftSensor" enabled="false"/> <TouchSensor DEF="LeftTouch" enabled="true"/> }
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform14);
{ right }
Transform19 := TTransformNode.Create;;
Transform19.Scale := Vector3(0.5,0.5,0.5);
Shape20 := TShapeNode.Create;;
Appearance21 := TAppearanceNode.Create;;
Material22 := TMaterialNode.Create;;
Material22.DiffuseColor := Vector3(0,0.7,1);
Material22.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape20.Appearance := Appearance21;
Extrusion23 := TExtrusionNode.Create;;
Extrusion23.CreaseAngle := 0.785;
Extrusion23.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion23.SetSpine([Vector3(1.5,0,0),Vector3(2,0,0),Vector3(2.5,0,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := Extrusion23;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
Transform24 := TTransformNode.Create;;
Transform24.Translation := Vector3(2,0,0);
Shape25 := TShapeNode.Create;;
Appearance26 := TAppearanceNode.Create;;
Material27 := TMaterialNode.Create;;
Material27.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance26.Material := Material27;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape25.Appearance := Appearance26;
Text28 := TTextNode.Create;;
Text28.SetText(['r']);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape25.Geometry := Text28;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Transform24);
StringSensor29 := TStringSensorNode.Create;
end;

procedure Initpp3Part2;
begin
;
StringSensor29.Enabled := False;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(StringSensor29);
TouchSensor30 := TTouchSensorNode.Create;;
TouchSensor30.Description := 'touch to activate';
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(TouchSensor30);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform19);
{ up }
Transform31 := TTransformNode.Create;;
Transform31.Scale := Vector3(0.5,0.5,0.5);
Shape32 := TShapeNode.Create;;
Appearance33 := TAppearanceNode.Create;;
Material34 := TMaterialNode.Create;;
Material34.DiffuseColor := Vector3(0,0.7,1);
Material34.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance33.Material := Material34;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape32.Appearance := Appearance33;
Extrusion35 := TExtrusionNode.Create;;
Extrusion35.CreaseAngle := 0.785;
Extrusion35.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion35.SetSpine([Vector3(0,1.5,0),Vector3(0,2,0),Vector3(0,2.5,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape32.Geometry := Extrusion35;
{ METHOD .FdChildren.Add }
Transform31.FdChildren.Add(Shape32);
Transform36 := TTransformNode.Create;;
Transform36.Translation := Vector3(-0.5,2,0);
Shape37 := TShapeNode.Create;;
Appearance38 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance38.Material := Material27;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape37.Appearance := Appearance38;
Text40 := TTextNode.Create;;
Text40.SetText(['u']);
end;

procedure Initpp3Part3;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape37.Geometry := Text40;
{ METHOD .FdChildren.Add }
Transform36.FdChildren.Add(Shape37);
{ METHOD .FdChildren.Add }
Transform31.FdChildren.Add(Transform36);
StringSensor41 := TStringSensorNode.Create;;
StringSensor41.Enabled := False;
{ METHOD .FdChildren.Add }
Transform31.FdChildren.Add(StringSensor41);
TouchSensor42 := TTouchSensorNode.Create;;
TouchSensor42.Description := 'touch to activate';
{ METHOD .FdChildren.Add }
Transform31.FdChildren.Add(TouchSensor42);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform31);
{ down }
Transform43 := TTransformNode.Create;;
Transform43.Scale := Vector3(0.5,0.5,0.5);
Shape44 := TShapeNode.Create;;
Appearance45 := TAppearanceNode.Create;;
Material46 := TMaterialNode.Create;;
Material46.DiffuseColor := Vector3(0.7,1,0);
Material46.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance45.Material := Material46;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape44.Appearance := Appearance45;
Extrusion47 := TExtrusionNode.Create;;
Extrusion47.CreaseAngle := 0.785;
Extrusion47.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion47.SetSpine([Vector3(0,-2.5,0),Vector3(0,-2,0),Vector3(0,-1.5,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape44.Geometry := Extrusion47;
{ METHOD .FdChildren.Add }
Transform43.FdChildren.Add(Shape44);
{ <Transform translation="-0.5 -2.5 0"> <Shape> <Text DEF="DownString" string='"d"'/> </Shape> </Transform> <StringSensor DEF="DownSensor" enabled="false"/> <TouchSensor description='touch to activate' DEF="DownTouch" enabled="true"/> }
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform43);
{ center }
Transform48 := TTransformNode.Create;;
Shape49 := TShapeNode.Create;;
Appearance50 := TAppearanceNode.Create;;
Material51 := TMaterialNode.Create;
end;

procedure Initpp3Part4;
begin
;
Material51.DiffuseColor := Vector3(1,0,0.7);
{ METHOD .SetMaterial }
Appearance50.Material := Material51;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape49.Appearance := Appearance50;
Sphere52 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape49.Geometry := Sphere52;
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(Shape49);
Transform53 := TTransformNode.Create;;
Transform53.Scale := Vector3(0.5,0.5,0.5);
Transform53.Translation := Vector3(-0.5,0,1);
Shape54 := TShapeNode.Create;;
Appearance55 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance55.Material := Material27;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape54.Appearance := Appearance55;
Text57 := TTextNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape54.Geometry := Text57;
{ METHOD .FdChildren.Add }
Transform53.FdChildren.Add(Shape54);
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(Transform53);
StringSensor58 := TStringSensorNode.Create;;
StringSensor58.Enabled := False;
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(StringSensor58);
TouchSensor59 := TTouchSensorNode.Create;;
TouchSensor59.Description := 'touch to activate';
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(TouchSensor59);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform48);
{ METHOD .AddGroup }
X3DPrototype12.AddChildren([Group13]);
Script60 := TScriptNode.Create;;
SFString61 := TSFString.CreateUndefined(Script60, false, 'set_rightstring');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFString61);
MFString62 := TMFString.CreateUndefined(Script60, false, 'rightlines');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(MFString62);

Script60.SetSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype12.AddScript([Script60]);
Script63 := TScriptNode.Create;;
SFString64 := TSFString.CreateUndefined(Script63, false, 'set_upstring');
{ METHOD .Fd.AddCustomField }
Script63.AddCustomField(SFString64);
MFString65 := TMFString.CreateUndefined(Script63, false, 'uplines');
{ METHOD .Fd.AddCustomField }
Script63.AddCustomField(MFString65);

Script63.SetSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype12.AddScript([Script63]);
Script66 := TScriptNode.Create;;
SFString67 := TSFString.CreateUndefined(Script66, false, 'set_centerstring');
{ METHOD .Fd.AddCustomField }
Script66.AddCustomField(SFString67);
MFString68 := TMFString.CreateUndefined(Script66, false, 'centerlines');
{ METHOD .Fd.AddCustomField }
Script66.AddCustomField(MFString68);

Script66.SetSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype12.AddScript([Script66]);
{ Original "CenterSensor.EventEnteredText TO CenterSingleToMultiString.EventSet_centerstring }
{ Sample CenterSensor.EventEnteredText TO CenterSingleToMultiString.EventSet_centerstring}
X3DPrototype12.AddRoute(StringSensor58.EventEnteredText, Script66.EventSet_centerstring);
{ METHOD .AddX3DROUTE }
{ Original "CenterSingleToMultiString.centerlines TO CenterString.EventSet_string }
{ Sample CenterSingleToMultiString.centerlines TO CenterString.EventSet_string}
X3DPrototype12.AddRoute(CenterSingleToMultiString.undefined, Text57.EventSet_string);
{ METHOD .AddX3DROUTE }
{ Original "CenterTouch.EventIsOver TO CenterSensor.EventSet_enabled }
{ Sample CenterTouch.EventIsOver TO CenterSensor.EventSet_enabled}
X3DPrototype12.AddRoute(TouchSensor59.EventIsOver, StringSensor58.EventSet_enabled);
{ METHOD .AddX3DROUTE }
{ Original "RightSensor.EventEnteredText TO RightSingleToMultiString.EventSet_rightstring }
{ Sample RightSensor.EventEnteredText TO RightSingleToMultiString.EventSet_rightstring}
X3DPrototype12.AddRoute(StringSensor29.EventEnteredText, Script60.EventSet_rightstring);
{ METHOD .AddX3DROUTE }
{ Original "RightSingleToMultiString.rightlines TO RightString.EventSet_string }
{ Sample RightSingleToMultiString.rightlines TO RightString.EventSet_string}
X3DPrototype12.AddRoute(RightSingleToMultiString.undefined, Text28.EventSet_string);
{ METHOD .AddX3DROUTE }
{ Original "RightTouch.EventIsOver TO RightSensor.EventSet_enabled }
{ Sample RightTouch.EventIsOver TO RightSensor.EventSet_enabled}
X3DPrototype12.AddRoute(TouchSensor30.EventIsOver, StringSensor29.EventSet_enabled);
{ METHOD .AddX3DROUTE }
{ Original "UpSensor.EventEnteredText TO UpSingleToMultiString.EventSet_upstring }
{ Sample UpSensor.EventEnteredText TO UpSingleToMultiString.EventSet_upstring}
X3DPrototype12.AddRoute(StringSensor41.EventEnteredText, Script63.EventSet_upstring);
{ METHOD .AddX3DROUTE }
{ Original "UpSingleToMultiString.uplines TO UpString.EventSet_string }
{ Sample UpSingleToMultiString.uplines TO UpString.EventSet_string}
X3DPrototype12.AddRoute(UpSingleToMultiString.undefined, Text40.EventSet_string);
{ METHOD .AddX3DROUTE }
{ Original "UpTouch.EventIsOver TO UpSensor.EventSet_enabled }
{ Sample UpTouch.EventIsOver TO UpSensor.EventSet_enabled}
X3DPrototype12.AddRoute(TouchSensor42.EventIsOver, StringSensor41.EventSet_enabled);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype11.AddX3DPrototype([X3DPrototype12]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype11]);
NavigationInfo78 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(NavigationInfo78);
Viewpoint79 := TViewpointNode.Create;;
Viewpoint79.Description := 'Process pipes';
Viewpoint79.Orientation := Vector4(1,0,0,-0.4);
Viewpoint79.Position := Vector3(0,5,12);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Viewpoint79);
Transform80 := TTransformNode.Create;;
Transform80.Translation := Vector3(0,-2.5,0);
X3DPrototype81 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform80.AddX3DPrototype([X3DPrototype81]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform80);
Transform82 := TTransformNode.Create;;
X3DPrototype83 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform82.AddX3DPrototype([X3DPrototype83]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform82);
Transform84 := TTransformNode.Create;;
Transform84.Translation := Vector3(0,2.5,0);
X3DPrototype85 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform84.AddX3DPrototype([X3DPrototype85]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform84);
{ METHOD .AddGroup }
X3D0.AddChildren([Group10]);
end;

function Createpp3: TX3DRootNode;
begin
Initpp3Part0;
Initpp3Part1;
Initpp3Part2;
Initpp3Part3;
Initpp3Part4;
Result := X3D0;
end;

begin
end.
