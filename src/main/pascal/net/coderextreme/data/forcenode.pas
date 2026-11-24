unit forcenode;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createforcenode: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group9: TGroupNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
SFVec3f12: TSFVec3f;
X3DPrototype13: TX3DPrototype;
Group14: TGroupNode;
Transform15: TTransformNode;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Transform21: TTransformNode;
Shape22: TShapeNode;
Text23: TTextNode;
FontStyle24: TFontStyleNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
PositionInterpolator27: TPositionInterpolatorNode;
Script28: TScriptNode;
SFVec3f29: TSFVec3f;
SFVec3f30: TSFVec3f;
SFTime31: TSFTime;
MFVec3f32: TMFVec3f;
TimeSensor33: TTimeSensorNode;
X3DPrototype38: TX3DPrototype;
X3DInterfaceDeclaration39: TX3DInterfaceDeclaration;
SFVec3f40: TSFVec3f;
SFVec3f41: TSFVec3f;
X3DPrototype42: TX3DPrototype;
Group43: TGroupNode;
Shape44: TShapeNode;
Extrusion45: TExtrusionNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Script48: TScriptNode;
MFVec3f49: TMFVec3f;
SFVec3f50: TSFVec3f;
SFVec3f51: TSFVec3f;
Transform54: TTransformNode;
PlaneSensor55: TPlaneSensorNode;
X3DPrototype56: TX3DPrototypeNode;
SFVec3f57: TSFVec3f;
X3DPrototype58: TX3DPrototypeNode;
SFVec3f59: TSFVec3f;
X3DPrototype60: TX3DPrototypeNode;
SFVec3f61: TSFVec3f;
X3DPrototype62: TX3DPrototypeNode;
SFVec3f63: TSFVec3f;
X3DPrototype64: TX3DPrototypeNode;
X3DPrototype65: TX3DPrototypeNode;
X3DPrototype66: TX3DPrototypeNode;
Script67: TScriptNode;
SFInt3268: TSFInt32;
SFNode69: TSFNode;
SFBool70: TSFBool;

