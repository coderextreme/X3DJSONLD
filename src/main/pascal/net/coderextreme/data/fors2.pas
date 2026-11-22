unit fors2;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
IS17: TIS;
connect18: Tconnect;
Shape19: TShapeNode;
Sphere20: TSphereNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
PositionInterpolator23: TPositionInterpolatorNode;
Script24: TScriptNode;
SFVec3f25: TSFVec3f;
SFVec3f26: TSFVec3f;
SFTime27: TSFTime;
MFVec3f28: TMFVec3f;
TimeSensor29: TTimeSensorNode;
X3DPrototype34: TX3DPrototype;
X3DInterfaceDeclaration35: TX3DInterfaceDeclaration;
SFVec3f36: TSFVec3f;
SFVec3f37: TSFVec3f;
X3DPrototype38: TX3DPrototype;
Group39: TGroupNode;
Shape40: TShapeNode;
Extrusion41: TExtrusionNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Script44: TScriptNode;
MFVec3f45: TMFVec3f;
SFVec3f46: TSFVec3f;
SFVec3f47: TSFVec3f;
IS48: TIS;
connect49: Tconnect;
connect50: Tconnect;
Transform52: TTransformNode;
X3DPrototype53: TX3DPrototypeNode;
SFVec3f54: TSFVec3f;
X3DPrototype55: TX3DPrototypeNode;
SFVec3f56: TSFVec3f;
X3DPrototype57: TX3DPrototypeNode;

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
Group10 := TGroupNode.Create;
X3DPrototype11 := TX3DPrototype.Create;
X3DInterfaceDeclaration12 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f13 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration12, false, 'position');
SFVec3f13.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration12.AddSFVec3f([SFVec3f13]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype11.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration12]);
X3DPrototype14 := TX3DPrototype.Create;
Group15 := TGroupNode.Create;
Transform16 := TTransformNode.Create;
IS17 := TIS.Create;
connect18 := Tconnect.Create;
connect18.NodeField := 'translation';
connect18.ProtoField := 'position';
{ METHOD .Connect }
IS17.Connect := connect18;
{ METHOD .IS }
Transform16.IS := IS17;
Shape19 := TShapeNode.Create;
{ comment before Sphere }
{ comment after Sphere }
{ comment after Appearance }
Sphere20 := TSphereNode.Create;
{ METHOD .Geometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
{ comment before Material }
{ comment after Material }
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
Shape19.Appearance := Appearance21;
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Shape19);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Transform16);
PositionInterpolator23 := TPositionInterpolatorNode.Create;
PositionInterpolator23.SetKey([0,1]);
end;

procedure Initfors2Part1;
begin

