unit flower3;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createflower3: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
DirectionalLight9: TDirectionalLightNode;
Background10: TBackgroundNode;
Viewpoint11: TViewpointNode;
Transform12: TTransformNode;
Shape13: TShapeNode;
Appearance14: TAppearanceNode;
Material15: TMaterialNode;
IndexedFaceSet16: TIndexedFaceSetNode;
Coordinate17: TCoordinateNode;
Script18: TScriptNode;
SFFloat19: TSFFloat;
MFVec3f20: TMFVec3f;
MFInt3221: TMFInt32;
TimeSensor22: TTimeSensorNode;

procedure Initflower3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'flower3.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a flower';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;;
NavigationInfo8 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
DirectionalLight9 := TDirectionalLightNode.Create;;
DirectionalLight9.Direction := Vector3(0,-0.8,-0.2);
DirectionalLight9.Intensity := 0.5;
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(DirectionalLight9);
Background10 := TBackgroundNode.Create;;
Background10.SetSkyColor([Vector3(1,1,1)]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background10);
Viewpoint11 := TViewpointNode.Create;;
Viewpoint11.Description := 'One mathematical orbital';
Viewpoint11.Position := Vector3(0,0,50);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint11);
Transform12 := TTransformNode.Create;;
Transform12.Translation := Vector3(8,0,0);
Shape13 := TShapeNode.Create;;
Appearance14 := TAppearanceNode.Create;;
Material15 := TMaterialNode.Create;;
Material15.DiffuseColor := Vector3(0,0.5,1);
Material15.SpecularColor := Vector3(0,0.5,1);
{ METHOD .SetMaterial }
Appearance14.Material := Material15;
end;

procedure Initflower3Part1;
begin

{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape13.Appearance := Appearance14;
IndexedFaceSet16 := TIndexedFaceSetNode.Create;;
IndexedFaceSet16.Convex := False;
Coordinate17 := TCoordinateNode.Create;;
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet16.Coord := Coordinate17;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape13.Geometry := IndexedFaceSet16;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape13);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform12);
Script18 := TScriptNode.Create;;
SFFloat19 := TSFFloat.CreateUndefined(Script18, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script18.AddCustomField(SFFloat19);
MFVec3f20 := TMFVec3f.CreateUndefined(Script18, false, 'coordinates');
{ METHOD .Fd.AddCustomField }
Script18.AddCustomField(MFVec3f20);
MFInt3221 := TMFInt32.CreateUndefined(Script18, false, 'coordIndexes');
{ METHOD .Fd.AddCustomField }
Script18.AddCustomField(MFInt3221);
{ <field accessType="inputOutput" name="e" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="f" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="g" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="h" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="t" type="SFFloat" value="0"/> }
{ <field accessType="inputOutput" name="p" type="SFFloat" value="0"/> }
{ <field accessType="initializeOnly" name="resolution" type="SFInt32" value="100"/> }

Script18.SetSourceCode('''ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 100;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = new MFInt32();\n"+
"     var arrIndex = 0;\n"+
"     for (var i = 0; i < resolution-1; i++) {\n"+
"     	for (var j = 0; j < resolution-1; j++) {\n"+
"	     localci[arrIndex++] = i*resolution+j;\n"+
"	     localci[arrIndex++] = i*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j;\n"+
"	     localci[arrIndex++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     var arrIndex = 0;\n"+
"     for (var  i = 0; i < resolution; i++) {\n"+
"     	for (var  j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[arrIndex++] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	generateCoordinates(resolution);\n"+
"}''');
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Script18);
TimeSensor22 := TTimeSensorNode.Create;;
TimeSensor22.CycleInterval := 16;
TimeSensor22.Loop := True;
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(TimeSensor22);
{ Original "OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex }
{ Sample OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex}
Group7.AddRoute(OrbitScript.undefined, IndexedFaceSet16.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.point}
Group7.AddRoute(OrbitScript.undefined, Coordinate17.point);
{ METHOD .AddX3DROUTE }
{ Original "Clock.EventFraction_changed TO OrbitScript.EventSet_fraction }
{ Sample Clock.EventFraction_changed TO OrbitScript.EventSet_fraction}
Group7.AddRoute(TimeSensor22.EventFraction_changed, Script18.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createflower3: TX3DRootNode;
begin
Initflower3Part0;
Initflower3Part1;
Result := X3D0;
end;

begin
end.
