unit bubble;

interface

uses X3DNodes;

function Createbubble: TX3DRootNode;

implementation

uses CastleVectors;

function Createbubble: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
X3DPrototype10: TX3DPrototype;
X3DPrototype11: TX3DPrototype;
Transform12: TTransformNode;
Shape13: TShapeNode;
Sphere14: TSphereNode;
Appearance15: TAppearanceNode;
Material16: TMaterialNode;
Script17: TScriptNode;
X3DField18: TX3DField;
X3DField19: TX3DField;
X3DField20: TX3DField;
X3DField21: TX3DField;
X3DField22: TX3DField;
TimeSensor23: TTimeSensorNode;
X3DPrototype27: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'bubble.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Position := Vector3(0,0,4);
Viewpoint9.Orientation := Vector4(1,0,0,0);
Viewpoint9.Description := 'Bubble in action';
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
X3DPrototype10 := TX3DPrototype.Create;
X3DPrototype10.NameField := 'Bubble';
X3DPrototype11 := TX3DPrototype.Create;
Transform12 := TTransformNode.Create;
Shape13 := TShapeNode.Create;
Sphere14 := TSphereNode.Create;
Sphere14.Radius := 0.25;
{ .SetGeometry }
Shape13.Geometry := Sphere14;
Appearance15 := TAppearanceNode.Create;
Material16 := TMaterialNode.Create;
Material16.DiffuseColor := Vector3(1,0,0);
Material16.Transparency := 0.2;
{ .SetMaterial }
Appearance15.Material := Material16;
{ .SetAppearance }
Shape13.Appearance := Appearance15;
{ .AddChild }
Transform12.AddChildren([Shape13]);
Script17 := TScriptNode.Create;
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'scale';
X3DField18.AccessType := 'inputOutput';
X3DField18.Type := 'SFVec3f';
X3DField18.Value := '1 1 1';
{ .SetX3DField }
Script17.X3DField := X3DField18;
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'translation';
X3DField19.AccessType := 'inputOutput';
X3DField19.Type := 'SFVec3f';
X3DField19.Value := '0 0 0';
{ .AddX3DField }
Script17.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'velocity';
X3DField20.AccessType := 'inputOutput';
X3DField20.Type := 'SFVec3f';
X3DField20.Value := '0 0 0';
{ .AddX3DField }
Script17.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'scalvel';
X3DField21.AccessType := 'inputOutput';
X3DField21.Type := 'SFVec3f';
X3DField21.Value := '0 0 0';
{ .AddX3DField }
Script17.X3DField := X3DField21;
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'set_fraction';
X3DField22.AccessType := 'inputOnly';
X3DField22.Type := 'SFFloat';
{ .AddX3DField }
Script17.X3DField := X3DField22;

Script17.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"	translation = new SFVec3f(\n"+
"		translation.x + velocity.x,\n"+
"		translation.y + velocity.y,\n"+
"		translation.z + velocity.z);\n"+
"	scale = new SFVec3f(\n"+
"		scale.x + scalvel.x,\n"+
"		scale.y + scalvel.y,\n"+
"		scale.z + scalvel.z);\n"+
"        // if you get to far away or too big, explode\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"		scale.x = scale.x/2;\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"		scale.y = scale.y/2;\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"		scale.z = scale.z/2;\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"}''');
{ .AddChildren }
Transform12.AddChildren([Script17]);
TimeSensor23 := TTimeSensorNode.Create;
TimeSensor23.CycleInterval := 10;
TimeSensor23.Loop := True;
{ .AddChildren }
Transform12.AddChildren([TimeSensor23]);
Transform12.AddRoute(Script17.EventTranslation_changed, Transform12.FdTranslation);
{ .AddX3DRoute }
Transform12.AddRoute(Script17.EventScale_changed, Transform12.FdScale);
{ .AddX3DRoute }
Transform12.AddRoute(TimeSensor23.EventFraction_changed, Script17.EventSet_fraction);
{ .AddX3DRoute }
{ .SetTransform }
X3DPrototype11.Transform := Transform12;
{ .SetX3DPrototype }
X3DPrototype10.X3DPrototype := X3DPrototype11;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype10;
X3DPrototype27 := TX3DPrototypeNode.Create;
X3DPrototype27.NameField := 'Bubble';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype27;
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
