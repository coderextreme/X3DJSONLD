unit bubs;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createbubs: TX3DRootNode;

implementation

uses CastleVectors;

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
SFVec3f20: TSFVec3f;
SFVec3f21: TSFVec3f;
SFVec3f22: TSFVec3f;
SFVec3f23: TSFVec3f;
SFFloat24: TSFFloat;
TimeSensor25: TTimeSensorNode;
X3DPrototype29: TX3DPrototypeNode;
X3DPrototype30: TX3DPrototypeNode;
X3DPrototype31: TX3DPrototypeNode;
X3DPrototype32: TX3DPrototypeNode;

procedure InitbubsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'bubs.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group8 := TGroupNode.Create;
NavigationInfo9 := TNavigationInfoNode.Create;
NavigationInfo9.SetType(['EXAMINE']);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(NavigationInfo9);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Position := Vector3(0,0,4);
Viewpoint10.Orientation := Vector4(1,0,0,0);
Viewpoint10.Description := 'Bubbles in action';
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Viewpoint10);
Background11 := TBackgroundNode.Create;
Background11.SetBackUrl(['../resources/images/BK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background11.SetBottomUrl(['../resources/images/BT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background11.SetFrontUrl(['../resources/images/FR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background11.SetLeftUrl(['../resources/images/LF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background11.SetRightUrl(['../resources/images/RT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background11.SetTopUrl(['../resources/images/TP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Background11);
X3DPrototype12 := TX3DPrototype.Create;
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
Shape15 := TShapeNode.Create;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 0.25;
{ METHOD .Geometry }
Shape15.Geometry := Sphere16;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(1,0,0);
Material18.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance17.Material := Material18;
{ METHOD .Appearance }
Shape15.Appearance := Appearance17;
end;

procedure InitbubsPart1;
begin

{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape15);
Script19 := TScriptNode.Create;
SFVec3f20 := TSFVec3f.CreateUndefined(Script19, false, 'scale');
SFVec3f20.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script19.AddCustomField(SFVec3f20);
SFVec3f21 := TSFVec3f.CreateUndefined(Script19, false, 'translation');
SFVec3f21.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script19.AddCustomField(SFVec3f21);
SFVec3f22 := TSFVec3f.CreateUndefined(Script19, false, 'velocity');
SFVec3f22.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script19.AddCustomField(SFVec3f22);
SFVec3f23 := TSFVec3f.CreateUndefined(Script19, false, 'scalvel');
SFVec3f23.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script19.AddCustomField(SFVec3f23);
SFFloat24 := TSFFloat.CreateUndefined(Script19, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script19.AddCustomField(SFFloat24);

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
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Script19);
TimeSensor25 := TTimeSensorNode.Create;
TimeSensor25.CycleInterval := 10;
TimeSensor25.Loop := True;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(TimeSensor25);
{ Original "bounce1.EventTranslation_changed TO body_trans.FdTranslation.EventIn }
{ Sample bounce1.EventTranslation_changed TO body_trans.FdTranslation.EventIn}
Transform14.AddRoute(Script19.EventTranslation_changed, Transform14.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "bounce1.EventScale_changed TO body_trans.scale }
{ Sample bounce1.EventScale_changed TO body_trans.scale}
Transform14.AddRoute(Script19.EventScale_changed, Transform14.scale);
{ METHOD .AddX3DROUTE }
{ Original "bubbleClock.EventFraction_changed TO bounce1.EventSet_fraction }
{ Sample bubbleClock.EventFraction_changed TO bounce1.EventSet_fraction}
Transform14.AddRoute(TimeSensor25.EventFraction_changed, Script19.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype12.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group8.AddX3DPrototype([X3DPrototype12]);
X3DPrototype29 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group8.AddX3DPrototype([X3DPrototype29]);
X3DPrototype30 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group8.AddX3DPrototype([X3DPrototype30]);
X3DPrototype31 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group8.AddX3DPrototype([X3DPrototype31]);
X3DPrototype32 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group8.AddX3DPrototype([X3DPrototype32]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group8]);
end;

function Createbubs: TX3DRootNode;
begin
InitbubsPart0;
InitbubsPart1;
Result := X3D0;
end;

begin
end.
