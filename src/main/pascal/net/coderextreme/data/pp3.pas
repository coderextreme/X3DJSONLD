unit pp3;

interface

uses X3DNodes;

function Createpp3: TX3DRootNode;

implementation

uses CastleVectors;

function Createpp3: TX3DRootNode;
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
X3DField61: TX3DField;
X3DField62: TX3DField;
Script63: TScriptNode;
X3DField64: TX3DField;
X3DField65: TX3DField;
Script66: TScriptNode;
X3DField67: TX3DField;
X3DField68: TX3DField;
NavigationInfo78: TNavigationInfoNode;
Viewpoint79: TViewpointNode;
Transform80: TTransformNode;
X3DPrototype81: TX3DPrototypeNode;
Transform82: TTransformNode;
X3DPrototype83: TX3DPrototypeNode;
Transform84: TTransformNode;
X3DPrototype85: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'pp3.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['translator'] := 'John Carlson';
X3D0.Meta['created'] := '5 May 2015';
X3D0.Meta['modified'] := '23 Dec 2022';
X3D0.Meta['description'] := 'A process pipeline between three spheres (try typing on spheres and blue';
X3D0.Meta['identifier'] := 'https://coderextreme.net/x3d/pp3.x3d';
X3D0.Meta['generator'] := 'manual';
Group10 := TGroupNode.Create;
X3DPrototype11 := TX3DPrototype.Create;
X3DPrototype11.NameField := 'Process';
X3DPrototype12 := TX3DPrototype.Create;
Group13 := TGroupNode.Create;
{ left }
Transform14 := TTransformNode.Create;
Transform14.Scale := Vector3(0.5,0.5,0.5);
Shape15 := TShapeNode.Create;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(0.7,1,0);
Material17.Transparency := 0.5;
{ .SetMaterial }
Appearance16.Material := Material17;
{ .SetAppearance }
Shape15.Appearance := Appearance16;
Extrusion18 := TExtrusionNode.Create;
Extrusion18.CreaseAngle := 0.785;
Extrusion18.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion18.SetSpine([Vector3(-2.5,0,0),Vector3(-2,0,0),Vector3(-1.5,0,0)]);
{ .SetGeometry }
Shape15.Geometry := Extrusion18;
{ .AddChild }
Transform14.AddChildren([Shape15]);
{ <Transform translation="-2.5 0 0"> <Shape> <Text DEF="LeftString" string='"l"'/> </Shape> </Transform> <StringSensor DEF="LeftSensor" enabled="false"/> <TouchSensor DEF="LeftTouch" enabled="true"/> }
{ .AddChildren }
Group13.AddChildren([Transform14]);
{ right }
Transform19 := TTransformNode.Create;
Transform19.Scale := Vector3(0.5,0.5,0.5);
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0,0.7,1);
Material22.Transparency := 0.5;
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape20.Appearance := Appearance21;
Extrusion23 := TExtrusionNode.Create;
Extrusion23.CreaseAngle := 0.785;
Extrusion23.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion23.SetSpine([Vector3(1.5,0,0),Vector3(2,0,0),Vector3(2.5,0,0)]);
{ .SetGeometry }
Shape20.Geometry := Extrusion23;
{ .AddChild }
Transform19.AddChildren([Shape20]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(2,0,0);
Shape25 := TShapeNode.Create;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance26.Material := Material27;
{ .SetAppearance }
Shape25.Appearance := Appearance26;
Text28 := TTextNode.Create;
Text28.SetText(['r']);
{ .SetGeometry }
Shape25.Geometry := Text28;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Transform19.AddChildren([Transform24]);
StringSensor29 := TStringSensorNode.Create;
StringSensor29.Enabled := False;
{ .AddChildren }
Transform19.AddChildren([StringSensor29]);
TouchSensor30 := TTouchSensorNode.Create;
TouchSensor30.Description := 'touch to activate';
{ .AddChildren }
Transform19.AddChildren([TouchSensor30]);
{ .AddChildren }
Group13.AddChildren([Transform19]);
{ up }
Transform31 := TTransformNode.Create;
Transform31.Scale := Vector3(0.5,0.5,0.5);
Shape32 := TShapeNode.Create;
Appearance33 := TAppearanceNode.Create;
Material34 := TMaterialNode.Create;
Material34.DiffuseColor := Vector3(0,0.7,1);
Material34.Transparency := 0.5;
{ .SetMaterial }
Appearance33.Material := Material34;
{ .SetAppearance }
Shape32.Appearance := Appearance33;
Extrusion35 := TExtrusionNode.Create;
Extrusion35.CreaseAngle := 0.785;
Extrusion35.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion35.SetSpine([Vector3(0,1.5,0),Vector3(0,2,0),Vector3(0,2.5,0)]);
{ .SetGeometry }
Shape32.Geometry := Extrusion35;
{ .AddChild }
Transform31.AddChildren([Shape32]);
Transform36 := TTransformNode.Create;
Transform36.Translation := Vector3(-0.5,2,0);
Shape37 := TShapeNode.Create;
Appearance38 := TAppearanceNode.Create;
Material39 := Material27;
{ .SetMaterial }
Appearance38.Material := Material39;
{ .SetAppearance }
Shape37.Appearance := Appearance38;
Text40 := TTextNode.Create;
Text40.SetText(['u']);
{ .SetGeometry }
Shape37.Geometry := Text40;
{ .AddChild }
Transform36.AddChildren([Shape37]);
{ .AddChildren }
Transform31.AddChildren([Transform36]);
StringSensor41 := TStringSensorNode.Create;
StringSensor41.Enabled := False;
{ .AddChildren }
Transform31.AddChildren([StringSensor41]);
TouchSensor42 := TTouchSensorNode.Create;
TouchSensor42.Description := 'touch to activate';
{ .AddChildren }
Transform31.AddChildren([TouchSensor42]);
{ .AddChildren }
Group13.AddChildren([Transform31]);
{ down }
Transform43 := TTransformNode.Create;
Transform43.Scale := Vector3(0.5,0.5,0.5);
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0.7,1,0);
Material46.Transparency := 0.5;
{ .SetMaterial }
Appearance45.Material := Material46;
{ .SetAppearance }
Shape44.Appearance := Appearance45;
Extrusion47 := TExtrusionNode.Create;
Extrusion47.CreaseAngle := 0.785;
Extrusion47.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion47.SetSpine([Vector3(0,-2.5,0),Vector3(0,-2,0),Vector3(0,-1.5,0)]);
{ .SetGeometry }
Shape44.Geometry := Extrusion47;
{ .AddChild }
Transform43.AddChildren([Shape44]);
{ <Transform translation="-0.5 -2.5 0"> <Shape> <Text DEF="DownString" string='"d"'/> </Shape> </Transform> <StringSensor DEF="DownSensor" enabled="false"/> <TouchSensor description='touch to activate' DEF="DownTouch" enabled="true"/> }
{ .AddChildren }
Group13.AddChildren([Transform43]);
{ center }
Transform48 := TTransformNode.Create;
Shape49 := TShapeNode.Create;
Appearance50 := TAppearanceNode.Create;
Material51 := TMaterialNode.Create;
Material51.DiffuseColor := Vector3(1,0,0.7);
{ .SetMaterial }
Appearance50.Material := Material51;
{ .SetAppearance }
Shape49.Appearance := Appearance50;
Sphere52 := TSphereNode.Create;
{ .SetGeometry }
Shape49.Geometry := Sphere52;
{ .AddChild }
Transform48.AddChildren([Shape49]);
Transform53 := TTransformNode.Create;
Transform53.Scale := Vector3(0.5,0.5,0.5);
Transform53.Translation := Vector3(-0.5,0,1);
Shape54 := TShapeNode.Create;
Appearance55 := TAppearanceNode.Create;
Material56 := Material27;
{ .SetMaterial }
Appearance55.Material := Material56;
{ .SetAppearance }
Shape54.Appearance := Appearance55;
Text57 := TTextNode.Create;
{ .SetGeometry }
Shape54.Geometry := Text57;
{ .AddChild }
Transform53.AddChildren([Shape54]);
{ .AddChildren }
Transform48.AddChildren([Transform53]);
StringSensor58 := TStringSensorNode.Create;
StringSensor58.Enabled := False;
{ .AddChildren }
Transform48.AddChildren([StringSensor58]);
TouchSensor59 := TTouchSensorNode.Create;
TouchSensor59.Description := 'touch to activate';
{ .AddChildren }
Transform48.AddChildren([TouchSensor59]);
{ .AddChildren }
Group13.AddChildren([Transform48]);
{ .SetGroup }
X3DPrototype12.Group := Group13;
Script60 := TScriptNode.Create;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'set_rightstring';
X3DField61.AccessType := 'inputOnly';
X3DField61.Type := 'SFString';
{ .SetX3DField }
Script60.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'rightlines';
X3DField62.AccessType := 'outputOnly';
X3DField62.Type := 'MFString';
{ .AddX3DField }
Script60.X3DField := X3DField62;

