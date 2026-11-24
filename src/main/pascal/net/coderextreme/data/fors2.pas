unit fors2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createfors2: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group10: TGroupNode;
X3DPrototype11: TX3DPrototype;
X3DInterfaceDeclaration12: TX3DInterfaceDeclaration;
SFVec3f13: TSFVec3f;
X3DPrototype14: TX3DPrototype;
Group15: TGroupNode;
Transform16: TTransformNode;
Shape18: TShapeNode;
Sphere19: TSphereNode;
Appearance20: TAppearanceNode;
Material21: TMaterialNode;
PositionInterpolator22: TPositionInterpolatorNode;
Script23: TScriptNode;
SFVec3f24: TSFVec3f;
SFVec3f25: TSFVec3f;
SFTime26: TSFTime;
MFVec3f27: TMFVec3f;
TimeSensor28: TTimeSensorNode;
X3DPrototype33: TX3DPrototype;
X3DInterfaceDeclaration34: TX3DInterfaceDeclaration;
SFVec3f35: TSFVec3f;
SFVec3f36: TSFVec3f;
X3DPrototype37: TX3DPrototype;
Group38: TGroupNode;
Shape39: TShapeNode;
Extrusion40: TExtrusionNode;
Appearance41: TAppearanceNode;
Material42: TMaterialNode;
Script43: TScriptNode;
MFVec3f44: TMFVec3f;
SFVec3f45: TSFVec3f;
SFVec3f46: TSFVec3f;
Transform49: TTransformNode;
X3DPrototype50: TX3DPrototypeNode;
SFVec3f51: TSFVec3f;
X3DPrototype52: TX3DPrototypeNode;
SFVec3f53: TSFVec3f;
X3DPrototype54: TX3DPrototypeNode;

procedure Initfors2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Meta['creator'] := 'John W Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := 'December 13 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'July 14 2025';
{ METHOD .Meta }
X3D0.Meta['title'] := 'fors2.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
{ METHOD .Head }
Group10 := TGroupNode.Create;;
X3DPrototype11 := TX3DPrototype.Create;;
X3DInterfaceDeclaration12 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f13 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration12, false, 'position');
SFVec3f13.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration12.AddSFVec3f([SFVec3f13]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype11.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration12]);
X3DPrototype14 := TX3DPrototype.Create;;
Group15 := TGroupNode.Create;;
Transform16 := TTransformNode.Create;;
Shape18 := TShapeNode.Create;;
{ comment before Sphere }
{ comment after Sphere }
{ comment after Appearance }
Sphere19 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape18.Geometry := Sphere19;
Appearance20 := TAppearanceNode.Create;;
{ comment before Material }
{ comment after Material }
Material21 := TMaterialNode.Create;;
Material21.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance20.Material := Material21;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape18.Appearance := Appearance20;
end;

procedure Initfors2Part1;
begin

