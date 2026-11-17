unit bubs;

interface

uses X3DNodes;

function Createbubs: TX3DRootNode;

implementation

uses CastleVectors;

function Createbubs: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group8: TGroupNode;
NavigationInfo9: TNavigationInfoNode;
Viewpoint10: TViewpointNode;
Background11: TBackgroundNode;
X3DPrototype12: TX3DPrototype;
X3DPrototype13: TX3DPrototype;
Transform14: TTransformNode;
Shape15: TShapeNode;
Sphere16: TSphereNode;
Appearance17: TAppearanceNode;
Material18: TMaterialNode;
Script19: TScriptNode;
X3DField20: TX3DField;
X3DField21: TX3DField;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DField24: TX3DField;
TimeSensor25: TTimeSensorNode;
X3DPrototype29: TX3DPrototypeNode;
X3DPrototype30: TX3DPrototypeNode;
X3DPrototype31: TX3DPrototypeNode;
X3DPrototype32: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'bubs.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d';
Group8 := TGroupNode.Create;
NavigationInfo9 := TNavigationInfoNode.Create;
NavigationInfo9.SetType(['EXAMINE']);
{ .AddChildren }
Group8.AddChildren([NavigationInfo9]);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Position := Vector3(0,0,4);
Viewpoint10.Orientation := Vector4(1,0,0,0);
Viewpoint10.Description := 'Bubbles in action';
{ .AddChildren }
Group8.AddChildren([Viewpoint10]);
Background11 := TBackgroundNode.Create;
Background11.SetBackUrl(['../resources/images/BK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background11.SetBottomUrl(['../resources/images/BT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background11.SetFrontUrl(['../resources/images/FR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background11.SetLeftUrl(['../resources/images/LF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background11.SetRightUrl(['../resources/images/RT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background11.SetTopUrl(['../resources/images/TP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
{ .AddChildren }
Group8.AddChildren([Background11]);
X3DPrototype12 := TX3DPrototype.Create;
X3DPrototype12.NameField := 'Bubble';
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
Shape15 := TShapeNode.Create;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 0.25;
{ .SetGeometry }
Shape15.Geometry := Sphere16;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(1,0,0);
Material18.Transparency := 0.2;
{ .SetMaterial }
Appearance17.Material := Material18;
{ .SetAppearance }
Shape15.Appearance := Appearance17;
{ .AddChild }
Transform14.AddChildren([Shape15]);
Script19 := TScriptNode.Create;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'scale';
X3DField20.AccessType := 'inputOutput';
X3DField20.Type := 'SFVec3f';
X3DField20.Value := '1 1 1';
{ .SetX3DField }
Script19.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'translation';
X3DField21.AccessType := 'inputOutput';
X3DField21.Type := 'SFVec3f';
X3DField21.Value := '0 0 0';
{ .AddX3DField }
Script19.X3DField := X3DField21;
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'velocity';
X3DField22.AccessType := 'inputOutput';
X3DField22.Type := 'SFVec3f';
X3DField22.Value := '0 0 0';
{ .AddX3DField }
Script19.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'scalvel';
X3DField23.AccessType := 'inputOutput';
X3DField23.Type := 'SFVec3f';
X3DField23.Value := '0 0 0';
{ .AddX3DField }
Script19.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'set_fraction';
X3DField24.AccessType := 'inputOnly';
X3DField24.Type := 'SFFloat';
{ .AddX3DField }
Script19.X3DField := X3DField24;

Script19.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}''');
{ .AddChildren }
Transform14.AddChildren([Script19]);
TimeSensor25 := TTimeSensorNode.Create;
TimeSensor25.CycleInterval := 10;
TimeSensor25.Loop := True;
{ .AddChildren }
Transform14.AddChildren([TimeSensor25]);
Transform14.AddRoute(Script19.EventTranslation_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
Transform14.AddRoute(Script19.EventScale_changed, Transform14.FdScale);
{ .AddX3DRoute }
Transform14.AddRoute(TimeSensor25.EventFraction_changed, Script19.EventSet_fraction);
{ .AddX3DRoute }
{ .SetTransform }
X3DPrototype13.Transform := Transform14;
{ .SetX3DPrototype }
X3DPrototype12.X3DPrototype := X3DPrototype13;
{ .AddX3DPrototype }
Group8.X3DPrototype := X3DPrototype12;
X3DPrototype29 := TX3DPrototypeNode.Create;
X3DPrototype29.NameField := 'Bubble';
{ .AddX3DPrototype }
Group8.X3DPrototype := X3DPrototype29;
X3DPrototype30 := TX3DPrototypeNode.Create;
X3DPrototype30.NameField := 'Bubble';
{ .AddX3DPrototype }
Group8.X3DPrototype := X3DPrototype30;
X3DPrototype31 := TX3DPrototypeNode.Create;
X3DPrototype31.NameField := 'Bubble';
{ .AddX3DPrototype }
Group8.X3DPrototype := X3DPrototype31;
X3DPrototype32 := TX3DPrototypeNode.Create;
X3DPrototype32.NameField := 'Bubble';
{ .AddX3DPrototype }
Group8.X3DPrototype := X3DPrototype32;
{ .AddGroup }
X3D0.AddChildren([Group8]);
Result := X3D0;
end;

begin
end.