PositionInterpolator23.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(PositionInterpolator23);
Script24 := TScriptNode.Create;
SFVec3f25 := TSFVec3f.CreateUndefined(Script24, false, 'translation');
SFVec3f25.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script24.AddCustomField(SFVec3f25);
SFVec3f26 := TSFVec3f.CreateUndefined(Script24, false, 'old');
SFVec3f26.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script24.AddCustomField(SFVec3f26);
SFTime27 := TSFTime.CreateUndefined(Script24, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script24.AddCustomField(SFTime27);
MFVec3f28 := TMFVec3f.CreateUndefined(Script24, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script24.AddCustomField(MFVec3f28);

Script24.SetSourceCode('''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}''');
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Script24);
TimeSensor29 := TTimeSensorNode.Create;
TimeSensor29.CycleInterval := 3;
TimeSensor29.Loop := True;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(TimeSensor29);
{ Original "nodeClock.EventCycleTime TO MoveBall.EventSet_cycle }
{ Sample nodeClock.EventCycleTime TO MoveBall.EventSet_cycle}
Group15.AddRoute(TimeSensor29.EventCycleTime, Script24.EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction }
{ Sample nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction}
Group15.AddRoute(TimeSensor29.EventFraction_changed, PositionInterpolator23.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MoveBall.EventKeyValue TO NodePosition.keyValue }
{ Sample MoveBall.EventKeyValue TO NodePosition.keyValue}
Group15.AddRoute(Script24.EventKeyValue, PositionInterpolator23.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "NodePosition.EventValue_changed TO transform.FdTranslation.EventIn }
{ Sample NodePosition.EventValue_changed TO transform.FdTranslation.EventIn}
Group15.AddRoute(PositionInterpolator23.EventValue_changed, Transform16.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype14.AddChildren([Group15]);
{ METHOD .AddX3DPrototype }
X3DPrototype11.AddX3DPrototype([X3DPrototype14]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype11]);
X3DPrototype34 := TX3DPrototype.Create;
X3DInterfaceDeclaration35 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f36 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration35, false, 'positionA');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration35.AddSFVec3f([SFVec3f36]);
SFVec3f37 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration35, false, 'positionB');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration35.AddSFVec3f([SFVec3f37]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype34.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration35]);
X3DPrototype38 := TX3DPrototype.Create;
Group39 := TGroupNode.Create;
Shape40 := TShapeNode.Create;
Extrusion41 := TExtrusionNode.Create;
Extrusion41.CreaseAngle := 0.785;
Extrusion41.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion41.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ METHOD .Geometry }
Shape40.Geometry := Extrusion41;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance42.Material := Material43;
{ METHOD .Appearance }
Shape40.Appearance := Appearance42;
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Shape40);
Script44 := TScriptNode.Create;
MFVec3f45 := TMFVec3f.CreateUndefined(Script44, false, 'spine');
MFVec3f45.Value := '0 -50 0 0 0 0 0 50 0';
{ METHOD .Fd.AddCustomField }
Script44.AddCustomField(MFVec3f45);
SFVec3f46 := TSFVec3f.CreateUndefined(Script44, false, 'endA');
SFVec3f46.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script44.AddCustomField(SFVec3f46);
SFVec3f47 := TSFVec3f.CreateUndefined(Script44, false, 'endB');
SFVec3f47.Value := '50 50 50';
{ METHOD .Fd.AddCustomField }
Script44.AddCustomField(SFVec3f47);
IS48 := TIS.Create;
connect49 := Tconnect.Create;
connect49.NodeField := 'endA';
connect49.ProtoField := 'positionA';
{ METHOD .Connect }
IS48.Connect := connect49;
connect50 := Tconnect.Create;
connect50.NodeField := 'endB';
connect50.ProtoField := 'positionB';
{ METHOD .Connect }
IS48.Connect := connect50;
{ METHOD .Fd.AddCustomField }
Script44.AddCustomField(IS48);

Script44.SetSourceCode('''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}''');
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Script44);
{ Original "MoveCylinder.EventSpine TO extrusion.EventSet_spine }
{ Sample MoveCylinder.EventSpine TO extrusion.EventSet_spine}
Group39.AddRoute(Script44.EventSpine, Extrusion41.EventSet_spine);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype38.AddChildren([Group39]);
{ METHOD .AddX3DPrototype }
X3DPrototype34.AddX3DPrototype([X3DPrototype38]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype34]);
Transform52 := TTransformNode.Create;
Transform52.Scale := Vector3(0.1,0.1,0.1);
X3DPrototype53 := TX3DPrototypeNode.Create;
SFVec3f54 := TSFVec3f.CreateUndefined(X3DPrototype53, false, 'position');
SFVec3f54.Value := '-50 -50 -50';
{ METHOD .AddSFVec3f }
X3DPrototype53.AddSFVec3f([SFVec3f54]);
{ METHOD .AddX3DPrototype }
Transform52.AddX3DPrototype([X3DPrototype53]);
X3DPrototype55 := TX3DPrototypeNode.Create;
SFVec3f56 := TSFVec3f.CreateUndefined(X3DPrototype55, false, 'position');
SFVec3f56.Value := '50 50 50';
{ METHOD .AddSFVec3f }
X3DPrototype55.AddSFVec3f([SFVec3f56]);
{ METHOD .AddX3DPrototype }
Transform52.AddX3DPrototype([X3DPrototype55]);
X3DPrototype57 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform52.AddX3DPrototype([X3DPrototype57]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform52);
{ Original "nodeA.position TO linkA.positionA }
{ Sample nodeA.position TO linkA.positionA}
Group10.AddRoute(nodeA.position, X3DPrototype57.positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeB.position TO linkA.positionB }
{ Sample nodeB.position TO linkA.positionB}
Group10.AddRoute(nodeB.position, X3DPrototype57.positionB);
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
