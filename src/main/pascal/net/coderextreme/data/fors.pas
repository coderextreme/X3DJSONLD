unit fors;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createfors: TX3DRootNode;

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
Transform23: TTransformNode;
Shape24: TShapeNode;
Text25: TTextNode;
FontStyle26: TFontStyleNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
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
Extrusion47: TExtrusionNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Script50: TScriptNode;
MFVec3f51: TMFVec3f;
SFVec3f52: TSFVec3f;
SFVec3f53: TSFVec3f;
IS54: TIS;
connect55: Tconnect;
connect56: Tconnect;
Transform58: TTransformNode;
PlaneSensor59: TPlaneSensorNode;
X3DPrototype60: TX3DPrototypeNode;
SFVec3f61: TSFVec3f;
X3DPrototype62: TX3DPrototypeNode;
SFVec3f63: TSFVec3f;
X3DPrototype64: TX3DPrototypeNode;
Script65: TScriptNode;
SFInt3266: TSFInt32;
SFBool67: TSFBool;

procedure InitforsPart0;
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
X3D0.Meta['title'] := 'fors.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
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
Sphere20 := TSphereNode.Create;
{ METHOD .Geometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
Shape19.Appearance := Appearance21;
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Shape19);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(1,0,0);
Shape24 := TShapeNode.Create;
end;

procedure InitforsPart1;
begin

Text25 := TTextNode.Create;
Text25.SetText(['Node']);
FontStyle26 := TFontStyleNode.Create;
FontStyle26.Justify := fjMIDDLE;
FontStyle26.JustifyMinor := fjMIDDLE;
FontStyle26.Size := 5;
{ METHOD .FontStyle }
Text25.FontStyle := FontStyle26;
{ METHOD .Geometry }
Shape24.Geometry := Text25;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance27.Material := Material28;
{ METHOD .Appearance }
Shape24.Appearance := Appearance27;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Transform23);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Transform16);
PositionInterpolator29 := TPositionInterpolatorNode.Create;
PositionInterpolator29.SetKey([0,1]);
PositionInterpolator29.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(PositionInterpolator29);
Script30 := TScriptNode.Create;
SFVec3f31 := TSFVec3f.CreateUndefined(Script30, false, 'translation');
SFVec3f31.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(SFVec3f31);
SFVec3f32 := TSFVec3f.CreateUndefined(Script30, false, 'old');
SFVec3f32.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(SFVec3f32);
SFTime33 := TSFTime.CreateUndefined(Script30, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(SFTime33);
MFVec3f34 := TMFVec3f.CreateUndefined(Script30, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(MFVec3f34);

Script30.SetSourceCode('''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}''');
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Script30);
TimeSensor35 := TTimeSensorNode.Create;
TimeSensor35.CycleInterval := 3;
TimeSensor35.Loop := True;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(TimeSensor35);
{ Original "nodeClock.EventCycleTime TO MoveBall.EventSet_cycle }
{ Sample nodeClock.EventCycleTime TO MoveBall.EventSet_cycle}
Group15.AddRoute(TimeSensor35.EventCycleTime, Script30.set_EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction }
{ Sample nodeClock.EventFraction_changed TO NodePosition.EventSet_fraction}
Group15.AddRoute(TimeSensor35.EventFraction_changed, PositionInterpolator29.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MoveBall.EventKeyValue TO NodePosition.keyValue }
{ Sample MoveBall.EventKeyValue TO NodePosition.keyValue}
Group15.AddRoute(Script30.EventKeyValue, PositionInterpolator29.set_keyValue);
{ METHOD .AddX3DROUTE }
{ Original "NodePosition.EventValue_changed TO transform.EventSet_translation }
{ Sample NodePosition.EventValue_changed TO transform.EventSet_translation}
Group15.AddRoute(PositionInterpolator29.EventValue_changed, Transform16.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype14.AddChildren([Group15]);
{ METHOD .AddX3DPrototype }
X3DPrototype11.AddX3DPrototype([X3DPrototype14]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype11]);
X3DPrototype40 := TX3DPrototype.Create;
X3DInterfaceDeclaration41 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f42 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration41, false, 'set_positionA');
SFVec3f42.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration41.AddSFVec3f([SFVec3f42]);
SFVec3f43 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration41, false, 'set_positionB');
SFVec3f43.Value := '50 50 50';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration41.AddSFVec3f([SFVec3f43]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype40.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration41]);
X3DPrototype44 := TX3DPrototype.Create;
Group45 := TGroupNode.Create;
Shape46 := TShapeNode.Create;
Extrusion47 := TExtrusionNode.Create;
Extrusion47.CreaseAngle := 0.785;
Extrusion47.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion47.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ METHOD .Geometry }
Shape46.Geometry := Extrusion47;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance48.Material := Material49;
{ METHOD .Appearance }
Shape46.Appearance := Appearance48;
{ METHOD .FdChildren.Add }
Group45.FdChildren.Add(Shape46);
Script50 := TScriptNode.Create;
MFVec3f51 := TMFVec3f.CreateUndefined(Script50, false, 'spine');
MFVec3f51.Value := '0 -50 0 0 0 0 0 50 0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(MFVec3f51);
SFVec3f52 := TSFVec3f.CreateUndefined(Script50, false, 'endA');
SFVec3f52.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f52);
SFVec3f53 := TSFVec3f.CreateUndefined(Script50, false, 'endB');
SFVec3f53.Value := '50 50 50';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f53);
IS54 := TIS.Create;
connect55 := Tconnect.Create;
connect55.NodeField := 'endA';
connect55.ProtoField := 'set_positionA';
{ METHOD .Connect }
IS54.Connect := connect55;
connect56 := Tconnect.Create;
connect56.NodeField := 'endB';
connect56.ProtoField := 'set_positionB';
{ METHOD .Connect }
IS54.Connect := connect56;
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(IS54);

