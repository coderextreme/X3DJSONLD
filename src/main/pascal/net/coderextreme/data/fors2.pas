unit fors2;

interface

uses X3DNodes;

function Createfors2: TX3DRootNode;

implementation

uses CastleVectors;

function Createfors2: TX3DRootNode;
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
PositionInterpolator23: TPositionInterpolatorNode;
Script24: TScriptNode;
X3DField25: TX3DField;
X3DField26: TX3DField;
X3DField27: TX3DField;
X3DField28: TX3DField;
TimeSensor29: TTimeSensorNode;
X3DPrototype34: TX3DPrototype;
X3DInterfaceDeclaration35: TX3DInterfaceDeclaration;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DPrototype38: TX3DPrototype;
Group39: TGroupNode;
Shape40: TShapeNode;
Extrusion41: TExtrusionNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Script44: TScriptNode;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
IS48: TIS;
connect49: Tconnect;
connect50: Tconnect;
Transform52: TTransformNode;
X3DPrototype53: TX3DPrototypeNode;
SFVec3f54: TSFVec3f;
X3DPrototype55: TX3DPrototypeNode;
SFVec3f56: TSFVec3f;
X3DPrototype57: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'fors2.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d';
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
{ comment before Sphere }
{ comment after Sphere }
{ comment after Appearance }
Sphere20 := TSphereNode.Create;
{ .SetGeometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
{ comment before Material }
{ comment after Material }
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape19.Appearance := Appearance21;
{ .AddChild }
Transform16.AddChildren([Shape19]);
{ .AddChildren }
Group15.AddChildren([Transform16]);
PositionInterpolator23 := TPositionInterpolatorNode.Create;
PositionInterpolator23.SetKey([0,1]);
PositionInterpolator23.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Group15.AddChildren([PositionInterpolator23]);
Script24 := TScriptNode.Create;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'translation';
X3DField25.AccessType := 'inputOutput';
X3DField25.Type := 'SFVec3f';
X3DField25.Value := '50 50 0';
{ .SetX3DField }
Script24.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'old';
X3DField26.AccessType := 'inputOutput';
X3DField26.Type := 'SFVec3f';
X3DField26.Value := '0 0 0';
{ .AddX3DField }
Script24.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'set_cycle';
X3DField27.AccessType := 'inputOnly';
X3DField27.Type := 'SFTime';
{ .AddX3DField }
Script24.X3DField := X3DField27;
X3DField28 := TX3DField.Create;
X3DField28.NameField := 'keyValue';
X3DField28.AccessType := 'outputOnly';
X3DField28.Type := 'MFVec3f';
{ .AddX3DField }
Script24.X3DField := X3DField28;

Script24.SetSourceCode('''ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}''');
{ .AddChildren }
Group15.AddChildren([Script24]);
TimeSensor29 := TTimeSensorNode.Create;
TimeSensor29.CycleInterval := 3;
TimeSensor29.Loop := True;
{ .AddChildren }
Group15.AddChildren([TimeSensor29]);
Group15.AddRoute(TimeSensor29.FdCycletime, Script24.EventSet_cycle);
{ .AddX3DRoute }
Group15.AddRoute(TimeSensor29.EventFraction_changed, PositionInterpolator23.EventSet_fraction);
{ .AddX3DRoute }
Group15.AddRoute(Script24.FdKeyvalue, PositionInterpolator23.FdKeyvalue);
{ .AddX3DRoute }
Group15.AddRoute(PositionInterpolator23.EventValue_changed, Transform16.FdTranslation);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype14.Group := Group15;
{ .AddX3DPrototype }
X3DPrototype11.X3DPrototype := X3DPrototype14;
{ .SetX3DPrototype }
Group10.X3DPrototype := X3DPrototype11;
X3DPrototype34 := TX3DPrototype.Create;
X3DPrototype34.NameField := 'cyl';
X3DInterfaceDeclaration35 := TX3DInterfaceDeclaration.Create(nil);
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'positionA';
X3DField36.AccessType := 'inputOutput';
X3DField36.Type := 'SFVec3f';
{ .SetX3DField }
X3DInterfaceDeclaration35.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'positionB';
X3DField37.AccessType := 'inputOutput';
X3DField37.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration35.X3DField := X3DField37;
{ .SetX3DInterfaceDeclaration }
X3DPrototype34.X3DInterfaceDeclaration := X3DInterfaceDeclaration35;
X3DPrototype38 := TX3DPrototype.Create;
Group39 := TGroupNode.Create;
Shape40 := TShapeNode.Create;
Extrusion41 := TExtrusionNode.Create;
Extrusion41.CreaseAngle := 0.785;
Extrusion41.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
Extrusion41.SetSpine([Vector3(0,-50,0),Vector3(0,0,0),Vector3(0,50,0)]);
{ .SetGeometry }
Shape40.Geometry := Extrusion41;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance42.Material := Material43;
{ .SetAppearance }
Shape40.Appearance := Appearance42;
{ .AddChildren }
Group39.AddChildren([Shape40]);
Script44 := TScriptNode.Create;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'spine';
X3DField45.AccessType := 'inputOutput';
X3DField45.Type := 'MFVec3f';
X3DField45.Value := '0 -50 0 0 0 0 0 50 0';
{ .SetX3DField }
Script44.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'endA';
X3DField46.AccessType := 'inputOutput';
X3DField46.Type := 'SFVec3f';
X3DField46.Value := '0 0 0';
{ .AddX3DField }
Script44.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'endB';
X3DField47.AccessType := 'inputOutput';
X3DField47.Type := 'SFVec3f';
X3DField47.Value := '50 50 50';
{ .AddX3DField }
Script44.X3DField := X3DField47;
IS48 := TIS.Create;
connect49 := Tconnect.Create;
connect49.NodeField := 'endA';
connect49.ProtoField := 'positionA';
{ .AddConnect }
IS48.Connect := connect49;
connect50 := Tconnect.Create;
connect50.NodeField := 'endB';
connect50.ProtoField := 'positionB';
{ .AddConnect }
IS48.Connect := connect50;
{ .SetIS }
Script44.IS := IS48;

Script44.SetSourceCode('''ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}''');
{ .AddChildren }
Group39.AddChildren([Script44]);
Group39.AddRoute(Script44.FdSpine, Extrusion41.EventSet_spine);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype38.Group := Group39;
{ .AddX3DPrototype }
X3DPrototype34.X3DPrototype := X3DPrototype38;
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype34;
Transform52 := TTransformNode.Create;
Transform52.Scale := Vector3(0.1,0.1,0.1);
X3DPrototype53 := TX3DPrototypeNode.Create;
X3DPrototype53.NameField := 'node';
SFVec3f54 := TSFVec3f.Create(node2, false, 'position', Vector3(-50,-50,-50));
SFVec3f54.NameField := 'position';
SFVec3f54.Value := '-50 -50 -50';
{ .SetSFVec3f }
X3DPrototype53.SFVec3f := SFVec3f54;
{ .SetX3DPrototype }
Transform52.X3DPrototype := X3DPrototype53;
X3DPrototype55 := TX3DPrototypeNode.Create;
X3DPrototype55.NameField := 'node';
SFVec3f56 := TSFVec3f.Create(node2, false, 'position', Vector3(50,50,50));
SFVec3f56.NameField := 'position';
SFVec3f56.Value := '50 50 50';
{ .SetSFVec3f }
X3DPrototype55.SFVec3f := SFVec3f56;
{ .AddX3DPrototype }
Transform52.X3DPrototype := X3DPrototype55;
X3DPrototype57 := TX3DPrototypeNode.Create;
X3DPrototype57.NameField := 'cyl';
{ .AddX3DPrototype }
Transform52.X3DPrototype := X3DPrototype57;
{ .AddChildren }
Group10.AddChildren([Transform52]);
Group10.AddRoute(X3DPrototype53.FdPosition, X3DPrototype57.FdPositiona);
{ .AddX3DRoute }
Group10.AddRoute(X3DPrototype55.FdPosition, X3DPrototype57.FdPositionb);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;

begin
end.
