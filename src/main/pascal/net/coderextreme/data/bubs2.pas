unit bubs2;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createbubs2: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group10: TGroupNode;
NavigationInfo11: TNavigationInfoNode;
Viewpoint12: TViewpointNode;
Background13: TBackgroundNode;
X3DPrototype14: TX3DPrototype;
X3DPrototype15: TX3DPrototype;
Transform16: TTransformNode;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Script21: TScriptNode;
SFVec3f22: TSFVec3f;
SFVec3f23: TSFVec3f;
SFVec3f24: TSFVec3f;
SFVec3f25: TSFVec3f;
SFFloat26: TSFFloat;
TimeSensor27: TTimeSensorNode;
X3DPrototype31: TX3DPrototypeNode;
X3DPrototype32: TX3DPrototypeNode;
X3DPrototype33: TX3DPrototypeNode;
X3DPrototype34: TX3DPrototypeNode;

procedure Initbubs2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'bubs2.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d';
{ METHOD .Meta }
X3D0.Meta['translated'] := '13 March 2016';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html';
{ METHOD .Meta }
{ METHOD .Head }
Group10 := TGroupNode.Create;
NavigationInfo11 := TNavigationInfoNode.Create;
NavigationInfo11.SetType(['EXAMINE']);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(NavigationInfo11);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Position := Vector3(0,0,4);
Viewpoint12.Orientation := Vector4(1,0,0,0);
Viewpoint12.Description := 'Bubbles in action';
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Viewpoint12);
Background13 := TBackgroundNode.Create;
Background13.SetBackUrl(['../resources/images/BK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background13.SetBottomUrl(['../resources/images/BT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background13.SetFrontUrl(['../resources/images/FR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background13.SetLeftUrl(['../resources/images/LF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background13.SetRightUrl(['../resources/images/RT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background13.SetTopUrl(['../resources/images/TP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Background13);
X3DPrototype14 := TX3DPrototype.Create;
X3DPrototype15 := TX3DPrototype.Create;
Transform16 := TTransformNode.Create;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.25;
{ METHOD .Geometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0,0);
Material20.Transparency := 0.2;
end;

procedure Initbubs2Part1;
begin

{ METHOD .SetMaterial }
Appearance19.Material := Material20;
{ METHOD .Appearance }
Shape17.Appearance := Appearance19;
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Shape17);
Script21 := TScriptNode.Create;
SFVec3f22 := TSFVec3f.CreateUndefined(Script21, false, 'scale');
SFVec3f22.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFVec3f22);
SFVec3f23 := TSFVec3f.CreateUndefined(Script21, false, 'translation');
SFVec3f23.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFVec3f23);
SFVec3f24 := TSFVec3f.CreateUndefined(Script21, false, 'velocity');
SFVec3f24.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFVec3f24);
SFVec3f25 := TSFVec3f.CreateUndefined(Script21, false, 'scalvel');
SFVec3f25.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFVec3f25);
SFFloat26 := TSFFloat.CreateUndefined(Script21, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFFloat26);

Script21.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\\n		translation = new SFVec3f(0, 0, 0);\\n    }\\n    if (typeof velocity === 'undefined') {\\n		velocity = new SFVec3f(0, 0, 0);\\n    }\\n    if (typeof scalvel === 'undefined') {\\n		scalvel = new SFVec3f(0, 0, 0);\\n    }\\n    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
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
Transform16.FdChildren.Add(Script21);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.CycleInterval := 10;
TimeSensor27.Loop := True;
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(TimeSensor27);
{ Original "bounce.EventTranslation_changed TO body_trans.FdTranslation.EventIn }
{ Sample bounce.EventTranslation_changed TO body_trans.FdTranslation.EventIn}
Transform16.AddRoute(Script21.EventTranslation_changed, Transform16.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "bounce.EventScale_changed TO body_trans.scale }
{ Sample bounce.EventScale_changed TO body_trans.scale}
Transform16.AddRoute(Script21.EventScale_changed, Transform16.scale);
{ METHOD .AddX3DROUTE }
{ Original "bubbleClock.EventFraction_changed TO bounce.EventSet_fraction }
{ Sample bubbleClock.EventFraction_changed TO bounce.EventSet_fraction}
Transform16.AddRoute(TimeSensor27.EventFraction_changed, Script21.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype15.AddTransform([Transform16]);
{ METHOD .AddX3DPrototype }
X3DPrototype14.AddX3DPrototype([X3DPrototype15]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype14]);
X3DPrototype31 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype31]);
X3DPrototype32 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype32]);
X3DPrototype33 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype33]);
X3DPrototype34 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype34]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group10]);
end;

function Createbubs2: TX3DRootNode;
begin
Initbubs2Part0;
Initbubs2Part1;
Result := X3D0;
end;

begin
end.