{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Shape18);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Transform16);
PositionInterpolator22 := TPositionInterpolatorNode.Create;;
PositionInterpolator22.SetKey([0,1]);
PositionInterpolator22.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(PositionInterpolator22);
Script23 := TScriptNode.Create;;
SFVec3f24 := TSFVec3f.CreateUndefined(Script23, false, 'translation');
SFVec3f24.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script23.AddCustomField(SFVec3f24);
SFVec3f25 := TSFVec3f.CreateUndefined(Script23, false, 'old');
SFVec3f25.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script23.AddCustomField(SFVec3f25);
SFTime26 := TSFTime.CreateUndefined(Script23, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script23.AddCustomField(SFTime26);
MFVec3f27 := TMFVec3f.CreateUndefined(Script23, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script23.AddCustomField(MFVec3f27);

Script23.SetSourceCode('''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}''');
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Script23);
TimeSensor28 := TTimeSensorNode.Create;;
TimeSensor28.CycleInterval := 3;
TimeSensor28.Loop := True;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(TimeSensor28);
{ Original "nodeClock.EventCycleTime TO MoveBall.EventSet_cycle }
{ Sample nodeClock.EventCycleTime TO MoveBall.EventSet_cycle}
Group15.AddRoute(TimeSensor28.EventCycleTime, Script23.EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction }
{ Sample nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction}
Group15.AddRoute(TimeSensor28.EventFraction_changed, PositionInterpolator22.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MoveBall.EventKeyValue TO NodePosition.keyValue }
{ Sample MoveBall.EventKeyValue TO NodePosition.keyValue}
Group15.AddRoute(Script23.EventKeyValue, PositionInterpolator22.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "NodePosition.EventValue_changed TO transform.FdTranslation.EventIn }
{ Sample NodePosition.EventValue_changed TO transform.FdTranslation.EventIn}
Group15.AddRoute(PositionInterpolator22.EventValue_changed, Transform16.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype14.AddChildren([Group15]);
{ METHOD .AddX3DPrototype }
X3DPrototype11.AddX3DPrototype([X3DPrototype14]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype11]);
X3DPrototype33 := TX3DPrototype.Create;;
X3DInterfaceDeclaration34 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f35 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration34, false, 'positionA');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration34.AddSFVec3f([SFVec3f35]);
SFVec3f36 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration34, false, 'positionB');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration34.AddSFVec3f([SFVec3f36]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype33.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration34]);
X3DPrototype37 := TX3DPrototype.Create;;
Group38 := TGroupNode.Create;;
Shape39 := TShapeNode.Create;;
Extrusion40 := TExtrusionNode.Create;;
Extrusion40.CreaseAngle := 0.785;
Extrusion40.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion40.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape39.Geometry := Extrusion40;
Appearance41 := TAppearanceNode.Create;;
Material42 := TMaterialNode.Create;;
Material42.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance41.Material := Material42;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape39.Appearance := Appearance41;
{ METHOD .FdChildren.Add }
Group38.FdChildren.Add(Shape39);
Script43 := TScriptNode.Create;;
MFVec3f44 := TMFVec3f.CreateUndefined(Script43, false, 'spine');
MFVec3f44.Value := '0 -50 0 0 0 0 0 50 0';
{ METHOD .Fd.AddCustomField }
Script43.AddCustomField(MFVec3f44);
SFVec3f45 := TSFVec3f.CreateUndefined(Script43, false, 'endA');
SFVec3f45.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script43.AddCustomField(SFVec3f45);
SFVec3f46 := TSFVec3f.CreateUndefined(Script43, false, 'endB');
SFVec3f46.Value := '50 50 50';
{ METHOD .Fd.AddCustomField }
Script43.AddCustomField(SFVec3f46);

Script43.SetSourceCode('''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}''');
{ METHOD .FdChildren.Add }
Group38.FdChildren.Add(Script43);
{ Original "MoveCylinder.EventSpine TO extrusion.EventSet_spine }
{ Sample MoveCylinder.EventSpine TO extrusion.EventSet_spine}
Group38.AddRoute(Script43.EventSpine, Extrusion40.EventSet_spine);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype37.AddChildren([Group38]);
{ METHOD .AddX3DPrototype }
X3DPrototype33.AddX3DPrototype([X3DPrototype37]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype33]);
Transform49 := TTransformNode.Create;;
Transform49.Scale := Vector3(0.1,0.1,0.1);
X3DPrototype50 := TX3DPrototypeNode;
SFVec3f51 := TSFVec3f.CreateUndefined(X3DPrototype50, false, 'position');
SFVec3f51.Value := '-50 -50 -50';
{ METHOD .AddSFVec3f }
X3DPrototype50.AddSFVec3f([SFVec3f51]);
{ METHOD .AddX3DPrototype }
Transform49.AddX3DPrototype([X3DPrototype50]);
X3DPrototype52 := TX3DPrototypeNode;
SFVec3f53 := TSFVec3f.CreateUndefined(X3DPrototype52, false, 'position');
SFVec3f53.Value := '50 50 50';
{ METHOD .AddSFVec3f }
X3DPrototype52.AddSFVec3f([SFVec3f53]);
{ METHOD .AddX3DPrototype }
Transform49.AddX3DPrototype([X3DPrototype52]);
X3DPrototype54 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform49.AddX3DPrototype([X3DPrototype54]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform49);
{ Original "nodeA.position TO linkA.positionA }
{ Sample nodeA.position TO linkA.positionA}
Group10.AddRoute(nodeA.position, X3DPrototype54.positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeB.position TO linkA.positionB }
{ Sample nodeB.position TO linkA.positionB}
Group10.AddRoute(nodeB.position, X3DPrototype54.positionB);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group10]);
end;

function Createfors2: TX3DRootNode;
begin
Initfors2Part0;
Initfors2Part1;
Result := X3D0;
end;

begin
end.
