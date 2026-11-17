unit forcenode;

interface

uses X3DNodes;

function Createforcenode: TX3DRootNode;

implementation

uses CastleVectors;

function Createforcenode: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group9: TGroupNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
X3DField12: TX3DField;
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
X3DField30: TX3DField;
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
TimeSensor34: TTimeSensorNode;
X3DPrototype39: TX3DPrototype;
X3DInterfaceDeclaration40: TX3DInterfaceDeclaration;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DPrototype43: TX3DPrototype;
Group44: TGroupNode;
Shape45: TShapeNode;
Extrusion46: TExtrusionNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Script49: TScriptNode;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
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
X3DField71: TX3DField;
X3DField72: TX3DField;
X3DField73: TX3DField;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'forcenode.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group9 := TGroupNode.Create;
X3DPrototype10 := TX3DPrototype.Create;
X3DPrototype10.NameField := 'node';
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
X3DField12 := TX3DField.Create;
X3DField12.NameField := 'position';
X3DField12.AccessType := 'inputOutput';
X3DField12.Type := 'SFVec3f';
X3DField12.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField12;
{ .SetX3DInterfaceDeclaration }
X3DPrototype10.X3DInterfaceDeclaration := X3DInterfaceDeclaration11;
X3DPrototype13 := TX3DPrototype.Create;
Group14 := TGroupNode.Create;
Transform15 := TTransformNode.Create;
IS16 := TIS.Create;
connect17 := Tconnect.Create;
connect17.NodeField := 'translation';
connect17.ProtoField := 'position';
{ .AddConnect }
IS16.Connect := connect17;
{ .SetIS }
Transform15.IS := IS16;
Shape18 := TShapeNode.Create;
Sphere19 := TSphereNode.Create;
{ .SetGeometry }
Shape18.Geometry := Sphere19;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance20.Material := Material21;
{ .SetAppearance }
Shape18.Appearance := Appearance20;
{ .AddChild }
Transform15.AddChildren([Shape18]);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(1,0,1);
Shape23 := TShapeNode.Create;
Text24 := TTextNode.Create;
Text24.SetText(['Node']);
FontStyle25 := TFontStyleNode.Create;
FontStyle25.Justify := fjMiddle;
FontStyle25.JustifyMinor := fjMiddle;
FontStyle25.Size := 5;
{ .SetFontStyle }
Text24.FontStyle := FontStyle25;
{ .SetGeometry }
Shape23.Geometry := Text24;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance26.Material := Material27;
{ .SetAppearance }
Shape23.Appearance := Appearance26;
{ .AddChild }
Transform22.AddChildren([Shape23]);
{ .AddChildren }
Transform15.AddChildren([Transform22]);
{ .AddChildren }
Group14.AddChildren([Transform15]);
PositionInterpolator28 := TPositionInterpolatorNode.Create;
PositionInterpolator28.SetKey([0,1]);
PositionInterpolator28.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group14.AddChildren([PositionInterpolator28]);
Script29 := TScriptNode.Create;
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'translation';
X3DField30.AccessType := 'inputOutput';
X3DField30.Type := 'SFVec3f';
X3DField30.Value := '50 50 0';
{ .SetX3DField }
Script29.X3DField := X3DField30;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'old';
X3DField31.AccessType := 'inputOutput';
X3DField31.Type := 'SFVec3f';
X3DField31.Value := '0 0 0';
{ .AddX3DField }
Script29.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'set_cycle';
X3DField32.AccessType := 'inputOnly';
X3DField32.Type := 'SFTime';
{ .AddX3DField }
Script29.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'keyValue';
X3DField33.AccessType := 'outputOnly';
X3DField33.Type := 'MFVec3f';
{ .AddX3DField }
Script29.X3DField := X3DField33;

