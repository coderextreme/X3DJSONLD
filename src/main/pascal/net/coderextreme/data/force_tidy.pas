unit force_tidy;

interface

uses X3DNodes;

function Createforce_tidy: TX3DRootNode;

implementation

uses CastleVectors;

function Createforce_tidy: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
X3DPrototype12: TX3DPrototype;
X3DInterfaceDeclaration13: TX3DInterfaceDeclaration;
X3DField14: TX3DField;
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
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
TimeSensor36: TTimeSensorNode;
X3DPrototype41: TX3DPrototype;
X3DInterfaceDeclaration42: TX3DInterfaceDeclaration;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DPrototype45: TX3DPrototype;
Group46: TGroupNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Extrusion50: TExtrusionNode;
Script51: TScriptNode;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
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
X3DField73: TX3DField;
X3DField74: TX3DField;
X3DField75: TX3DField;
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
X3D0.Meta['generator'] := 'x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy';
Group11 := TGroupNode.Create;
X3DPrototype12 := TX3DPrototype.Create;
X3DPrototype12.NameField := 'node';
X3DInterfaceDeclaration13 := TX3DInterfaceDeclaration.Create(nil);
X3DField14 := TX3DField.Create;
X3DField14.NameField := 'position';
X3DField14.AccessType := 'inputOutput';
X3DField14.Type := 'SFVec3f';
{ .SetX3DField }
X3DInterfaceDeclaration13.X3DField := X3DField14;
{ .SetX3DInterfaceDeclaration }
X3DPrototype12.X3DInterfaceDeclaration := X3DInterfaceDeclaration13;
X3DPrototype15 := TX3DPrototype.Create;
Group16 := TGroupNode.Create;
Transform17 := TTransformNode.Create;
IS18 := TIS.Create;
connect19 := Tconnect.Create;
connect19.NodeField := 'translation';
connect19.ProtoField := 'position';
{ .AddConnect }
IS18.Connect := connect19;
{ .SetIS }
Transform17.IS := IS18;
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform17.AddChildren([Shape20]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(1,0,0);
Shape25 := TShapeNode.Create;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance26.Material := Material27;
{ .SetAppearance }
Shape25.Appearance := Appearance26;
Text28 := TTextNode.Create;
Text28.SetText(['Node']);
FontStyle29 := TFontStyleNode.Create;
FontStyle29.Size := 5;
FontStyle29.Justify := fjMiddle;
FontStyle29.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text28.FontStyle := FontStyle29;
{ .SetGeometry }
Shape25.Geometry := Text28;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Transform17.AddChildren([Transform24]);
{ .AddChildren }
Group16.AddChildren([Transform17]);
PositionInterpolator30 := TPositionInterpolatorNode.Create;
PositionInterpolator30.SetKey([0,1]);
PositionInterpolator30.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group16.AddChildren([PositionInterpolator30]);
Script31 := TScriptNode.Create;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'translation';
X3DField32.AccessType := 'inputOutput';
X3DField32.Type := 'SFVec3f';
X3DField32.Value := '50 50 0';
{ .SetX3DField }
Script31.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'old';
X3DField33.AccessType := 'inputOutput';
X3DField33.Type := 'SFVec3f';
{ .AddX3DField }
Script31.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'set_cycle';
X3DField34.AccessType := 'inputOnly';
X3DField34.Type := 'SFTime';
{ .AddX3DField }
Script31.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'keyValue';
X3DField35.AccessType := 'outputOnly';
X3DField35.Type := 'MFVec3f';
{ .AddX3DField }
Script31.X3DField := X3DField35;

Script31.SetSourceCode('''ecmascript:\n"+
"		function set_cycle(value) {\n"+
"			old = translation;\n"+
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			keyValue = new MFVec3f(old, translation);\n"+
"		}''');
{ .AddChildren }
Group16.AddChildren([Script31]);
TimeSensor36 := TTimeSensorNode.Create;
TimeSensor36.CycleInterval := 3;
TimeSensor36.Loop := True;
{ .AddChildren }
Group16.AddChildren([TimeSensor36]);
Group16.AddRoute(TimeSensor36.FdCycletime, Script31.EventSet_cycle);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor36.EventFraction_changed, PositionInterpolator30.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(Script31.FdKeyvalue, PositionInterpolator30.EventSet_keyvalue);
{ .AddX3DRoute }
Group16.AddRoute(PositionInterpolator30.EventValue_changed, Transform17.FdTranslation);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype15.Group := Group16;
{ .AddX3DPrototype }
X3DPrototype12.X3DPrototype := X3DPrototype15;
{ .SetX3DPrototype }
Group11.X3DPrototype := X3DPrototype12;
X3DPrototype41 := TX3DPrototype.Create;
X3DPrototype41.NameField := 'cyl';
X3DInterfaceDeclaration42 := TX3DInterfaceDeclaration.Create(nil);
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'set_positionA';
X3DField43.AccessType := 'inputOutput';
X3DField43.Type := 'SFVec3f';
{ .SetX3DField }
X3DInterfaceDeclaration42.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'set_positionB';
X3DField44.AccessType := 'inputOutput';
X3DField44.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration42.X3DField := X3DField44;
{ .SetX3DInterfaceDeclaration }
X3DPrototype41.X3DInterfaceDeclaration := X3DInterfaceDeclaration42;
X3DPrototype45 := TX3DPrototype.Create;
Group46 := TGroupNode.Create;
Shape47 := TShapeNode.Create;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape47.Appearance := Appearance48;
Extrusion50 := TExtrusionNode.Create;
Extrusion50.CreaseAngle := 0.785;
Extrusion50.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion50.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape47.Geometry := Extrusion50;
{ .AddChildren }
Group46.AddChildren([Shape47]);
Script51 := TScriptNode.Create;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'spine';
X3DField52.AccessType := 'inputOutput';
X3DField52.Type := 'MFVec3f';
X3DField52.Value := '0 -50 0 0 0 0 0 50 0';
{ .SetX3DField }
Script51.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'endA';
X3DField53.AccessType := 'inputOutput';
X3DField53.Type := 'SFVec3f';
{ .AddX3DField }
Script51.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'endB';
X3DField54.AccessType := 'inputOutput';
X3DField54.Type := 'SFVec3f';
{ .AddX3DField }
Script51.X3DField := X3DField54;
IS55 := TIS.Create;
connect56 := Tconnect.Create;
connect56.NodeField := 'endA';
connect56.ProtoField := 'set_positionA';
{ .AddConnect }
IS55.Connect := connect56;
connect57 := Tconnect.Create;
connect57.NodeField := 'endB';
connect57.ProtoField := 'set_positionB';
{ .AddConnect }
IS55.Connect := connect57;
{ .SetIS }
Script51.IS := IS55;

Script51.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }''');
{ .AddChildren }
Group46.AddChildren([Script51]);
Group46.AddRoute(Script51.EventSpine_changed, Extrusion50.EventSet_spine);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype45.Group := Group46;
{ .AddX3DPrototype }
X3DPrototype41.X3DPrototype := X3DPrototype45;
{ .AddX3DPrototype }
Group11.X3DPrototype := X3DPrototype41;
Transform59 := TTransformNode.Create;
Transform59.Scale := Vector3(0.1,0.1,0.1);
PlaneSensor60 := TPlaneSensorNode.Create;
PlaneSensor60.Description := 'click on background to add nodes, click on nodes to add links';
PlaneSensor60.MinPosition := Vector2Single(-50,-50);
PlaneSensor60.MaxPosition := Vector2Single(50,50);
{ .AddChildren }
Transform59.AddChildren([PlaneSensor60]);
X3DPrototype61 := TX3DPrototypeNode.Create;
X3DPrototype61.NameField := 'node';
SFVec3f62 := TSFVec3f.Create(node2, false, 'position', Vector3(0,1.388333,0));
SFVec3f62.NameField := 'position';
SFVec3f62.Value := '0 1.388333 0';
{ .SetSFVec3f }
X3DPrototype61.SFVec3f := SFVec3f62;
{ .AddX3DPrototype }
Transform59.X3DPrototype := X3DPrototype61;
X3DPrototype63 := TX3DPrototypeNode.Create;
X3DPrototype63.NameField := 'node';
SFVec3f64 := TSFVec3f.Create(node2, false, 'position', Vector3(0,1.388333,0));
SFVec3f64.NameField := 'position';
SFVec3f64.Value := '0 1.388333 0';
{ .SetSFVec3f }
X3DPrototype63.SFVec3f := SFVec3f64;
{ .AddX3DPrototype }
Transform59.X3DPrototype := X3DPrototype63;
X3DPrototype65 := TX3DPrototypeNode.Create;
X3DPrototype65.NameField := 'node';
SFVec3f66 := TSFVec3f.Create(node2, false, 'position', Vector3(0,1.388333,0));
SFVec3f66.NameField := 'position';
SFVec3f66.Value := '0 1.388333 0';
{ .SetSFVec3f }
X3DPrototype65.SFVec3f := SFVec3f66;
{ .AddX3DPrototype }
Transform59.X3DPrototype := X3DPrototype65;
X3DPrototype67 := TX3DPrototypeNode.Create;
X3DPrototype67.NameField := 'node';
SFVec3f68 := TSFVec3f.Create(node2, false, 'position', Vector3(0,1.388333,0));
SFVec3f68.NameField := 'position';
SFVec3f68.Value := '0 1.388333 0';
{ .SetSFVec3f }
X3DPrototype67.SFVec3f := SFVec3f68;
{ .AddX3DPrototype }
Transform59.X3DPrototype := X3DPrototype67;
X3DPrototype69 := TX3DPrototypeNode.Create;
X3DPrototype69.NameField := 'cyl';
{ .AddX3DPrototype }
Transform59.X3DPrototype := X3DPrototype69;
X3DPrototype70 := TX3DPrototypeNode.Create;
X3DPrototype70.NameField := 'cyl';
{ .AddX3DPrototype }
Transform59.X3DPrototype := X3DPrototype70;
X3DPrototype71 := TX3DPrototypeNode.Create;
X3DPrototype71.NameField := 'cyl';
{ .AddX3DPrototype }
Transform59.X3DPrototype := X3DPrototype71;
{ .AddChildren }
Group11.AddChildren([Transform59]);
Script72 := TScriptNode.Create;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'counter';
X3DField73.AccessType := 'inputOutput';
X3DField73.Type := 'SFInt32';
{ .SetX3DField }
Script72.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'node_changed';
X3DField74.AccessType := 'outputOnly';
X3DField74.Type := 'SFNode';
{ .AddX3DField }
Script72.X3DField := X3DField74;
X3DField75 := TX3DField.Create;
X3DField75.NameField := 'add_node';
X3DField75.AccessType := 'inputOnly';
X3DField75.Type := 'SFBool';
{ .AddX3DField }
Script72.X3DField := X3DField75;

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
{ .AddChildren }
Group11.AddChildren([Script72]);
Group11.AddRoute(PlaneSensor60.FdIsactive, Script72.FdAdd_node);
{ .AddX3DRoute }
Group11.AddRoute(X3DPrototype61.EventPosition_changed, X3DPrototype69.EventSet_positiona);
{ .AddX3DRoute }
Group11.AddRoute(X3DPrototype63.EventPosition_changed, X3DPrototype69.EventSet_positionb);
{ .AddX3DRoute }
Group11.AddRoute(X3DPrototype61.EventPosition_changed, X3DPrototype70.EventSet_positiona);
{ .AddX3DRoute }
Group11.AddRoute(X3DPrototype65.EventPosition_changed, X3DPrototype70.EventSet_positionb);
{ .AddX3DRoute }
Group11.AddRoute(X3DPrototype61.EventPosition_changed, X3DPrototype71.EventSet_positiona);
{ .AddX3DRoute }
Group11.AddRoute(X3DPrototype67.EventPosition_changed, X3DPrototype71.EventSet_positionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;

begin
end.
