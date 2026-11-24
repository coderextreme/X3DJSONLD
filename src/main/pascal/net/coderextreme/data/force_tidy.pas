unit force_tidy;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createforce_tidy: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group11: TGroupNode;
X3DPrototype12: TX3DPrototype;
X3DInterfaceDeclaration13: TX3DInterfaceDeclaration;
SFVec3f14: TSFVec3f;
X3DPrototype15: TX3DPrototype;
Group16: TGroupNode;
Transform17: TTransformNode;
Shape19: TShapeNode;
Sphere20: TSphereNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
Text27: TTextNode;
FontStyle28: TFontStyleNode;
PositionInterpolator29: TPositionInterpolatorNode;
Script30: TScriptNode;
SFVec3f31: TSFVec3f;
SFVec3f32: TSFVec3f;
SFTime33: TSFTime;
MFVec3f34: TMFVec3f;
TimeSensor35: TTimeSensorNode;
X3DPrototype40: TX3DPrototype;
X3DInterfaceDeclaration41: TX3DInterfaceDeclaration;
SFVec3f42: TSFVec3f;
SFVec3f43: TSFVec3f;
X3DPrototype44: TX3DPrototype;
Group45: TGroupNode;
Shape46: TShapeNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Extrusion49: TExtrusionNode;
Script50: TScriptNode;
MFVec3f51: TMFVec3f;
SFVec3f52: TSFVec3f;
SFVec3f53: TSFVec3f;
Transform56: TTransformNode;
PlaneSensor57: TPlaneSensorNode;
X3DPrototype58: TX3DPrototypeNode;
SFVec3f59: TSFVec3f;
X3DPrototype60: TX3DPrototypeNode;
SFVec3f61: TSFVec3f;
X3DPrototype62: TX3DPrototypeNode;
SFVec3f63: TSFVec3f;
X3DPrototype64: TX3DPrototypeNode;
SFVec3f65: TSFVec3f;
X3DPrototype66: TX3DPrototypeNode;
X3DPrototype67: TX3DPrototypeNode;
X3DPrototype68: TX3DPrototypeNode;
Script69: TScriptNode;
SFInt3270: TSFInt32;
SFNode71: TSFNode;
SFBool72: TSFBool;

procedure Initforce_tidyPart0;
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
X3D0.Meta['title'] := 'force.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy';
{ METHOD .Meta }
{ METHOD .Head }
Group11 := TGroupNode.Create;;
X3DPrototype12 := TX3DPrototype.Create;;
X3DInterfaceDeclaration13 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f14 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration13, false, 'position');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration13.AddSFVec3f([SFVec3f14]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype12.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration13]);
X3DPrototype15 := TX3DPrototype.Create;;
Group16 := TGroupNode.Create;;
Transform17 := TTransformNode.Create;;
Shape19 := TShapeNode.Create;;
Sphere20 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;;
Material22 := TMaterialNode.Create;;
Material22.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape19.Appearance := Appearance21;
end;

procedure Initforce_tidyPart1;
begin

