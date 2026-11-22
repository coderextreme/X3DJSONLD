unit forcenode;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
IS16: TIS;
connect17: Tconnect;
Shape18: TShapeNode;
Sphere19: TSphereNode;
Appearance20: TAppearanceNode;
Material21: TMaterialNode;
Transform22: TTransformNode;
Shape23: TShapeNode;
Text24: TTextNode;
FontStyle25: TFontStyleNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
PositionInterpolator28: TPositionInterpolatorNode;
Script29: TScriptNode;
SFVec3f30: TSFVec3f;
SFVec3f31: TSFVec3f;
SFTime32: TSFTime;
MFVec3f33: TMFVec3f;
TimeSensor34: TTimeSensorNode;
X3DPrototype39: TX3DPrototype;
X3DInterfaceDeclaration40: TX3DInterfaceDeclaration;
SFVec3f41: TSFVec3f;
SFVec3f42: TSFVec3f;
X3DPrototype43: TX3DPrototype;
Group44: TGroupNode;
Shape45: TShapeNode;
Extrusion46: TExtrusionNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Script49: TScriptNode;
MFVec3f50: TMFVec3f;
SFVec3f51: TSFVec3f;
SFVec3f52: TSFVec3f;
IS53: TIS;
connect54: Tconnect;
connect55: Tconnect;
Transform57: TTransformNode;
PlaneSensor58: TPlaneSensorNode;
X3DPrototype59: TX3DPrototypeNode;
SFVec3f60: TSFVec3f;
X3DPrototype61: TX3DPrototypeNode;
SFVec3f62: TSFVec3f;
X3DPrototype63: TX3DPrototypeNode;
SFVec3f64: TSFVec3f;
X3DPrototype65: TX3DPrototypeNode;
SFVec3f66: TSFVec3f;
X3DPrototype67: TX3DPrototypeNode;
X3DPrototype68: TX3DPrototypeNode;
X3DPrototype69: TX3DPrototypeNode;
Script70: TScriptNode;
SFInt3271: TSFInt32;
SFNode72: TSFNode;
SFBool73: TSFBool;

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
Group9 := TGroupNode.Create;
X3DPrototype10 := TX3DPrototype.Create;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f12 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration11, false, 'position');
SFVec3f12.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration11.AddSFVec3f([SFVec3f12]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype13 := TX3DPrototype.Create;
Group14 := TGroupNode.Create;
Transform15 := TTransformNode.Create;
IS16 := TIS.Create;
connect17 := Tconnect.Create;
connect17.NodeField := 'translation';
connect17.ProtoField := 'position';
{ METHOD .Connect }
IS16.Connect := connect17;
{ METHOD .IS }
Transform15.IS := IS16;
Shape18 := TShapeNode.Create;
Sphere19 := TSphereNode.Create;
{ METHOD .Geometry }
Shape18.Geometry := Sphere19;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance20.Material := Material21;
{ METHOD .Appearance }
Shape18.Appearance := Appearance20;
{ METHOD .FdChildren.Add }
Transform15.FdChildren.Add(Shape18);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(1,0,1);
Shape23 := TShapeNode.Create;
Text24 := TTextNode.Create;
end;

procedure InitforcenodePart1;
begin

Text24.SetText(['Node']);
FontStyle25 := TFontStyleNode.Create;
FontStyle25.Justify := fjMIDDLE;
FontStyle25.JustifyMinor := fjMIDDLE;
FontStyle25.Size := 5;
{ METHOD .FontStyle }
Text24.FontStyle := FontStyle25;
{ METHOD .Geometry }
Shape23.Geometry := Text24;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance26.Material := Material27;
{ METHOD .Appearance }
Shape23.Appearance := Appearance26;
{ METHOD .FdChildren.Add }
Transform22.FdChildren.Add(Shape23);
{ METHOD .FdChildren.Add }
Transform15.FdChildren.Add(Transform22);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform15);
PositionInterpolator28 := TPositionInterpolatorNode.Create;
PositionInterpolator28.SetKey([0,1]);
PositionInterpolator28.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(PositionInterpolator28);
Script29 := TScriptNode.Create;
SFVec3f30 := TSFVec3f.CreateUndefined(Script29, false, 'translation');
SFVec3f30.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script29.AddCustomField(SFVec3f30);
SFVec3f31 := TSFVec3f.CreateUndefined(Script29, false, 'old');
SFVec3f31.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script29.AddCustomField(SFVec3f31);
SFTime32 := TSFTime.CreateUndefined(Script29, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script29.AddCustomField(SFTime32);
MFVec3f33 := TMFVec3f.CreateUndefined(Script29, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script29.AddCustomField(MFVec3f33);

Script29.SetSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			    			keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}''');
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Script29);
TimeSensor34 := TTimeSensorNode.Create;
TimeSensor34.CycleInterval := 3;
TimeSensor34.Loop := True;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(TimeSensor34);
{ Original "nodeClock.EventCycleTime TO MoveBall.EventSet_cycle }
{ Sample nodeClock.EventCycleTime TO MoveBall.EventSet_cycle}
Group14.AddRoute(TimeSensor34.EventCycleTime, Script29.EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction }
{ Sample nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction}
Group14.AddRoute(TimeSensor34.EventFraction_changed, PositionInterpolator28.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MoveBall.EventKeyValue TO NodePosition.keyValue }
{ Sample MoveBall.EventKeyValue TO NodePosition.keyValue}
Group14.AddRoute(Script29.EventKeyValue, PositionInterpolator28.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "NodePosition.EventValue_changed TO transform.FdTranslation.EventIn }
{ Sample NodePosition.EventValue_changed TO transform.FdTranslation.EventIn}
Group14.AddRoute(PositionInterpolator28.EventValue_changed, Transform15.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype13.AddChildren([Group14]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group9.AddX3DPrototype([X3DPrototype10]);
X3DPrototype39 := TX3DPrototype.Create;
X3DInterfaceDeclaration40 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f41 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration40, false, 'set_positionA');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration40.AddSFVec3f([SFVec3f41]);
SFVec3f42 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration40, false, 'set_positionB');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration40.AddSFVec3f([SFVec3f42]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype39.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration40]);
X3DPrototype43 := TX3DPrototype.Create;
Group44 := TGroupNode.Create;
Shape45 := TShapeNode.Create;
Extrusion46 := TExtrusionNode.Create;
Extrusion46.CreaseAngle := 0.785;
Extrusion46.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion46.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ METHOD .Geometry }
Shape45.Geometry := Extrusion46;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance47.Material := Material48;
{ METHOD .Appearance }
Shape45.Appearance := Appearance47;
{ METHOD .FdChildren.Add }
Group44.FdChildren.Add(Shape45);
Script49 := TScriptNode.Create;
MFVec3f50 := TMFVec3f.CreateUndefined(Script49, false, 'spine');
MFVec3f50.Value := '0 -50 0 0 0 0 0 50 0';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(MFVec3f50);
SFVec3f51 := TSFVec3f.CreateUndefined(Script49, false, 'endA');
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFVec3f51);
SFVec3f52 := TSFVec3f.CreateUndefined(Script49, false, 'endB');
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFVec3f52);
IS53 := TIS.Create;
connect54 := Tconnect.Create;
connect54.NodeField := 'endA';
connect54.ProtoField := 'set_positionA';
{ METHOD .Connect }
IS53.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'endB';
connect55.ProtoField := 'set_positionB';
{ METHOD .Connect }
IS53.Connect := connect55;
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(IS53);

Script49.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }''');
{ METHOD .FdChildren.Add }
Group44.FdChildren.Add(Script49);
{ Original "MoveCylinder.EventSpine TO extrusion.EventSet_spine }
{ Sample MoveCylinder.EventSpine TO extrusion.EventSet_spine}
Group44.AddRoute(Script49.EventSpine, Extrusion46.EventSet_spine);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype43.AddChildren([Group44]);
{ METHOD .AddX3DPrototype }
X3DPrototype39.AddX3DPrototype([X3DPrototype43]);
{ METHOD .AddX3DPrototype }
Group9.AddX3DPrototype([X3DPrototype39]);
Transform57 := TTransformNode.Create;
Transform57.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor58 := TPlaneSensorNode.Create;
PlaneSensor58.MinPosition := Vector2(-50,-50);
PlaneSensor58.MaxPosition := Vector2(50,50);
PlaneSensor58.Description := 'click on background to add nodes, click on nodes to add links';
{ METHOD .FdChildren.Add }
Transform57.FdChildren.Add(PlaneSensor58);
X3DPrototype59 := TX3DPrototypeNode.Create;
SFVec3f60 := TSFVec3f.CreateUndefined(X3DPrototype59, false, 'position');
SFVec3f60.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype59.AddSFVec3f([SFVec3f60]);
{ METHOD .AddX3DPrototype }
Transform57.AddX3DPrototype([X3DPrototype59]);
X3DPrototype61 := TX3DPrototypeNode.Create;
SFVec3f62 := TSFVec3f.CreateUndefined(X3DPrototype61, false, 'position');
SFVec3f62.Value := '50 50 50';
{ METHOD .AddSFVec3f }
X3DPrototype61.AddSFVec3f([SFVec3f62]);
{ METHOD .AddX3DPrototype }
Transform57.AddX3DPrototype([X3DPrototype61]);
X3DPrototype63 := TX3DPrototypeNode.Create;
SFVec3f64 := TSFVec3f.CreateUndefined(X3DPrototype63, false, 'position');
SFVec3f64.Value := '-50 -50 -50';
{ METHOD .AddSFVec3f }
X3DPrototype63.AddSFVec3f([SFVec3f64]);
{ METHOD .AddX3DPrototype }
Transform57.AddX3DPrototype([X3DPrototype63]);
X3DPrototype65 := TX3DPrototypeNode.Create;
SFVec3f66 := TSFVec3f.CreateUndefined(X3DPrototype65, false, 'position');
SFVec3f66.Value := '50 50 -50';
{ METHOD .AddSFVec3f }
X3DPrototype65.AddSFVec3f([SFVec3f66]);
{ METHOD .AddX3DPrototype }
Transform57.AddX3DPrototype([X3DPrototype65]);
X3DPrototype67 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform57.AddX3DPrototype([X3DPrototype67]);
X3DPrototype68 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform57.AddX3DPrototype([X3DPrototype68]);
X3DPrototype69 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform57.AddX3DPrototype([X3DPrototype69]);
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Transform57);
Script70 := TScriptNode.Create;
SFInt3271 := TSFInt32.CreateUndefined(Script70, false, 'counter');
SFInt3271.Value := '0';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFInt3271);
SFNode72 := TSFNode.CreateUndefined(Script70, false, 'node_changed');
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFNode72);
SFBool73 := TSFBool.CreateUndefined(Script70, false, 'add_node');
SFBool73.Value := 'false';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFBool73);
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> }
{ <Transform USE="HoldsContent"/> }
{ </field> }

