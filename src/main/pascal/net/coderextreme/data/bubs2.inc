function bubs2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
NavigationInfo11: TNavigationInfoNode;
Viewpoint12: TViewpointNode;
Background13: TBackgroundNode;
ProtoDeclare14: TProtoDeclareNode;
ProtoBody15: TProtoBodyNode;
Transform16: TTransformNode;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Script21: TScriptNode;
field22: TfieldNode;
field23: TfieldNode;
field24: TfieldNode;
field25: TfieldNode;
field26: TfieldNode;
TimeSensor27: TTimeSensorNode;
ProtoInstance31: TProtoInstanceNode;
ProtoInstance32: TProtoInstanceNode;
ProtoInstance33: TProtoInstanceNode;
ProtoInstance34: TProtoInstanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'bubs2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d';
X3D0.Meta['translated'] := '13 March 2016';
X3D0.Meta['generator'] := 'X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html';
X3D0.Components['Scripting'] := 1;
Group10 := TGroupNode.Create;
NavigationInfo11 := TNavigationInfoNode.Create;
NavigationInfo11.SetType(['EXAMINE']);
{ .AddChildren }
Group10.AddChildren([NavigationInfo11]);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Position := Vector3(0,0,4);
Viewpoint12.Orientation := Vector4(1,0,0,0);
Viewpoint12.Description := 'Bubbles in action';
{ .AddChildren }
Group10.AddChildren([Viewpoint12]);
Background13 := TBackgroundNode.Create;
Background13.SetBackUrl(['../resources/images/BK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background13.SetBottomUrl(['../resources/images/BT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background13.SetFrontUrl(['../resources/images/FR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background13.SetLeftUrl(['../resources/images/LF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background13.SetRightUrl(['../resources/images/RT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background13.SetTopUrl(['../resources/images/TP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
{ .AddChildren }
Group10.AddChildren([Background13]);
ProtoDeclare14 := TProtoDeclareNode.Create;
ProtoDeclare14.NameField := 'Bubble';
ProtoBody15 := TProtoBodyNode.Create;
Transform16 := TTransformNode.Create;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.25;
{ .SetGeometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0,0);
Material20.Transparency := 0.2;
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape17.Appearance := Appearance19;
{ .AddChild }
Transform16.AddChildren([Shape17]);
Script21 := TScriptNode.Create;
field22 := TfieldNode.Create;
field22.NameField := 'scale';
field22.AccessType := 'inputOutput';
field22.Type := 'SFVec3f';
field22.Value := '1 1 1';
{ .AddField }
Script21.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'translation';
field23.AccessType := 'inputOutput';
field23.Type := 'SFVec3f';
field23.Value := '0 0 0';
{ .AddField }
Script21.Field := field23;
field24 := TfieldNode.Create;
field24.NameField := 'velocity';
field24.AccessType := 'inputOutput';
field24.Type := 'SFVec3f';
field24.Value := '0 0 0';
{ .AddField }
Script21.Field := field24;
field25 := TfieldNode.Create;
field25.NameField := 'scalvel';
field25.AccessType := 'inputOutput';
field25.Type := 'SFVec3f';
field25.Value := '0 0 0';
{ .AddField }
Script21.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'set_fraction';
field26.AccessType := 'inputOnly';
field26.Type := 'SFFloat';
{ .AddField }
Script21.Field := field26;

Script21.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scalvel === 'undefined') {\n"+
"		scalvel = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}''');
{ .AddChildren }
Transform16.AddChildren([Script21]);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.CycleInterval := 10;
TimeSensor27.Loop := True;
{ .AddChildren }
Transform16.AddChildren([TimeSensor27]);
Transform16.AddRoute(Script21.EventTranslation_changed, Transform16.FdTranslation);
{ .AddX3DRoute }
Transform16.AddRoute(Script21.EventScale_changed, Transform16.FdScale);
{ .AddX3DRoute }
Transform16.AddRoute(TimeSensor27.EventFraction_changed, Script21.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody15.AddChildren([Transform16]);
{ .SetProtoBody }
ProtoDeclare14.ProtoBody := ProtoBody15;
{ .AddChildren }
Group10.AddChildren([ProtoDeclare14]);
ProtoInstance31 := TProtoInstanceNode.Create;
ProtoInstance31.NameField := 'Bubble';
{ .AddChildren }
Group10.AddChildren([ProtoInstance31]);
ProtoInstance32 := TProtoInstanceNode.Create;
ProtoInstance32.NameField := 'Bubble';
{ .AddChildren }
Group10.AddChildren([ProtoInstance32]);
ProtoInstance33 := TProtoInstanceNode.Create;
ProtoInstance33.NameField := 'Bubble';
{ .AddChildren }
Group10.AddChildren([ProtoInstance33]);
ProtoInstance34 := TProtoInstanceNode.Create;
ProtoInstance34.NameField := 'Bubble';
{ .AddChildren }
Group10.AddChildren([ProtoInstance34]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
