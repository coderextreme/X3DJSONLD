unit force_tidy;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
IS18: TIS;
connect19: Tconnect;
Shape20: TShapeNode;
Sphere21: TSphereNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
Text28: TTextNode;
FontStyle29: TFontStyleNode;
PositionInterpolator30: TPositionInterpolatorNode;
Script31: TScriptNode;
SFVec3f32: TSFVec3f;
SFVec3f33: TSFVec3f;
SFTime34: TSFTime;
MFVec3f35: TMFVec3f;
TimeSensor36: TTimeSensorNode;
X3DPrototype41: TX3DPrototype;
X3DInterfaceDeclaration42: TX3DInterfaceDeclaration;
SFVec3f43: TSFVec3f;
SFVec3f44: TSFVec3f;
X3DPrototype45: TX3DPrototype;
Group46: TGroupNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Extrusion50: TExtrusionNode;
Script51: TScriptNode;
MFVec3f52: TMFVec3f;
SFVec3f53: TSFVec3f;
SFVec3f54: TSFVec3f;
IS55: TIS;
connect56: Tconnect;
connect57: Tconnect;
Transform59: TTransformNode;
PlaneSensor60: TPlaneSensorNode;
X3DPrototype61: TX3DPrototypeNode;
SFVec3f62: TSFVec3f;
X3DPrototype63: TX3DPrototypeNode;
SFVec3f64: TSFVec3f;
X3DPrototype65: TX3DPrototypeNode;
SFVec3f66: TSFVec3f;
X3DPrototype67: TX3DPrototypeNode;
SFVec3f68: TSFVec3f;
X3DPrototype69: TX3DPrototypeNode;
X3DPrototype70: TX3DPrototypeNode;
X3DPrototype71: TX3DPrototypeNode;
Script72: TScriptNode;
SFInt3273: TSFInt32;
SFNode74: TSFNode;
SFBool75: TSFBool;

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
Group11 := TGroupNode.Create;
X3DPrototype12 := TX3DPrototype.Create;
X3DInterfaceDeclaration13 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f14 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration13, false, 'position');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration13.AddSFVec3f([SFVec3f14]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype12.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration13]);
X3DPrototype15 := TX3DPrototype.Create;
Group16 := TGroupNode.Create;
Transform17 := TTransformNode.Create;
IS18 := TIS.Create;
connect19 := Tconnect.Create;
connect19.NodeField := 'translation';
connect19.ProtoField := 'position';
{ METHOD .Connect }
IS18.Connect := connect19;
{ METHOD .IS }
Transform17.IS := IS18;
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
{ METHOD .Geometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
{ METHOD .Appearance }
Shape20.Appearance := Appearance22;
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Shape20);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(1,0,0);
Shape25 := TShapeNode.Create;
end;

