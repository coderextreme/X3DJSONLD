unit force;

interface

uses X3DNodes;

function Createforce: TX3DRootNode;

implementation

uses CastleVectors;

function Createforce: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
X3DPrototype11: TX3DPrototype;
X3DInterfaceDeclaration12: TX3DInterfaceDeclaration;
X3DField13: TX3DField;
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
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
TimeSensor35: TTimeSensorNode;
X3DPrototype40: TX3DPrototype;
X3DInterfaceDeclaration41: TX3DInterfaceDeclaration;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DPrototype44: TX3DPrototype;
Group45: TGroupNode;
Shape46: TShapeNode;
Extrusion47: TExtrusionNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Script50: TScriptNode;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
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
SFVec3f65: TSFVec3f;
X3DPrototype66: TX3DPrototypeNode;
SFVec3f67: TSFVec3f;
X3DPrototype68: TX3DPrototypeNode;
X3DPrototype69: TX3DPrototypeNode;
X3DPrototype70: TX3DPrototypeNode;
Script71: TScriptNode;
X3DField72: TX3DField;
X3DField73: TX3DField;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'force.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group10 := TGroupNode.Create;
X3DPrototype11 := TX3DPrototype.Create;
X3DPrototype11.NameField := 'node';
X3DInterfaceDeclaration12 := TX3DInterfaceDeclaration.Create(nil);
X3DField13 := TX3DField.Create;
X3DField13.NameField := 'position';
X3DField13.AccessType := 'inputOutput';
X3DField13.Type := 'SFVec3f';
X3DField13.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration12.X3DField := X3DField13;
{ .SetX3DInterfaceDeclaration }
X3DPrototype11.X3DInterfaceDeclaration := X3DInterfaceDeclaration12;
X3DPrototype14 := TX3DPrototype.Create;
Group15 := TGroupNode.Create;
Transform16 := TTransformNode.Create;
IS17 := TIS.Create;
connect18 := Tconnect.Create;
connect18.NodeField := 'translation';
connect18.ProtoField := 'position';
{ .AddConnect }
IS17.Connect := connect18;
{ .SetIS }
Transform16.IS := IS17;
Shape19 := TShapeNode.Create;
Sphere20 := TSphereNode.Create;
{ .SetGeometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape19.Appearance := Appearance21;
{ .AddChild }
Transform16.AddChildren([Shape19]);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(1,0,0);
Shape24 := TShapeNode.Create;
Text25 := TTextNode.Create;
Text25.SetText(['Node']);
FontStyle26 := TFontStyleNode.Create;
FontStyle26.Justify := fjMiddle;
FontStyle26.JustifyMinor := fjMiddle;
FontStyle26.Size := 5;
{ .SetFontStyle }
Text25.FontStyle := FontStyle26;
{ .SetGeometry }
Shape24.Geometry := Text25;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance27.Material := Material28;
{ .SetAppearance }
Shape24.Appearance := Appearance27;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Transform16.AddChildren([Transform23]);
{ .AddChildren }
Group15.AddChildren([Transform16]);
PositionInterpolator29 := TPositionInterpolatorNode.Create;
PositionInterpolator29.SetKey([0,1]);
PositionInterpolator29.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group15.AddChildren([PositionInterpolator29]);
Script30 := TScriptNode.Create;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'translation';
X3DField31.AccessType := 'inputOutput';
X3DField31.Type := 'SFVec3f';
X3DField31.Value := '50 50 0';
{ .SetX3DField }
Script30.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'old';
X3DField32.AccessType := 'inputOutput';
X3DField32.Type := 'SFVec3f';
X3DField32.Value := '0 0 0';
{ .AddX3DField }
Script30.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'set_cycle';
X3DField33.AccessType := 'inputOnly';
X3DField33.Type := 'SFTime';
{ .AddX3DField }
Script30.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'keyValue';
X3DField34.AccessType := 'outputOnly';
X3DField34.Type := 'MFVec3f';
{ .AddX3DField }
Script30.X3DField := X3DField34;

Script30.SetSourceCode('''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}''');
{ .AddChildren }
Group15.AddChildren([Script30]);
TimeSensor35 := TTimeSensorNode.Create;
TimeSensor35.CycleInterval := 3;
TimeSensor35.Loop := True;
{ .AddChildren }
Group15.AddChildren([TimeSensor35]);
Group15.AddRoute(TimeSensor35.FdCycletime, Script30.EventSet_cycle);
{ .AddX3DRoute }
Group15.AddRoute(TimeSensor35.EventFraction_changed, PositionInterpolator29.EventSet_fraction);
{ .AddX3DRoute }
Group15.AddRoute(Script30.FdKeyvalue, PositionInterpolator29.FdKeyvalue);
{ .AddX3DRoute }
Group15.AddRoute(PositionInterpolator29.EventValue_changed, Transform16.FdTranslation);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype14.Group := Group15;
{ .AddX3DPrototype }
X3DPrototype11.X3DPrototype := X3DPrototype14;
{ .SetX3DPrototype }
Group10.X3DPrototype := X3DPrototype11;
X3DPrototype40 := TX3DPrototype.Create;
X3DPrototype40.NameField := 'cyl';
X3DInterfaceDeclaration41 := TX3DInterfaceDeclaration.Create(nil);
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'set_positionA';
X3DField42.AccessType := 'inputOutput';
X3DField42.Type := 'SFVec3f';
X3DField42.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration41.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'set_positionB';
X3DField43.AccessType := 'inputOutput';
X3DField43.Type := 'SFVec3f';
X3DField43.Value := '50 50 50';
{ .AddX3DField }
X3DInterfaceDeclaration41.X3DField := X3DField43;
{ .SetX3DInterfaceDeclaration }
X3DPrototype40.X3DInterfaceDeclaration := X3DInterfaceDeclaration41;
X3DPrototype44 := TX3DPrototype.Create;
Group45 := TGroupNode.Create;
Shape46 := TShapeNode.Create;
Extrusion47 := TExtrusionNode.Create;
Extrusion47.CreaseAngle := 0.785;
Extrusion47.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion47.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape46.Geometry := Extrusion47;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape46.Appearance := Appearance48;
{ .AddChildren }
Group45.AddChildren([Shape46]);
Script50 := TScriptNode.Create;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'spine';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'MFVec3f';
X3DField51.Value := '0 -50 0 0 0 0 0 50 0';
{ .SetX3DField }
Script50.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'endA';
X3DField52.AccessType := 'inputOutput';
X3DField52.Type := 'SFVec3f';
X3DField52.Value := '0 0 0';
{ .AddX3DField }
Script50.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'endB';
X3DField53.AccessType := 'inputOutput';
X3DField53.Type := 'SFVec3f';
X3DField53.Value := '50 50 50';
{ .AddX3DField }
Script50.X3DField := X3DField53;
IS54 := TIS.Create;
connect55 := Tconnect.Create;
connect55.NodeField := 'endA';
connect55.ProtoField := 'set_positionA';
{ .AddConnect }
IS54.Connect := connect55;
connect56 := Tconnect.Create;
connect56.NodeField := 'endB';
connect56.ProtoField := 'set_positionB';
{ .AddConnect }
IS54.Connect := connect56;
{ .SetIS }
Script50.IS := IS54;

Script50.SetSourceCode('''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}''');
{ .AddChildren }
Group45.AddChildren([Script50]);
Group45.AddRoute(Script50.FdSpine, Extrusion47.EventSet_spine);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype44.Group := Group45;
{ .AddX3DPrototype }
X3DPrototype40.X3DPrototype := X3DPrototype44;
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype40;
Transform58 := TTransformNode.Create;
Transform58.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor59 := TPlaneSensorNode.Create;
PlaneSensor59.MinPosition := Vector2Single(-50,-50);
PlaneSensor59.MaxPosition := Vector2Single(50,50);
PlaneSensor59.Description := 'click on background to add nodes, click on nodes to add links';
{ .AddChildren }
Transform58.AddChildren([PlaneSensor59]);
X3DPrototype60 := TX3DPrototypeNode.Create;
X3DPrototype60.NameField := 'node';
SFVec3f61 := TSFVec3f.Create(node2, false, 'position', Vector3(0,0,0));
SFVec3f61.NameField := 'position';
SFVec3f61.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype60.SFVec3f := SFVec3f61;
{ .AddX3DPrototype }
Transform58.X3DPrototype := X3DPrototype60;
X3DPrototype62 := TX3DPrototypeNode.Create;
X3DPrototype62.NameField := 'node';
SFVec3f63 := TSFVec3f.Create(node2, false, 'position', Vector3(50,50,50));
SFVec3f63.NameField := 'position';
SFVec3f63.Value := '50 50 50';
{ .SetSFVec3f }
X3DPrototype62.SFVec3f := SFVec3f63;
{ .AddX3DPrototype }
Transform58.X3DPrototype := X3DPrototype62;
X3DPrototype64 := TX3DPrototypeNode.Create;
X3DPrototype64.NameField := 'node';
SFVec3f65 := TSFVec3f.Create(node2, false, 'position', Vector3(-50,-50,-50));
SFVec3f65.NameField := 'position';
SFVec3f65.Value := '-50 -50 -50';
{ .SetSFVec3f }
X3DPrototype64.SFVec3f := SFVec3f65;
{ .AddX3DPrototype }
Transform58.X3DPrototype := X3DPrototype64;
X3DPrototype66 := TX3DPrototypeNode.Create;
X3DPrototype66.NameField := 'node';
SFVec3f67 := TSFVec3f.Create(node2, false, 'position', Vector3(50,50,-50));
SFVec3f67.NameField := 'position';
SFVec3f67.Value := '50 50 -50';
{ .SetSFVec3f }
X3DPrototype66.SFVec3f := SFVec3f67;
{ .AddX3DPrototype }
Transform58.X3DPrototype := X3DPrototype66;
X3DPrototype68 := TX3DPrototypeNode.Create;
X3DPrototype68.NameField := 'cyl';
{ .AddX3DPrototype }
Transform58.X3DPrototype := X3DPrototype68;
X3DPrototype69 := TX3DPrototypeNode.Create;
X3DPrototype69.NameField := 'cyl';
{ .AddX3DPrototype }
Transform58.X3DPrototype := X3DPrototype69;
X3DPrototype70 := TX3DPrototypeNode.Create;
X3DPrototype70.NameField := 'cyl';
{ .AddX3DPrototype }
Transform58.X3DPrototype := X3DPrototype70;
{ .AddChildren }
Group10.AddChildren([Transform58]);
Script71 := TScriptNode.Create;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'counter';
X3DField72.AccessType := 'inputOutput';
X3DField72.Value := '0';
X3DField72.Type := 'SFInt32';
{ .SetX3DField }
Script71.X3DField := X3DField72;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'add_node';
X3DField73.AccessType := 'inputOnly';
X3DField73.Value := 'false';
X3DField73.Type := 'SFBool';
{ .AddX3DField }
Script71.X3DField := X3DField73;
{ <field accessType="outputOnly" name="node_changed" type="SFNode"/> }
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> }
{ <Transform USE="HoldsContent"/> }
{ </field> }

Script71.SetSourceCode('''ecmascript:\n"+
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
{ .AddChildren }
Group10.AddChildren([Script71]);
Group10.AddRoute(PlaneSensor59.FdIsactive, Script71.FdAdd_node);
{ .AddX3DRoute }
Group10.AddRoute(X3DPrototype60.FdPosition, X3DPrototype68.EventSet_positiona);
{ .AddX3DRoute }
Group10.AddRoute(X3DPrototype62.FdPosition, X3DPrototype68.EventSet_positionb);
{ .AddX3DRoute }
Group10.AddRoute(X3DPrototype60.FdPosition, X3DPrototype69.EventSet_positiona);
{ .AddX3DRoute }
Group10.AddRoute(X3DPrototype64.FdPosition, X3DPrototype69.EventSet_positionb);
{ .AddX3DRoute }
Group10.AddRoute(X3DPrototype60.FdPosition, X3DPrototype70.EventSet_positiona);
{ .AddX3DRoute }
Group10.AddRoute(X3DPrototype66.FdPosition, X3DPrototype70.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;

begin
end.