Script60.SetSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}''');
{ .AddScript }
X3DPrototype12.Script := Script60;
Script63 := TScriptNode.Create;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'set_upstring';
X3DField64.AccessType := 'inputOnly';
X3DField64.Type := 'SFString';
{ .SetX3DField }
Script63.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'uplines';
X3DField65.AccessType := 'outputOnly';
X3DField65.Type := 'MFString';
{ .AddX3DField }
Script63.X3DField := X3DField65;

Script63.SetSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}''');
{ .AddScript }
X3DPrototype12.Script := Script63;
Script66 := TScriptNode.Create;
X3DField67 := TX3DField.Create;
X3DField67.NameField := 'set_centerstring';
X3DField67.AccessType := 'inputOnly';
X3DField67.Type := 'SFString';
{ .SetX3DField }
Script66.X3DField := X3DField67;
X3DField68 := TX3DField.Create;
X3DField68.NameField := 'centerlines';
X3DField68.AccessType := 'outputOnly';
X3DField68.Type := 'MFString';
{ .AddX3DField }
Script66.X3DField := X3DField68;

Script66.SetSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}''');
{ .AddScript }
X3DPrototype12.Script := Script66;
X3DPrototype12.AddRoute(StringSensor58.FdEnteredtext, Script66.EventSet_centerstring);
{ .AddX3DRoute }
X3DPrototype12.AddRoute(Script66.FdCenterlines, Text57.EventSet_string);
{ .AddX3DRoute }
X3DPrototype12.AddRoute(TouchSensor59.FdIsover, StringSensor58.EventSet_enabled);
{ .AddX3DRoute }
X3DPrototype12.AddRoute(StringSensor29.FdEnteredtext, Script60.EventSet_rightstring);
{ .AddX3DRoute }
X3DPrototype12.AddRoute(Script60.FdRightlines, Text28.EventSet_string);
{ .AddX3DRoute }
X3DPrototype12.AddRoute(TouchSensor30.FdIsover, StringSensor29.EventSet_enabled);
{ .AddX3DRoute }
X3DPrototype12.AddRoute(StringSensor41.FdEnteredtext, Script63.EventSet_upstring);
{ .AddX3DRoute }
X3DPrototype12.AddRoute(Script63.FdUplines, Text40.EventSet_string);
{ .AddX3DRoute }
X3DPrototype12.AddRoute(TouchSensor42.FdIsover, StringSensor41.EventSet_enabled);
{ .AddX3DRoute }
{ .SetX3DPrototype }
X3DPrototype11.X3DPrototype := X3DPrototype12;
{ .SetX3DPrototype }
Group10.X3DPrototype := X3DPrototype11;
NavigationInfo78 := TNavigationInfoNode.Create;
{ .AddChildren }
Group10.AddChildren([NavigationInfo78]);
Viewpoint79 := TViewpointNode.Create;
Viewpoint79.Description := 'Process pipes';
Viewpoint79.Orientation := Vector4(1,0,0,-0.4);
Viewpoint79.Position := Vector3(0,5,12);
{ .AddChildren }
Group10.AddChildren([Viewpoint79]);
Transform80 := TTransformNode.Create;
Transform80.Translation := Vector3(0,-2.5,0);
X3DPrototype81 := TX3DPrototypeNode.Create;
X3DPrototype81.NameField := 'Process';
{ .SetX3DPrototype }
Transform80.X3DPrototype := X3DPrototype81;
{ .AddChildren }
Group10.AddChildren([Transform80]);
Transform82 := TTransformNode.Create;
X3DPrototype83 := TX3DPrototypeNode.Create;
X3DPrototype83.NameField := 'Process';
{ .SetX3DPrototype }
Transform82.X3DPrototype := X3DPrototype83;
{ .AddChildren }
Group10.AddChildren([Transform82]);
Transform84 := TTransformNode.Create;
Transform84.Translation := Vector3(0,2.5,0);
X3DPrototype85 := TX3DPrototypeNode.Create;
X3DPrototype85.NameField := 'Process';
{ .SetX3DPrototype }
Transform84.X3DPrototype := X3DPrototype85;
{ .AddChildren }
Group10.AddChildren([Transform84]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;

begin
end.