Script29.SetSourceCode('''ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			    			keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}''');
{ .AddChildren }
Group14.AddChildren([Script29]);
TimeSensor34 := TTimeSensorNode.Create;
TimeSensor34.CycleInterval := 3;
TimeSensor34.Loop := True;
{ .AddChildren }
Group14.AddChildren([TimeSensor34]);
Group14.AddRoute(TimeSensor34.FdCycletime, Script29.EventSet_cycle);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor34.EventFraction_changed, PositionInterpolator28.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(Script29.FdKeyvalue, PositionInterpolator28.FdKeyvalue);
{ .AddX3DRoute }
Group14.AddRoute(PositionInterpolator28.EventValue_changed, Transform15.FdTranslation);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype13.Group := Group14;
{ .AddX3DPrototype }
X3DPrototype10.X3DPrototype := X3DPrototype13;
{ .SetX3DPrototype }
Group9.X3DPrototype := X3DPrototype10;
X3DPrototype39 := TX3DPrototype.Create;
X3DPrototype39.NameField := 'cyl';
X3DInterfaceDeclaration40 := TX3DInterfaceDeclaration.Create(nil);
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'set_positionA';
X3DField41.AccessType := 'inputOutput';
X3DField41.Type := 'SFVec3f';
{ .SetX3DField }
X3DInterfaceDeclaration40.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'set_positionB';
X3DField42.AccessType := 'inputOutput';
X3DField42.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration40.X3DField := X3DField42;
{ .SetX3DInterfaceDeclaration }
X3DPrototype39.X3DInterfaceDeclaration := X3DInterfaceDeclaration40;
X3DPrototype43 := TX3DPrototype.Create;
Group44 := TGroupNode.Create;
Shape45 := TShapeNode.Create;
Extrusion46 := TExtrusionNode.Create;
Extrusion46.CreaseAngle := 0.785;
Extrusion46.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion46.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape45.Geometry := Extrusion46;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance47.Material := Material48;
{ .SetAppearance }
Shape45.Appearance := Appearance47;
{ .AddChildren }
Group44.AddChildren([Shape45]);
Script49 := TScriptNode.Create;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'spine';
X3DField50.AccessType := 'inputOutput';
X3DField50.Type := 'MFVec3f';
X3DField50.Value := '0 -50 0 0 0 0 0 50 0';
{ .SetX3DField }
Script49.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'endA';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'SFVec3f';
{ .AddX3DField }
Script49.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'endB';
X3DField52.AccessType := 'inputOutput';
X3DField52.Type := 'SFVec3f';
{ .AddX3DField }
Script49.X3DField := X3DField52;
IS53 := TIS.Create;
connect54 := Tconnect.Create;
connect54.NodeField := 'endA';
connect54.ProtoField := 'set_positionA';
{ .AddConnect }
IS53.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'endB';
connect55.ProtoField := 'set_positionB';
{ .AddConnect }
IS53.Connect := connect55;
{ .SetIS }
Script49.IS := IS53;