procedure Initforce_tidyPart1;
begin

Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance26.Material := Material27;
{ METHOD .Appearance }
Shape25.Appearance := Appearance26;
Text28 := TTextNode.Create;
Text28.SetText(['Node']);
FontStyle29 := TFontStyleNode.Create;
FontStyle29.Size := 5;
FontStyle29.Justify := fjMIDDLE;
FontStyle29.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
Text28.FontStyle := FontStyle29;
{ METHOD .Geometry }
Shape25.Geometry := Text28;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Transform24);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Transform17);
PositionInterpolator30 := TPositionInterpolatorNode.Create;
PositionInterpolator30.SetKey([0,1]);
PositionInterpolator30.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(PositionInterpolator30);
Script31 := TScriptNode.Create;
SFVec3f32 := TSFVec3f.CreateUndefined(Script31, false, 'translation');
SFVec3f32.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(SFVec3f32);
SFVec3f33 := TSFVec3f.CreateUndefined(Script31, false, 'old');
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(SFVec3f33);
SFTime34 := TSFTime.CreateUndefined(Script31, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(SFTime34);
MFVec3f35 := TMFVec3f.CreateUndefined(Script31, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script31.AddCustomField(MFVec3f35);

Script31.SetSourceCode('''ecmascript:\n"+
"		function set_cycle(value) {\n"+
"			old = translation;\n"+
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			keyValue = new MFVec3f(old, translation);\n"+
"		}''');
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Script31);
TimeSensor36 := TTimeSensorNode.Create;
TimeSensor36.CycleInterval := 3;
TimeSensor36.Loop := True;
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(TimeSensor36);
{ Original "nodeClock.EventCycleTime TO MoveBall.EventSet_cycle }
{ Sample nodeClock.EventCycleTime TO MoveBall.EventSet_cycle}
Group16.AddRoute(TimeSensor36.EventCycleTime, Script31.set_EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction }
{ Sample nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction}
Group16.AddRoute(TimeSensor36.EventFraction_changed, PositionInterpolator30.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MoveBall.EventKeyValue TO NodePosition.EventSet_keyValue }
{ Sample MoveBall.EventKeyValue TO NodePosition.EventSet_keyValue}
Group16.AddRoute(Script31.EventKeyValue, PositionInterpolator30.set_EventSet_keyValue);
{ METHOD .AddX3DROUTE }
{ Original "NodePosition.EventValue_changed TO transform.EventSet_translation }
{ Sample NodePosition.EventValue_changed TO transform.EventSet_translation}
Group16.AddRoute(PositionInterpolator30.EventValue_changed, Transform17.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype15.AddChildren([Group16]);
{ METHOD .AddX3DPrototype }
X3DPrototype12.AddX3DPrototype([X3DPrototype15]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype12]);
X3DPrototype41 := TX3DPrototype.Create;
X3DInterfaceDeclaration42 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f43 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration42, false, 'set_positionA');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration42.AddSFVec3f([SFVec3f43]);
SFVec3f44 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration42, false, 'set_positionB');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration42.AddSFVec3f([SFVec3f44]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype41.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration42]);
X3DPrototype45 := TX3DPrototype.Create;
Group46 := TGroupNode.Create;
Shape47 := TShapeNode.Create;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance48.Material := Material49;
{ METHOD .Appearance }
Shape47.Appearance := Appearance48;
Extrusion50 := TExtrusionNode.Create;
Extrusion50.CreaseAngle := 0.785;
Extrusion50.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion50.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ METHOD .Geometry }
Shape47.Geometry := Extrusion50;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(Shape47);
Script51 := TScriptNode.Create;
MFVec3f52 := TMFVec3f.CreateUndefined(Script51, false, 'spine');
MFVec3f52.Value := '0 -50 0 0 0 0 0 50 0';
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(MFVec3f52);
SFVec3f53 := TSFVec3f.CreateUndefined(Script51, false, 'endA');
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(SFVec3f53);
SFVec3f54 := TSFVec3f.CreateUndefined(Script51, false, 'endB');
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(SFVec3f54);
IS55 := TIS.Create;
connect56 := Tconnect.Create;
connect56.NodeField := 'endA';
connect56.ProtoField := 'set_positionA';
{ METHOD .Connect }
IS55.Connect := connect56;
connect57 := Tconnect.Create;
connect57.NodeField := 'endB';
connect57.ProtoField := 'set_positionB';
{ METHOD .Connect }
IS55.Connect := connect57;
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(IS55);