Script50.SetSourceCode('''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}''');
{ METHOD .FdChildren.Add }
Group45.FdChildren.Add(Script50);
{ Original "MoveCylinder.EventSpine TO extrusion.EventSet_spine }
{ Sample MoveCylinder.EventSpine TO extrusion.EventSet_spine}
Group45.AddRoute(Script50.EventSpine, Extrusion47.set_EventSet_spine);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype44.AddChildren([Group45]);
{ METHOD .AddX3DPrototype }
X3DPrototype40.AddX3DPrototype([X3DPrototype44]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype40]);
Transform58 := TTransformNode.Create;
Transform58.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor59 := TPlaneSensorNode.Create;
PlaneSensor59.MinPosition := Vector2(-50,-50);
PlaneSensor59.MaxPosition := Vector2(50,50);
PlaneSensor59.Description := 'click on background to add nodes, click on nodes to add links';
{ METHOD .FdChildren.Add }
Transform58.FdChildren.Add(PlaneSensor59);
X3DPrototype60 := TX3DPrototypeNode.Create;
SFVec3f61 := TSFVec3f.CreateUndefined(X3DPrototype60, false, 'position');
SFVec3f61.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype60.AddSFVec3f([SFVec3f61]);
{ METHOD .AddX3DPrototype }
Transform58.AddX3DPrototype([X3DPrototype60]);
X3DPrototype62 := TX3DPrototypeNode.Create;
SFVec3f63 := TSFVec3f.CreateUndefined(X3DPrototype62, false, 'position');
SFVec3f63.Value := '50 50 50';
{ METHOD .AddSFVec3f }
X3DPrototype62.AddSFVec3f([SFVec3f63]);
{ METHOD .AddX3DPrototype }
Transform58.AddX3DPrototype([X3DPrototype62]);
X3DPrototype64 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform58.AddX3DPrototype([X3DPrototype64]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform58);
Script65 := TScriptNode.Create;
SFInt3266 := TSFInt32.CreateUndefined(Script65, false, 'counter');
SFInt3266.Value := '0';
{ METHOD .Fd.AddCustomField }
Script65.AddCustomField(SFInt3266);
SFBool67 := TSFBool.CreateUndefined(Script65, false, 'add_node');
SFBool67.Value := 'false';
{ METHOD .Fd.AddCustomField }
Script65.AddCustomField(SFBool67);
{ <field accessType="outputOnly" name="node_changed" type="SFNode"/> }
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> }
{ <Transform USE="HoldsContent"/> }
{ </field> }

Script65.SetSourceCode('''ecmascript:\n"+
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
Group10.FdChildren.Add(Script65);
{ Original "clickGenerator.EventIsActive TO clickHandler.add_node }
{ Sample clickGenerator.EventIsActive TO clickHandler.add_node}
Group10.AddRoute(PlaneSensor59.EventIsActive, SFBool67);
{ METHOD .AddX3DROUTE }
{ Original "nodeA.position TO linkA.EventSet_positionA }
{ Sample nodeA.position TO linkA.EventSet_positionA}
Group10.AddRoute(nodeA.position, X3DPrototype64.set_EventSet_positionA);
{ METHOD .AddX3DROUTE }
{ Original "nodeB.position TO linkA.EventSet_positionB }
{ Sample nodeB.position TO linkA.EventSet_positionB}
Group10.AddRoute(nodeB.position, X3DPrototype64.set_EventSet_positionB);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group10]);
end;

function Createfors: TX3DRootNode;
begin
InitforsPart0;
InitforsPart1;
Result := X3D0;
end;

begin
end.
