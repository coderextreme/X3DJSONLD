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
  FieldVal19: TX3DEvent;
  FieldVal20: TX3DEvent;
  FieldVal21: TX3DEvent;
  TimeSensor22: TTimeSensorNode;

procedure Initflower3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'flower3.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d';
X3D0.Meta['description'] := 'a flower';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
Group7.FdChildren.Add(NavigationInfo8);
DirectionalLight9 := TDirectionalLightNode.Create;
DirectionalLight9.Direction := Vector3(0, -0.8, -0.2);
DirectionalLight9.Intensity := 0.5;
Group7.FdChildren.Add(DirectionalLight9);
Background10 := TBackgroundNode.Create;
Background10.SetSkyColor([Vector3(1, 1, 1)]);
Group7.FdChildren.Add(Background10);
Viewpoint11 := TViewpointNode.Create;
Viewpoint11.Description := 'One mathematical orbital';
Viewpoint11.Position := Vector3(0, 0, 50);
Group7.FdChildren.Add(Viewpoint11);
Transform12 := TTransformNode.Create;
Transform12.X3DName := 'OrbitTransform';
Transform12.Translation := Vector3(8, 0, 0);
Shape13 := TShapeNode.Create;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(0, 0.5, 1);
Material15.SpecularColor := Vector3(0, 0.5, 1);
Appearance14.Material := Material15;
Shape13.Appearance := Appearance14;
IndexedFaceSet16 := TIndexedFaceSetNode.Create;
IndexedFaceSet16.Convex := False;
IndexedFaceSet16.X3DName := 'Orbit';
Coordinate17 := TCoordinateNode.Create;
Coordinate17.X3DName := 'OrbitCoordinates';
IndexedFaceSet16.Coord := Coordinate17;
Shape13.Geometry := IndexedFaceSet16;
end;

procedure Initflower3Part1;
begin
Transform12.FdChildren.Add(Shape13);
Group7.FdChildren.Add(Transform12);
Script18 := TScriptNode.Create;
Script18.X3DName := 'OrbitScript';
FieldVal19 := TSFFloat.CreateEvent(Script18, 'set_fraction', True);
Script18.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TMFVec3f.CreateEvent(Script18, 'coordinates', False);
Script18.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TMFInt32.CreateEvent(Script18, 'coordIndexes', False);
Script18.AddCustomFieldOrEvent(FieldVal21);
{ <field accessType="inputOutput" name="e" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="f" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="g" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="h" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="t" type="SFFloat" value="0"/> }
{ <field accessType="inputOutput" name="p" type="SFFloat" value="0"/> }
{ <field accessType="initializeOnly" name="resolution" type="SFInt32" value="100"/> }
Script18.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  'var e = 5;' + LineEnding +
  'var f = 5;' + LineEnding +
  'var g = 5;' + LineEnding +
  'var h = 5;' + LineEnding +
  'var resolution = 100;' + LineEnding +
  'var t = 0;' + LineEnding +
  'var p = 0;' + LineEnding +
  '' + LineEnding +
  'function initialize() {' + LineEnding +
  '     generateCoordinates(resolution);' + LineEnding +
  '     var localci = new MFInt32();' + LineEnding +
  '     var arrIndex = 0;' + LineEnding +
  '     for (var i = 0; i < resolution-1; i++) {' + LineEnding +
  '     	for (var j = 0; j < resolution-1; j++) {' + LineEnding +
  '	     localci[arrIndex++] = i*resolution+j;' + LineEnding +
  '	     localci[arrIndex++] = i*resolution+j+1;' + LineEnding +
  '	     localci[arrIndex++] = (i+1)*resolution+j+1;' + LineEnding +
  '	     localci[arrIndex++] = (i+1)*resolution+j;' + LineEnding +
  '	     localci[arrIndex++] = -1;' + LineEnding +
  '	}' + LineEnding +
  '    }' + LineEnding +
  '    coordIndexes = localci;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function generateCoordinates(resolution) {' + LineEnding +
  '     var theta = 0.0;' + LineEnding +
  '     var phi = 0.0;' + LineEnding +
  '     var delta = (2 * 3.141592653) / (resolution-1);' + LineEnding +
  '     var localc = new MFVec3f();' + LineEnding +
  '     var arrIndex = 0;' + LineEnding +
  '     for (var  i = 0; i < resolution; i++) {' + LineEnding +
  '     	for (var  j = 0; j < resolution; j++) {' + LineEnding +
  '		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);' + LineEnding +
  '		localc[arrIndex++] = new SFVec3f(' + LineEnding +
  '			rho * Math.cos(phi) * Math.cos(theta),' + LineEnding +
  '			rho * Math.cos(phi) * Math.sin(theta),' + LineEnding +
  '			rho * Math.sin(phi)' + LineEnding +
  '		);' + LineEnding +
  '		theta += delta;' + LineEnding +
  '	}' + LineEnding +
  '	phi += delta;' + LineEnding +
  '     }' + LineEnding +
  '     coordinates = localc;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_fraction(fraction, eventTime) {' + LineEnding +
  '	t += 0.5;' + LineEnding +
  '	p += 0.5;' + LineEnding +
  '	var choice = Math.floor(Math.random() * 4);' + LineEnding +
  '	switch (choice) {' + LineEnding +
  '	case 0:' + LineEnding +
  '		e += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 1:' + LineEnding +
  '		f += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 2:' + LineEnding +
  '		g += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 3:' + LineEnding +
  '		h += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	}' + LineEnding +
  '	if (f < 1) {' + LineEnding +
  '		f = 10;' + LineEnding +
  '	}' + LineEnding +
  '	if (g < 1) {' + LineEnding +
  '		g = 4;' + LineEnding +
  '	}' + LineEnding +
  '	if (h < 1) {' + LineEnding +
  '		h = 4;' + LineEnding +
  '	}' + LineEnding +
  '	generateCoordinates(resolution);' + LineEnding +
  '}');
Group7.FdChildren.Add(Script18);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.X3DName := 'Clock';
TimeSensor22.CycleInterval := 16;
TimeSensor22.Loop := True;
Group7.FdChildren.Add(TimeSensor22);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Group7.AddRoute(FieldVal21, IndexedFaceSet16.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.point }
Group7.AddRoute(FieldVal20, Coordinate17.point);
{ ROUTE Clock.fraction_changed TO OrbitScript.set_fraction }
Group7.AddRoute(TimeSensor22.EventFraction_changed, FieldVal19);
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
