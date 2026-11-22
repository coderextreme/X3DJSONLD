unit bubble;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createbubble: TX3DRootNode;

implementation

uses CastleVectors;

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
SFVec3f18: TSFVec3f;
SFVec3f19: TSFVec3f;
SFVec3f20: TSFVec3f;
SFVec3f21: TSFVec3f;
SFFloat22: TSFFloat;
TimeSensor23: TTimeSensorNode;
X3DPrototype27: TX3DPrototypeNode;

procedure InitbubblePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'bubble.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Position := Vector3(0,0,4);
Viewpoint9.Orientation := Vector4(1,0,0,0);
Viewpoint9.Description := 'Bubble in action';
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint9);
X3DPrototype10 := TX3DPrototype.Create;
X3DPrototype11 := TX3DPrototype.Create;
Transform12 := TTransformNode.Create;
Shape13 := TShapeNode.Create;
Sphere14 := TSphereNode.Create;
Sphere14.Radius := 0.25;
{ METHOD .Geometry }
Shape13.Geometry := Sphere14;
Appearance15 := TAppearanceNode.Create;
Material16 := TMaterialNode.Create;
Material16.DiffuseColor := Vector3(1,0,0);
Material16.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance15.Material := Material16;
{ METHOD .Appearance }
Shape13.Appearance := Appearance15;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape13);
Script17 := TScriptNode.Create;
SFVec3f18 := TSFVec3f.CreateUndefined(Script17, false, 'scale');
SFVec3f18.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(SFVec3f18);
SFVec3f19 := TSFVec3f.CreateUndefined(Script17, false, 'translation');
SFVec3f19.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(SFVec3f19);
SFVec3f20 := TSFVec3f.CreateUndefined(Script17, false, 'velocity');
end;

procedure InitbubblePart1;
begin

SFVec3f20.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(SFVec3f20);
SFVec3f21 := TSFVec3f.CreateUndefined(Script17, false, 'scalvel');
SFVec3f21.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(SFVec3f21);
SFFloat22 := TSFFloat.CreateUndefined(Script17, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script17.AddCustomField(SFFloat22);

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
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Script17);
TimeSensor23 := TTimeSensorNode.Create;
TimeSensor23.CycleInterval := 10;
TimeSensor23.Loop := True;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(TimeSensor23);
{ Original "bounce.EventTranslation_changed TO transform.EventSet_translation }
{ Sample bounce.EventTranslation_changed TO transform.EventSet_translation}
Transform12.AddRoute(Script17.EventTranslation_changed, Transform12.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "bounce.EventScale_changed TO transform.scale }
{ Sample bounce.EventScale_changed TO transform.scale}
Transform12.AddRoute(Script17.EventScale_changed, Transform12.set_scale);
{ METHOD .AddX3DROUTE }
{ Original "bubbleClock.EventFraction_changed TO bounce.EventSet_fraction }
{ Sample bubbleClock.EventFraction_changed TO bounce.EventSet_fraction}
Transform12.AddRoute(TimeSensor23.EventFraction_changed, Script17.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype11.AddTransform([Transform12]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype11]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype27 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype27]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createbubble: TX3DRootNode;
begin
InitbubblePart0;
InitbubblePart1;
Result := X3D0;
end;

begin
end.