Script70.SetSourceCode('''ecmascript:\n"+
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
Group9.FdChildren.Add(Script70);
{ Original "clickGenerator.EventIsActive TO clickHandler.add_node }
{ Sample clickGenerator.EventIsActive TO clickHandler.add_node}
Group9.AddRoute(PlaneSensor58.EventIsActive, SFBool73);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.position TO linkA.EventSet_positionA }
{ Sample nodeA.position TO linkA.EventSet_positionA}
Group9.AddRoute(nodeA.position, X3DPrototype67.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeB.position TO linkA.EventSet_positionB }
{ Sample nodeB.position TO linkA.EventSet_positionB}
Group9.AddRoute(nodeB.position, X3DPrototype67.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.position TO linkB.EventSet_positionA }
{ Sample nodeA.position TO linkB.EventSet_positionA}
Group9.AddRoute(nodeA.position, X3DPrototype68.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeC.position TO linkB.EventSet_positionB }
{ Sample nodeC.position TO linkB.EventSet_positionB}
Group9.AddRoute(nodeC.position, X3DPrototype68.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.position TO linkC.EventSet_positionA }
{ Sample nodeA.position TO linkC.EventSet_positionA}
Group9.AddRoute(nodeA.position, X3DPrototype69.EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeD.position TO linkC.EventSet_positionB }
{ Sample nodeD.position TO linkC.EventSet_positionB}
Group9.AddRoute(nodeD.position, X3DPrototype69.EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group9]);
end;

function Createforcenode: TX3DRootNode;
begin
InitforcenodePart0;
InitforcenodePart1;
Result := X3D0;
end;

begin
end.
