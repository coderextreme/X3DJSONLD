unit geobubbles;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Creategeobubbles: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group8: TGroupNode;
  GeoViewpoint9: TGeoViewpointNode;
  Background10: TBackgroundNode;
  Transform11: TTransformNode;
  Shape12: TShapeNode;
  Sphere13: TSphereNode;
  Appearance14: TAppearanceNode;
  Material15: TMaterialNode;
  TimeSensor16: TTimeSensorNode;
  GeoPositionInterpolator17: TGeoPositionInterpolatorNode;
  Script18: TScriptNode;
  FieldVal19: TX3DEvent;
  FieldVal20: TSFFloat;
  FieldVal21: TMFVec3d;
  FieldVal22: TMFVec3d;

procedure InitgeobubblesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Geospatial'] := 1;
X3D0.Meta['title'] := 'geobubbles.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d';
X3D0.Meta['description'] := 'geo bubbles';
Group8 := TGroupNode.Create;
{ Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/ }
{ PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/ }
GeoViewpoint9 := TGeoViewpointNode.Create;
GeoViewpoint9.X3DName := 'Tour';
GeoViewpoint9.Position := Vector3Double(0, 0, 4);
GeoViewpoint9.Orientation := Vector4(1, 0, 0, 0);
GeoViewpoint9.Description := 'Tour Views';
Group8.FdChildren.Add(GeoViewpoint9);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/BK.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background10.SetBottomUrl(['../resources/images/BT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background10.SetFrontUrl(['../resources/images/FR.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background10.SetLeftUrl(['../resources/images/LF.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background10.SetRightUrl(['../resources/images/RT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background10.SetTopUrl(['../resources/images/TP.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
Group8.FdChildren.Add(Background10);
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material15.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance14.Material := Material15;
Shape12.Appearance := Appearance14;
Transform11.FdChildren.Add(Shape12);
Group8.FdChildren.Add(Transform11);
TimeSensor16 := TTimeSensorNode.Create;
end;

procedure InitgeobubblesPart1;
begin
TimeSensor16.X3DName := 'TourTime';
TimeSensor16.CycleInterval := 5;
TimeSensor16.Loop := True;
Group8.FdChildren.Add(TimeSensor16);
GeoPositionInterpolator17 := TGeoPositionInterpolatorNode.Create;
GeoPositionInterpolator17.X3DName := 'TourPosition';
GeoPositionInterpolator17.SetKey([0, 1]);
GeoPositionInterpolator17.SetKeyValue(0.0015708, 0, 4, 0, 0.0015708, 4);
Group8.FdChildren.Add(GeoPositionInterpolator17);
Script18 := TScriptNode.Create;
Script18.X3DName := 'RandomTourTime';
FieldVal19 := TSFTime.CreateEvent(Script18, 'set_cycle', True);
Script18.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TSFFloat.Create(Script18, True, 'val', 0);
Script18.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TMFVec3d.Create(Script18, True, 'positions', (0.0015708, 0, 4, 0, 0.0015708, 4));
Script18.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TMFVec3d.Create(Script18, True, 'position', (0.0015708, 0, 4, 0, 0.0015708, 4));
Script18.AddCustomFieldOrEvent(FieldVal22);
Script18.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  '               function set_cycle(value) {' + LineEnding +
  '                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo' + LineEnding +
  '                        var ov = val;' + LineEnding +
  '			// Browser.print(''old ''+ov);' + LineEnding +
  '                        do {' + LineEnding +
  '                                val = Math.floor(Math.random()*2);' + LineEnding +
  '                                var vc = val;' + LineEnding +
  '                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);' + LineEnding +
  '                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);' + LineEnding +
  '			// Browser.println(positions[ov]);' + LineEnding +
  '			// Browser.println(positions[vc]);' + LineEnding +
  '                        position = new MFVec3d();' + LineEnding +
  '                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);' + LineEnding +
  '                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);' + LineEnding +
  '               }');
Group8.FdChildren.Add(Script18);
{ ROUTE TourTime.cycleTime TO RandomTourTime.set_cycle }
Group8.AddRoute(TimeSensor16.EventCycleTime, FieldVal19);
{ ROUTE RandomTourTime.position TO TourPosition.keyValue }
Group8.AddRoute(FieldVal22, GeoPositionInterpolator17.keyValue);
{ ROUTE TourTime.fraction_changed TO TourPosition.set_fraction }
Group8.AddRoute(TimeSensor16.EventFraction_changed, GeoPositionInterpolator17.EventSet_fraction);
{ ROUTE TourPosition.geovalue_changed TO Tour.set_position }
Group8.AddRoute(GeoPositionInterpolator17.EventGeovalue_changed, GeoViewpoint9.EventSet_position);
X3D0.AddChildren([Group8]);
end;

function Creategeobubbles: TX3DRootNode;
begin
  InitgeobubblesPart0;
  InitgeobubblesPart1;
  Result := X3D0;
end;

begin
end.
