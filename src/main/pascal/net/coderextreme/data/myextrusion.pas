unit myextrusion;

interface

uses X3DNodes;

function Createmyextrusion: TX3DRootNode;

implementation

uses CastleVectors;

function Createmyextrusion: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group9: TGroupNode;
Group10: TGroupNode;
Shape11: TShapeNode;
Extrusion12: TExtrusionNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
TimeSensor15: TTimeSensorNode;
Script16: TScriptNode;
X3DField17: TX3DField;
X3DField18: TX3DField;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'November 9 2024';
X3D0.Meta['title'] := 'myextrusion.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group9 := TGroupNode.Create;
Group10 := TGroupNode.Create;
Shape11 := TShapeNode.Create;
Extrusion12 := TExtrusionNode.Create;
Extrusion12.SetSpine([Vector3(-50,-50,0),Vector3(50,50,0)]);
Extrusion12.CreaseAngle := 0.785;
Extrusion12.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
{ .SetGeometry }
Shape11.Geometry := Extrusion12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape11.Appearance := Appearance13;
{ .AddChildren }
Group10.AddChildren([Shape11]);
TimeSensor15 := TTimeSensorNode.Create;
TimeSensor15.Loop := True;
{ .AddChildren }
Group10.AddChildren([TimeSensor15]);
Script16 := TScriptNode.Create;
X3DField17 := TX3DField.Create;
X3DField17.NameField := 'set_cycle';
X3DField17.AccessType := 'inputOnly';
X3DField17.Type := 'SFTime';
{ .SetX3DField }
Script16.X3DField := X3DField17;
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'spine';
X3DField18.AccessType := 'inputOutput';
X3DField18.Type := 'MFVec3f';
X3DField18.Value := '-50 -50 0 50 50 0';
{ .AddX3DField }
Script16.X3DField := X3DField18;

Script16.SetSourceCode('''ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"                        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = endA;\n"+
"			tmpspine[1] = endB;\n"+
"                        spine = tmpspine;\n"+
"                }''');
{ .AddChildren }
Group10.AddChildren([Script16]);
Group10.AddRoute(TimeSensor15.FdCycletime, Script16.EventSet_cycle);
{ .AddX3DRoute }
Group10.AddRoute(Script16.EventSpine_changed, Extrusion12.EventSet_spine);
{ .AddX3DRoute }
{ .AddChildren }
Group9.AddChildren([Group10]);
{ .AddGroup }
X3D0.AddChildren([Group9]);
Result := X3D0;
end;

begin
end.
