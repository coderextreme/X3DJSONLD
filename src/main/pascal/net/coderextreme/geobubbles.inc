function geobubbles: TX3DRootNode;
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
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
field22: TfieldNode;
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
GeoViewpoint9.Position := (0,0,4);
GeoViewpoint9.Orientation := Vector4(1,0,0,0);
GeoViewpoint9.Description := 'Tour Views';
{ .AddChildren }
Group8.AddChildren([GeoViewpoint9]);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/BK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background10.SetBottomUrl(['../resources/images/BT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background10.SetFrontUrl(['../resources/images/FR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background10.SetLeftUrl(['../resources/images/LF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background10.SetRightUrl(['../resources/images/RT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background10.SetTopUrl(['../resources/images/TP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
{ .AddChildren }
Group8.AddChildren([Background10]);
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
{ .SetGeometry }
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(0.7,0.7,0.7);
Material15.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance14.Material := Material15;
{ .SetAppearance }
Shape12.Appearance := Appearance14;
{ .AddChild }
Transform11.AddChildren([Shape12]);
{ .AddChildren }
Group8.AddChildren([Transform11]);
TimeSensor16 := TTimeSensorNode.Create;
TimeSensor16.CycleInterval := 5;
TimeSensor16.Loop := True;
{ .AddChildren }
Group8.AddChildren([TimeSensor16]);
GeoPositionInterpolator17 := TGeoPositionInterpolatorNode.Create;
GeoPositionInterpolator17.SetKey([0,1]);
GeoPositionInterpolator17.SetKeyValue(0.0015708,0,4,0,0.0015708,4);
{ .AddChildren }
Group8.AddChildren([GeoPositionInterpolator17]);
Script18 := TScriptNode.Create;
field19 := TfieldNode.Create;
field19.NameField := 'set_cycle';
field19.AccessType := 'inputOnly';
field19.Type := 'SFTime';
{ .AddField }
Script18.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'val';
field20.AccessType := 'inputOutput';
field20.Type := 'SFFloat';
field20.Value := '0';
{ .AddField }
Script18.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'positions';
field21.AccessType := 'inputOutput';
field21.Type := 'MFVec3d';
field21.Value := '0.0015708 0 4 0 0.0015708 4';
{ .AddField }
Script18.Field := field21;
field22 := TfieldNode.Create;
field22.NameField := 'position';
field22.AccessType := 'inputOutput';
field22.Type := 'MFVec3d';
field22.Value := '0.0015708 0 4 0 0.0015708 4';
{ .AddField }
Script18.Field := field22;

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
{ .AddChildren }
Group8.AddChildren([Script18]);
Group8.AddRoute(TimeSensor16.FdCycletime, Script18.EventSet_cycle);
{ .AddX3DRoute }
Group8.AddRoute(Script18.FdPosition, GeoPositionInterpolator17.FdKeyvalue);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor16.EventFraction_changed, GeoPositionInterpolator17.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(GeoPositionInterpolator17.EventGeovalue_changed, GeoViewpoint9.EventSet_position);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group8]);
Result := X3D0;
end;