Script51.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }''');
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(Script51);
{ Original "MoveCylinder.EventSpine_changed TO extrusion.EventSet_spine }
{ Sample MoveCylinder.EventSpine_changed TO extrusion.EventSet_spine}
Group46.AddRoute(Script51.EventSpine_changed, Extrusion50.set_EventSet_spine);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype45.AddChildren([Group46]);
{ METHOD .AddX3DPrototype }
X3DPrototype41.AddX3DPrototype([X3DPrototype45]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype41]);
Transform59 := TTransformNode.Create;
Transform59.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor60 := TPlaneSensorNode.Create;
PlaneSensor60.Description := 'click on background to add nodes, click on nodes to add links';
PlaneSensor60.MinPosition := Vector2(-50,-50);
PlaneSensor60.MaxPosition := Vector2(50,50);
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(PlaneSensor60);
X3DPrototype61 := TX3DPrototypeNode.Create;
SFVec3f62 := TSFVec3f.CreateUndefined(X3DPrototype61, false, 'position');
SFVec3f62.Value := '0 1.388333 0';
{ METHOD .AddSFVec3f }
X3DPrototype61.AddSFVec3f([SFVec3f62]);
{ METHOD .AddX3DPrototype }
Transform59.AddX3DPrototype([X3DPrototype61]);
X3DPrototype63 := TX3DPrototypeNode.Create;
SFVec3f64 := TSFVec3f.CreateUndefined(X3DPrototype63, false, 'position');
SFVec3f64.Value := '0 1.388333 0';
{ METHOD .AddSFVec3f }
X3DPrototype63.AddSFVec3f([SFVec3f64]);
{ METHOD .AddX3DPrototype }
Transform59.AddX3DPrototype([X3DPrototype63]);
X3DPrototype65 := TX3DPrototypeNode.Create;
SFVec3f66 := TSFVec3f.CreateUndefined(X3DPrototype65, false, 'position');
SFVec3f66.Value := '0 1.388333 0';
{ METHOD .AddSFVec3f }
X3DPrototype65.AddSFVec3f([SFVec3f66]);
{ METHOD .AddX3DPrototype }
Transform59.AddX3DPrototype([X3DPrototype65]);
X3DPrototype67 := TX3DPrototypeNode.Create;
SFVec3f68 := TSFVec3f.CreateUndefined(X3DPrototype67, false, 'position');
SFVec3f68.Value := '0 1.388333 0';
{ METHOD .AddSFVec3f }
X3DPrototype67.AddSFVec3f([SFVec3f68]);
{ METHOD .AddX3DPrototype }
Transform59.AddX3DPrototype([X3DPrototype67]);
X3DPrototype69 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform59.AddX3DPrototype([X3DPrototype69]);
X3DPrototype70 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform59.AddX3DPrototype([X3DPrototype70]);
X3DPrototype71 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform59.AddX3DPrototype([X3DPrototype71]);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Transform59);
Script72 := TScriptNode.Create;
SFInt3273 := TSFInt32.CreateUndefined(Script72, false, 'counter');
{ METHOD .Fd.AddCustomField }
Script72.AddCustomField(SFInt3273);
SFNode74 := TSFNode.CreateUndefined(Script72, false, 'node_changed');
{ METHOD .Fd.AddCustomField }
Script72.AddCustomField(SFNode74);
SFBool75 := TSFBool.CreateUndefined(Script72, false, 'add_node');
{ METHOD .Fd.AddCustomField }
Script72.AddCustomField(SFBool75);

Script72.SetSourceCode('''ecmascript:\n"+
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
Group11.FdChildren.Add(Script72);
{ Original "clickGenerator.EventIsActive TO clickHandler.add_node }
{ Sample clickGenerator.EventIsActive TO clickHandler.add_node}
Group11.AddRoute(PlaneSensor60.EventIsActive, SFBool75);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.EventPosition_changed TO linkA.EventSet_positionA }
{ Sample nodeA.EventPosition_changed TO linkA.EventSet_positionA}
Group11.AddRoute(X3DPrototype61.EventPosition_changed, X3DPrototype69.set_EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeB.EventPosition_changed TO linkA.EventSet_positionB }
{ Sample nodeB.EventPosition_changed TO linkA.EventSet_positionB}
Group11.AddRoute(X3DPrototype63.EventPosition_changed, X3DPrototype69.set_EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.EventPosition_changed TO linkB.EventSet_positionA }
{ Sample nodeA.EventPosition_changed TO linkB.EventSet_positionA}
Group11.AddRoute(X3DPrototype61.EventPosition_changed, X3DPrototype70.set_EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeC.EventPosition_changed TO linkB.EventSet_positionB }
{ Sample nodeC.EventPosition_changed TO linkB.EventSet_positionB}
Group11.AddRoute(X3DPrototype65.EventPosition_changed, X3DPrototype70.set_EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.EventPosition_changed TO linkC.EventSet_positionA }
{ Sample nodeA.EventPosition_changed TO linkC.EventSet_positionA}
Group11.AddRoute(X3DPrototype61.EventPosition_changed, X3DPrototype71.set_EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeD.EventPosition_changed TO linkC.EventSet_positionB }
{ Sample nodeD.EventPosition_changed TO linkC.EventSet_positionB}
Group11.AddRoute(X3DPrototype67.EventPosition_changed, X3DPrototype71.set_EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function Createforce_tidy: TX3DRootNode;
begin
Initforce_tidyPart0;
Initforce_tidyPart1;
Result := X3D0;
end;

begin
end.