procedure InitforcenodePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := 'December 13 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'July 14 2025';
{ METHOD .Meta }
X3D0.Meta['title'] := 'forcenode.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
{ METHOD .Head }
Group9 := TGroupNode.Create;;
X3DPrototype10 := TX3DPrototype.Create;;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f12 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration11, false, 'position');
SFVec3f12.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration11.AddSFVec3f([SFVec3f12]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype13 := TX3DPrototype.Create;;
Group14 := TGroupNode.Create;;
Transform15 := TTransformNode.Create;;
Shape17 := TShapeNode.Create;;
Sphere18 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;;
Material20 := TMaterialNode.Create;;
Material20.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance19.Material := Material20;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape17.Appearance := Appearance19;
{ METHOD .FdChildren.Add }
Transform15.FdChildren.Add(Shape17);
end;

procedure InitforcenodePart1;
begin

Transform21 := TTransformNode.Create;;
Transform21.Translation := Vector3(1,0,1);
Shape22 := TShapeNode.Create;;
Text23 := TTextNode.Create;;
Text23.SetText(['Node']);
FontStyle24 := TFontStyleNode.Create;;
FontStyle24.Justify := fjMIDDLE;
FontStyle24.JustifyMinor := fjMIDDLE;
FontStyle24.Size := 5;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text23.FontStyle := FontStyle24;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape22.Geometry := Text23;
Appearance25 := TAppearanceNode.Create;;
Material26 := TMaterialNode.Create;;
Material26.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape22.Appearance := Appearance25;
{ METHOD .FdChildren.Add }
Transform21.FdChildren.Add(Shape22);
{ METHOD .FdChildren.Add }
Transform15.FdChildren.Add(Transform21);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform15);
PositionInterpolator27 := TPositionInterpolatorNode.Create;;
PositionInterpolator27.SetKey([0,1]);
PositionInterpolator27.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(PositionInterpolator27);
Script28 := TScriptNode.Create;;
SFVec3f29 := TSFVec3f.CreateUndefined(Script28, false, 'translation');
SFVec3f29.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script28.AddCustomField(SFVec3f29);
SFVec3f30 := TSFVec3f.CreateUndefined(Script28, false, 'old');
SFVec3f30.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script28.AddCustomField(SFVec3f30);
SFTime31 := TSFTime.CreateUndefined(Script28, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script28.AddCustomField(SFTime31);
end;

procedure InitforcenodePart2;
begin

MFVec3f32 := TMFVec3f.CreateUndefined(Script28, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script28.AddCustomField(MFVec3f32);

Script28.SetSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			    			keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}''');
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Script28);
TimeSensor33 := TTimeSensorNode.Create;;
TimeSensor33.CycleInterval := 3;
TimeSensor33.Loop := True;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(TimeSensor33);
{ Original "nodeClock.EventCycleTime TO MoveBall.EventSet_cycle }
{ Sample nodeClock.EventCycleTime TO MoveBall.EventSet_cycle}
Group14.AddRoute(TimeSensor33.EventCycleTime, Script28.EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction }
{ Sample nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction}
Group14.AddRoute(TimeSensor33.EventFraction_changed, PositionInterpolator27.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MoveBall.EventKeyValue TO NodePosition.keyValue }
{ Sample MoveBall.EventKeyValue TO NodePosition.keyValue}
Group14.AddRoute(Script28.EventKeyValue, PositionInterpolator27.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "NodePosition.EventValue_changed TO transform.FdTranslation.EventIn }
{ Sample NodePosition.EventValue_changed TO transform.FdTranslation.EventIn}
Group14.AddRoute(PositionInterpolator27.EventValue_changed, Transform15.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype13.AddChildren([Group14]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group9.AddX3DPrototype([X3DPrototype10]);
X3DPrototype38 := TX3DPrototype.Create;;
X3DInterfaceDeclaration39 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f40 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration39, false, 'set_positionA');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration39.AddSFVec3f([SFVec3f40]);
SFVec3f41 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration39, false, 'set_positionB');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration39.AddSFVec3f([SFVec3f41]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype38.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration39]);
X3DPrototype42 := TX3DPrototype.Create;;
Group43 := TGroupNode.Create;;
Shape44 := TShapeNode.Create;;
Extrusion45 := TExtrusionNode.Create;;
Extrusion45.CreaseAngle := 0.785;
Extrusion45.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion45.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape44.Geometry := Extrusion45;
Appearance46 := TAppearanceNode.Create;;
Material47 := TMaterialNode.Create;;
Material47.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape44.Appearance := Appearance46;
{ METHOD .FdChildren.Add }
Group43.FdChildren.Add(Shape44);
Script48 := TScriptNode.Create;;
MFVec3f49 := TMFVec3f.CreateUndefined(Script48, false, 'spine');
MFVec3f49.Value := '0 -50 0 0 0 0 0 50 0';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(MFVec3f49);
SFVec3f50 := TSFVec3f.CreateUndefined(Script48, false, 'endA');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f50);
SFVec3f51 := TSFVec3f.CreateUndefined(Script48, false, 'endB');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f51);

Script48.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }''');
{ METHOD .FdChildren.Add }
Group43.FdChildren.Add(Script48);
{ Original "MoveCylinder.EventSpine TO extrusion.EventSet_spine }
{ Sample MoveCylinder.EventSpine TO extrusion.EventSet_spine}
Group43.AddRoute(Script48.EventSpine, Extrusion45.EventSet_spine);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype42.AddChildren([Group43]);
{ METHOD .AddX3DPrototype }
X3DPrototype38.AddX3DPrototype([X3DPrototype42]);
{ METHOD .AddX3DPrototype }
Group9.AddX3DPrototype([X3DPrototype38]);
Transform54 := TTransformNode.Create;;
Transform54.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor55 := TPlaneSensorNode.Create;;
PlaneSensor55.MinPosition := Vector2(-50,-50);
PlaneSensor55.MaxPosition := Vector2(50,50);
PlaneSensor55.Description := 'click on background to add nodes, click on nodes to add links';
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(PlaneSensor55);
X3DPrototype56 := TX3DPrototypeNode;
SFVec3f57 := TSFVec3f.CreateUndefined(X3DPrototype56, false, 'position');
SFVec3f57.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype56.AddSFVec3f([SFVec3f57]);
{ METHOD .AddX3DPrototype }
Transform54.AddX3DPrototype([X3DPrototype56]);
X3DPrototype58 := TX3DPrototypeNode;
SFVec3f59 := TSFVec3f.CreateUndefined(X3DPrototype58, false, 'position');
SFVec3f59.Value := '50 50 50';
{ METHOD .AddSFVec3f }
X3DPrototype58.AddSFVec3f([SFVec3f59]);
{ METHOD .AddX3DPrototype }
Transform54.AddX3DPrototype([X3DPrototype58]);
X3DPrototype60 := TX3DPrototypeNode;
SFVec3f61 := TSFVec3f.CreateUndefined(X3DPrototype60, false, 'position');
SFVec3f61.Value := '-50 -50 -50';
{ METHOD .AddSFVec3f }
X3DPrototype60.AddSFVec3f([SFVec3f61]);
{ METHOD .AddX3DPrototype }
Transform54.AddX3DPrototype([X3DPrototype60]);
X3DPrototype62 := TX3DPrototypeNode;
SFVec3f63 := TSFVec3f.CreateUndefined(X3DPrototype62, false, 'position');
SFVec3f63.Value := '50 50 -50';
{ METHOD .AddSFVec3f }
X3DPrototype62.AddSFVec3f([SFVec3f63]);
{ METHOD .AddX3DPrototype }
Transform54.AddX3DPrototype([X3DPrototype62]);
X3DPrototype64 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform54.AddX3DPrototype([X3DPrototype64]);
X3DPrototype65 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform54.AddX3DPrototype([X3DPrototype65]);
X3DPrototype66 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform54.AddX3DPrototype([X3DPrototype66]);
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Transform54);
Script67 := TScriptNode.Create;;
SFInt3268 := TSFInt32.CreateUndefined(Script67, false, 'counter');
SFInt3268.Value := '0';
{ METHOD .Fd.AddCustomField }
Script67.AddCustomField(SFInt3268);
SFNode69 := TSFNode.CreateUndefined(Script67, false, 'node_changed');
{ METHOD .Fd.AddCustomField }
Script67.AddCustomField(SFNode69);
SFBool70 := TSFBool.CreateUndefined(Script67, false, 'add_node');
SFBool70.Value := 'false';
{ METHOD .Fd.AddCustomField }
Script67.AddCustomField(SFBool70);
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> }
{ <Transform USE="HoldsContent"/> }
{ </field> }