Script49.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }''');
{ .AddChildren }
Group44.AddChildren([Script49]);
Group44.AddRoute(Script49.FdSpine, Extrusion46.EventSet_spine);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype43.Group := Group44;
{ .AddX3DPrototype }
X3DPrototype39.X3DPrototype := X3DPrototype43;
{ .AddX3DPrototype }
Group9.X3DPrototype := X3DPrototype39;
Transform57 := TTransformNode.Create;
Transform57.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor58 := TPlaneSensorNode.Create;
PlaneSensor58.MinPosition := Vector2Single(-50,-50);
PlaneSensor58.MaxPosition := Vector2Single(50,50);
PlaneSensor58.Description := 'click on background to add nodes, click on nodes to add links';
{ .AddChildren }
Transform57.AddChildren([PlaneSensor58]);
X3DPrototype59 := TX3DPrototypeNode.Create;
X3DPrototype59.NameField := 'node';
SFVec3f60 := TSFVec3f.Create(node2, false, 'position', Vector3(0,0,0));
SFVec3f60.NameField := 'position';
SFVec3f60.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype59.SFVec3f := SFVec3f60;
{ .AddX3DPrototype }
Transform57.X3DPrototype := X3DPrototype59;
X3DPrototype61 := TX3DPrototypeNode.Create;
X3DPrototype61.NameField := 'node';
SFVec3f62 := TSFVec3f.Create(node2, false, 'position', Vector3(50,50,50));
SFVec3f62.NameField := 'position';
SFVec3f62.Value := '50 50 50';
{ .SetSFVec3f }
X3DPrototype61.SFVec3f := SFVec3f62;
{ .AddX3DPrototype }
Transform57.X3DPrototype := X3DPrototype61;
X3DPrototype63 := TX3DPrototypeNode.Create;
X3DPrototype63.NameField := 'node';
SFVec3f64 := TSFVec3f.Create(node2, false, 'position', Vector3(-50,-50,-50));
SFVec3f64.NameField := 'position';
SFVec3f64.Value := '-50 -50 -50';
{ .SetSFVec3f }
X3DPrototype63.SFVec3f := SFVec3f64;
{ .AddX3DPrototype }
Transform57.X3DPrototype := X3DPrototype63;
X3DPrototype65 := TX3DPrototypeNode.Create;
X3DPrototype65.NameField := 'node';
SFVec3f66 := TSFVec3f.Create(node2, false, 'position', Vector3(50,50,-50));
SFVec3f66.NameField := 'position';
SFVec3f66.Value := '50 50 -50';
{ .SetSFVec3f }
X3DPrototype65.SFVec3f := SFVec3f66;
{ .AddX3DPrototype }
Transform57.X3DPrototype := X3DPrototype65;
X3DPrototype67 := TX3DPrototypeNode.Create;
X3DPrototype67.NameField := 'cyl';
{ .AddX3DPrototype }
Transform57.X3DPrototype := X3DPrototype67;
X3DPrototype68 := TX3DPrototypeNode.Create;
X3DPrototype68.NameField := 'cyl';
{ .AddX3DPrototype }
Transform57.X3DPrototype := X3DPrototype68;
X3DPrototype69 := TX3DPrototypeNode.Create;
X3DPrototype69.NameField := 'cyl';
{ .AddX3DPrototype }
Transform57.X3DPrototype := X3DPrototype69;
{ .AddChildren }
Group9.AddChildren([Transform57]);
Script70 := TScriptNode.Create;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'counter';
X3DField71.AccessType := 'inputOutput';
X3DField71.Value := '0';
X3DField71.Type := 'SFInt32';
{ .SetX3DField }
Script70.X3DField := X3DField71;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'node_changed';
X3DField72.AccessType := 'outputOnly';
X3DField72.Type := 'SFNode';
{ .AddX3DField }
Script70.X3DField := X3DField72;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'add_node';
X3DField73.AccessType := 'inputOnly';
X3DField73.Value := 'false';
X3DField73.Type := 'SFBool';
{ .AddX3DField }
Script70.X3DField := X3DField73;
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
{ .AddChildren }
Group9.AddChildren([Script70]);
Group9.AddRoute(PlaneSensor58.FdIsactive, Script70.FdAdd_node);
{ .AddX3DRoute }
Group9.AddRoute(X3DPrototype59.FdPosition, X3DPrototype67.EventSet_positiona);
{ .AddX3DRoute }
Group9.AddRoute(X3DPrototype61.FdPosition, X3DPrototype67.EventSet_positionb);
{ .AddX3DRoute }
Group9.AddRoute(X3DPrototype59.FdPosition, X3DPrototype68.EventSet_positiona);
{ .AddX3DRoute }
Group9.AddRoute(X3DPrototype63.FdPosition, X3DPrototype68.EventSet_positionb);
{ .AddX3DRoute }
Group9.AddRoute(X3DPrototype59.FdPosition, X3DPrototype69.EventSet_positiona);
{ .AddX3DRoute }
Group9.AddRoute(X3DPrototype65.FdPosition, X3DPrototype69.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group9]);
Result := X3D0;
end;

begin
end.