{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Shape19);
Transform23 := TTransformNode.Create;;
Transform23.Translation := Vector3(1,0,0);
Shape24 := TShapeNode.Create;;
Appearance25 := TAppearanceNode.Create;;
Material26 := TMaterialNode.Create;;
Material26.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape24.Appearance := Appearance25;
Text27 := TTextNode.Create;;
Text27.SetText(['Node']);
FontStyle28 := TFontStyleNode.Create;;
FontStyle28.Size := 5;
FontStyle28.Justify := fjMIDDLE;
FontStyle28.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text27.FontStyle := FontStyle28;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape24.Geometry := Text27;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Transform23);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Transform17);
PositionInterpolator29 := TPositionInterpolatorNode.Create;;
PositionInterpolator29.SetKey([0,1]);
PositionInterpolator29.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(PositionInterpolator29);
Script30 := TScriptNode.Create;;
SFVec3f31 := TSFVec3f.CreateUndefined(Script30, false, 'translation');
SFVec3f31.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(SFVec3f31);
SFVec3f32 := TSFVec3f.CreateUndefined(Script30, false, 'old');
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(SFVec3f32);
SFTime33 := TSFTime.CreateUndefined(Script30, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(SFTime33);
end;

procedure Initforce_tidyPart2;
begin

MFVec3f34 := TMFVec3f.CreateUndefined(Script30, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(MFVec3f34);

Script30.SetSourceCode('''ecmascript:\n"+
"		function set_cycle(value) {\n"+
"			old = translation;\n"+
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			keyValue = new MFVec3f(old, translation);\n"+
"		}''');
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Script30);
TimeSensor35 := TTimeSensorNode.Create;;
TimeSensor35.CycleInterval := 3;
TimeSensor35.Loop := True;
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(TimeSensor35);
{ Original "nodeClock.EventCycleTime TO MoveBall.EventSet_cycle }
{ Sample nodeClock.EventCycleTime TO MoveBall.EventSet_cycle}
Group16.AddRoute(TimeSensor35.EventCycleTime, Script30.EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction }
{ Sample nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction}
Group16.AddRoute(TimeSensor35.EventFraction_changed, PositionInterpolator29.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MoveBall.EventKeyValue TO NodePosition.EventSet_keyValue }
{ Sample MoveBall.EventKeyValue TO NodePosition.EventSet_keyValue}
Group16.AddRoute(Script30.EventKeyValue, PositionInterpolator29.EventSet_keyValue);
{ METHOD .AddX3DROUTE }
{ Original "NodePosition.EventValue_changed TO transform.FdTranslation.EventIn }
{ Sample NodePosition.EventValue_changed TO transform.FdTranslation.EventIn}
Group16.AddRoute(PositionInterpolator29.EventValue_changed, Transform17.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype15.AddChildren([Group16]);
{ METHOD .AddX3DPrototype }
X3DPrototype12.AddX3DPrototype([X3DPrototype15]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype12]);
X3DPrototype40 := TX3DPrototype.Create;;
X3DInterfaceDeclaration41 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f42 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration41, false, 'set_positionA');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration41.AddSFVec3f([SFVec3f42]);
SFVec3f43 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration41, false, 'set_positionB');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration41.AddSFVec3f([SFVec3f43]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype40.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration41]);
X3DPrototype44 := TX3DPrototype.Create;;
Group45 := TGroupNode.Create;;
Shape46 := TShapeNode.Create;;
Appearance47 := TAppearanceNode.Create;;
Material48 := TMaterialNode.Create;;
Material48.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance47.Material := Material48;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape46.Appearance := Appearance47;
Extrusion49 := TExtrusionNode.Create;;
Extrusion49.CreaseAngle := 0.785;
Extrusion49.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion49.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape46.Geometry := Extrusion49;
{ METHOD .FdChildren.Add }
Group45.FdChildren.Add(Shape46);
Script50 := TScriptNode.Create;;
MFVec3f51 := TMFVec3f.CreateUndefined(Script50, false, 'spine');
MFVec3f51.Value := '0 -50 0 0 0 0 0 50 0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(MFVec3f51);
SFVec3f52 := TSFVec3f.CreateUndefined(Script50, false, 'endA');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f52);
SFVec3f53 := TSFVec3f.CreateUndefined(Script50, false, 'endB');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f53);

