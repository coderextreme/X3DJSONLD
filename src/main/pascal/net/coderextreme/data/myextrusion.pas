unit myextrusion;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createmyextrusion: TX3DRootNode;

implementation

uses CastleVectors;

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
SFTime17: TSFTime;
MFVec3f18: TMFVec3f;

procedure InitmyextrusionPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := 'December 13 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'November 9 2024';
{ METHOD .Meta }
X3D0.Meta['title'] := 'myextrusion.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
{ METHOD .Head }
Group9 := TGroupNode.Create;;
Group10 := TGroupNode.Create;;
Shape11 := TShapeNode.Create;;
Extrusion12 := TExtrusionNode.Create;;
Extrusion12.SetSpine([Vector3(-50,-50,0),Vector3(50,50,0)]);
Extrusion12.CreaseAngle := 0.785;
Extrusion12.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape11.Geometry := Extrusion12;
Appearance13 := TAppearanceNode.Create;;
Material14 := TMaterialNode.Create;;
Material14.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance13.Material := Material14;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape11.Appearance := Appearance13;
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Shape11);
TimeSensor15 := TTimeSensorNode.Create;;
TimeSensor15.Loop := True;
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(TimeSensor15);
Script16 := TScriptNode.Create;;
SFTime17 := TSFTime.CreateUndefined(Script16, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(SFTime17);
MFVec3f18 := TMFVec3f.CreateUndefined(Script16, false, 'spine');
end;

procedure InitmyextrusionPart1;
begin

MFVec3f18.Value := '-50 -50 0 50 50 0';
{ METHOD .Fd.AddCustomField }
Script16.AddCustomField(MFVec3f18);

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
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Script16);
{ Original "TourTime.EventCycleTime TO MoveCylinder.EventSet_cycle }
{ Sample TourTime.EventCycleTime TO MoveCylinder.EventSet_cycle}
Group10.AddRoute(TimeSensor15.EventCycleTime, Script16.EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "MoveCylinder.EventSpine_changed TO myextrusion.EventSet_spine }
{ Sample MoveCylinder.EventSpine_changed TO myextrusion.EventSet_spine}
Group10.AddRoute(Script16.EventSpine_changed, Extrusion12.EventSet_spine);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Group10);
{ METHOD .AddGroup }
X3D0.AddChildren([Group9]);
end;

function Createmyextrusion: TX3DRootNode;
begin
InitmyextrusionPart0;
InitmyextrusionPart1;
Result := X3D0;
end;

begin
end.