Script67.SetSourceCode('''ecmascript:\n"+
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
Group9.FdChildren.Add(Script67);
{ Original "clickGenerator.EventIsActive TO clickHandler.add_node }
{ Sample clickGenerator.EventIsActive TO clickHandler.add_node}
Group9.AddRoute(PlaneSensor55.EventIsActive, SFBool70);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.position TO linkA.EventSet_positionA }
{ Sample nodeA.position TO linkA.EventSet_positionA}
Group9.AddRoute(nodeA.position, X3DPrototype64.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeB.position TO linkA.EventSet_positionB }
{ Sample nodeB.position TO linkA.EventSet_positionB}
Group9.AddRoute(nodeB.position, X3DPrototype64.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.position TO linkB.EventSet_positionA }
{ Sample nodeA.position TO linkB.EventSet_positionA}
Group9.AddRoute(nodeA.position, X3DPrototype65.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeC.position TO linkB.EventSet_positionB }
{ Sample nodeC.position TO linkB.EventSet_positionB}
Group9.AddRoute(nodeC.position, X3DPrototype65.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.position TO linkC.EventSet_positionA }
{ Sample nodeA.position TO linkC.EventSet_positionA}
Group9.AddRoute(nodeA.position, X3DPrototype66.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeD.position TO linkC.EventSet_positionB }
{ Sample nodeD.position TO linkC.EventSet_positionB}
Group9.AddRoute(nodeD.position, X3DPrototype66.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group9]);
end;

function Createforcenode: TX3DRootNode;
begin
InitforcenodePart0;
InitforcenodePart1;
InitforcenodePart2;
Result := X3D0;
end;

begin
end.