Script50.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }''');
{ METHOD .FdChildren.Add }
Group45.FdChildren.Add(Script50);
{ Original "MoveCylinder.EventSpine_changed TO extrusion.EventSet_spine }
{ Sample MoveCylinder.EventSpine_changed TO extrusion.EventSet_spine}
Group45.AddRoute(Script50.EventSpine_changed, Extrusion49.EventSet_spine);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype44.AddChildren([Group45]);
{ METHOD .AddX3DPrototype }
X3DPrototype40.AddX3DPrototype([X3DPrototype44]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype40]);
Transform56 := TTransformNode.Create;;
Transform56.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor57 := TPlaneSensorNode.Create;;
PlaneSensor57.Description := 'click on background to add nodes, click on nodes to add links';
PlaneSensor57.MinPosition := Vector2(-50,-50);
PlaneSensor57.MaxPosition := Vector2(50,50);
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(PlaneSensor57);
X3DPrototype58 := TX3DPrototypeNode;
SFVec3f59 := TSFVec3f.CreateUndefined(X3DPrototype58, false, 'position');
SFVec3f59.Value := '0 1.388333 0';
{ METHOD .AddSFVec3f }
X3DPrototype58.AddSFVec3f([SFVec3f59]);
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype58]);
X3DPrototype60 := TX3DPrototypeNode;
SFVec3f61 := TSFVec3f.CreateUndefined(X3DPrototype60, false, 'position');
SFVec3f61.Value := '0 1.388333 0';
{ METHOD .AddSFVec3f }
X3DPrototype60.AddSFVec3f([SFVec3f61]);
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype60]);
X3DPrototype62 := TX3DPrototypeNode;
SFVec3f63 := TSFVec3f.CreateUndefined(X3DPrototype62, false, 'position');
SFVec3f63.Value := '0 1.388333 0';
{ METHOD .AddSFVec3f }
X3DPrototype62.AddSFVec3f([SFVec3f63]);
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype62]);
X3DPrototype64 := TX3DPrototypeNode;
SFVec3f65 := TSFVec3f.CreateUndefined(X3DPrototype64, false, 'position');
SFVec3f65.Value := '0 1.388333 0';
{ METHOD .AddSFVec3f }
X3DPrototype64.AddSFVec3f([SFVec3f65]);
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype64]);
X3DPrototype66 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype66]);
X3DPrototype67 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype67]);
X3DPrototype68 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype68]);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Transform56);
Script69 := TScriptNode.Create;;
SFInt3270 := TSFInt32.CreateUndefined(Script69, false, 'counter');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFInt3270);
SFNode71 := TSFNode.CreateUndefined(Script69, false, 'node_changed');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFNode71);
SFBool72 := TSFBool.CreateUndefined(Script69, false, 'add_node');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFBool72);

Script69.SetSourceCode('''ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\\n                counter = counter++;\\n		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\\n			{ \"ProtoInstance\":\\n				{ \"@name\":\"node\",\\n				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }''');
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Script69);
{ Original "clickGenerator.EventIsActive TO clickHandler.add_node }
{ Sample clickGenerator.EventIsActive TO clickHandler.add_node}
Group11.AddRoute(PlaneSensor57.EventIsActive, SFBool72);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.EventPosition_changed TO linkA.EventSet_positionA }
{ Sample nodeA.EventPosition_changed TO linkA.EventSet_positionA}
Group11.AddRoute(X3DPrototype58.EventPosition_changed, X3DPrototype66.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeB.EventPosition_changed TO linkA.EventSet_positionB }
{ Sample nodeB.EventPosition_changed TO linkA.EventSet_positionB}
Group11.AddRoute(X3DPrototype60.EventPosition_changed, X3DPrototype66.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.EventPosition_changed TO linkB.EventSet_positionA }
{ Sample nodeA.EventPosition_changed TO linkB.EventSet_positionA}
Group11.AddRoute(X3DPrototype58.EventPosition_changed, X3DPrototype67.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeC.EventPosition_changed TO linkB.EventSet_positionB }
{ Sample nodeC.EventPosition_changed TO linkB.EventSet_positionB}
Group11.AddRoute(X3DPrototype62.EventPosition_changed, X3DPrototype67.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.EventPosition_changed TO linkC.EventSet_positionA }
{ Sample nodeA.EventPosition_changed TO linkC.EventSet_positionA}
Group11.AddRoute(X3DPrototype58.EventPosition_changed, X3DPrototype68.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeD.EventPosition_changed TO linkC.EventSet_positionB }
{ Sample nodeD.EventPosition_changed TO linkC.EventSet_positionB}
Group11.AddRoute(X3DPrototype64.EventPosition_changed, X3DPrototype68.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function Createforce_tidy: TX3DRootNode;
begin
Initforce_tidyPart0;
Initforce_tidyPart1;
Initforce_tidyPart2;
Result := X3D0;
end;

begin
end.
