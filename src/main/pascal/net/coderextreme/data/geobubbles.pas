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
SFTime19: TSFTime;
SFFloat20: TSFFloat;
MFVec3d21: TMFVec3d;
MFVec3d22: TMFVec3d;

procedure InitgeobubblesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Geospatial'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'geobubbles.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'geo bubbles';
{ METHOD .Meta }
{ METHOD .Head }
Group8 := TGroupNode.Create;;
{ Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/ }
{ PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/ }
GeoViewpoint9 := TGeoViewpointNode.Create;;
GeoViewpoint9.Position := Vector3Double(0,0,4);
GeoViewpoint9.Orientation := Vector4(1,0,0,0);
GeoViewpoint9.Description := 'Tour Views';
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(GeoViewpoint9);
Background10 := TBackgroundNode.Create;;
Background10.SetBackUrl(['../resources/images/BK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background10.SetBottomUrl(['../resources/images/BT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background10.SetFrontUrl(['../resources/images/FR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background10.SetLeftUrl(['../resources/images/LF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background10.SetRightUrl(['../resources/images/RT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background10.SetTopUrl(['../resources/images/TP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Background10);
Transform11 := TTransformNode.Create;;
Shape12 := TShapeNode.Create;;
Sphere13 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;;
Material15 := TMaterialNode.Create;;
Material15.DiffuseColor := Vector3(0.7,0.7,0.7);
Material15.SpecularColor := Vector3(0.5,0.5,0.5);
end;

procedure InitgeobubblesPart1;
begin

{ METHOD .SetMaterial }
Appearance14.Material := Material15;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape12.Appearance := Appearance14;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Transform11);
TimeSensor16 := TTimeSensorNode.Create;;
TimeSensor16.CycleInterval := 5;
TimeSensor16.Loop := True;
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(TimeSensor16);
GeoPositionInterpolator17 := TGeoPositionInterpolatorNode.Create;;
GeoPositionInterpolator17.SetKey([0,1]);
GeoPositionInterpolator17.SetKeyValue(0.0015708,0,4,0,0.0015708,4);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(GeoPositionInterpolator17);
Script18 := TScriptNode.Create;;
SFTime19 := TSFTime.CreateUndefined(Script18, false, 'set_cycle');
{ METHOD .Fd.AddCustomField }
Script18.AddCustomField(SFTime19);
SFFloat20 := TSFFloat.CreateUndefined(Script18, false, 'val');
SFFloat20.Value := '0';
{ METHOD .Fd.AddCustomField }
Script18.AddCustomField(SFFloat20);
MFVec3d21 := TMFVec3d.CreateUndefined(Script18, false, 'positions');
MFVec3d21.Value := '0.0015708 0 4 0 0.0015708 4';
{ METHOD .Fd.AddCustomField }
Script18.AddCustomField(MFVec3d21);
MFVec3d22 := TMFVec3d.CreateUndefined(Script18, false, 'position');
MFVec3d22.Value := '0.0015708 0 4 0 0.0015708 4';
{ METHOD .Fd.AddCustomField }
Script18.AddCustomField(MFVec3d22);

Script18.SetSourceCode('''ecmascript:\n"+
"\n"+
"               function set_cycle(value) {\n"+
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo\n"+
"                        var ov = val;\n"+
"			// Browser.print('old '+ov);\n"+
"                        do {\n"+
"                                val = Math.floor(Math.random()*2);\n"+
"                                var vc = val;\n"+
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);\n"+
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);\n"+
"			// Browser.println(positions[ov]);\n"+
"			// Browser.println(positions[vc]);\n"+
"                        position = new MFVec3d();\n"+
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"               }''');
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Script18);
{ Original "TourTime.EventCycleTime TO RandomTourTime.EventSet_cycle }
{ Sample TourTime.EventCycleTime TO RandomTourTime.EventSet_cycle}
Group8.AddRoute(TimeSensor16.EventCycleTime, Script18.EventSet_cycle);
{ METHOD .AddX3DROUTE }
{ Original "RandomTourTime.position TO TourPosition.keyValue }
{ Sample RandomTourTime.position TO TourPosition.keyValue}
Group8.AddRoute(RandomTourTime.undefined, GeoPositionInterpolator17.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "TourTime.EventFraction_changed TO TourPosition.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO TourPosition.EventSet_fraction}
Group8.AddRoute(TimeSensor16.EventFraction_changed, GeoPositionInterpolator17.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "TourPosition.EventGeovalue_changed TO Tour.EventSet_position }
{ Sample TourPosition.EventGeovalue_changed TO Tour.EventSet_position}
Group8.AddRoute(GeoPositionInterpolator17.EventGeovalue_changed, GeoViewpoint9.EventSet_position);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
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
