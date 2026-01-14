function flowerprotofreewrl: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Viewpoint18: TViewpointNode;
Background19: TBackgroundNode;
ProtoDeclare20: TProtoDeclareNode;
ProtoInterface21: TProtoInterfaceNode;
field22: TfieldNode;
field23: TfieldNode;
ProtoBody24: TProtoBodyNode;
Transform25: TTransformNode;
Shape26: TShapeNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
ComposedCubeMapTexture29: TComposedCubeMapTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
ImageTexture34: TImageTextureNode;
ImageTexture35: TImageTextureNode;
ComposedShader36: TComposedShaderNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
ShaderPart48: TShaderPartNode;
IS49: TISNode;
connect50: TconnectNode;
ShaderPart51: TShaderPartNode;
IS52: TISNode;
connect53: TconnectNode;
Sphere54: TSphereNode;
Script55: TScriptNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
field59: TfieldNode;
field60: TfieldNode;
field61: TfieldNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
TimeSensor65: TTimeSensorNode;
ProtoInstance74: TProtoInstanceNode;
fieldValue75: TfieldValueNode;
fieldValue76: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'flowerproto.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
{ .AddChildren }
Group16.AddChildren([NavigationInfo17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0,0,50);
{ .AddChildren }
Group16.AddChildren([Viewpoint18]);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group16.AddChildren([Background19]);
ProtoDeclare20 := TProtoDeclareNode.Create;
ProtoDeclare20.NameField := 'FlowerProto';
ProtoInterface21 := TProtoInterfaceNode.Create;
field22 := TfieldNode.Create;
field22.NameField := 'vertex';
field22.AccessType := 'inputOnly';
field22.Type := 'MFString';
field22.Value := '\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"';
{ .AddField }
ProtoInterface21.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'fragment';
field23.AccessType := 'inputOnly';
field23.Type := 'MFString';
field23.Value := '\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"';
{ .AddField }
ProtoInterface21.Field := field23;
{ .SetProtoInterface }
ProtoDeclare20.ProtoInterface := ProtoInterface21;
ProtoBody24 := TProtoBodyNode.Create;
Transform25 := TTransformNode.Create;
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0.7,0.7,0.7);
Material28.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance27.Material := Material28;
ComposedCubeMapTexture29 := TComposedCubeMapTextureNode.Create;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBack }
ComposedCubeMapTexture29.Back := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottom }
ComposedCubeMapTexture29.Bottom := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFront }
ComposedCubeMapTexture29.Front := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeft }
ComposedCubeMapTexture29.Left := ImageTexture33;
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRight }
ComposedCubeMapTexture29.Right := ImageTexture34;
ImageTexture35 := TImageTextureNode.Create;
ImageTexture35.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTop }
ComposedCubeMapTexture29.Top := ImageTexture35;
{ .SetTexture }
Appearance27.Texture := ComposedCubeMapTexture29;
ComposedShader36 := TComposedShaderNode.Create;
ComposedShader36.Language := 'GLSL';
field37 := TfieldNode.Create;
field37.NameField := 'fw_textureCoordGenType';
field37.AccessType := 'inputOutput';
field37.Type := 'SFInt32';
field37.Value := '0';
{ .AddField }
ComposedShader36.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'chromaticDispertion';
field38.AccessType := 'initializeOnly';
field38.Type := 'SFVec3f';
field38.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader36.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'bias';
field39.Type := 'SFFloat';
field39.AccessType := 'inputOutput';
field39.Value := '0.5';
{ .AddField }
ComposedShader36.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'scale';
field40.Type := 'SFFloat';
field40.AccessType := 'inputOutput';
field40.Value := '0.5';
{ .AddField }
ComposedShader36.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'power';
field41.Type := 'SFFloat';
field41.AccessType := 'inputOutput';
field41.Value := '2';
{ .AddField }
ComposedShader36.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'a';
field42.Type := 'SFFloat';
field42.AccessType := 'inputOutput';
field42.Value := '5';
{ .AddField }
ComposedShader36.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'b';
field43.Type := 'SFFloat';
field43.AccessType := 'inputOutput';
field43.Value := '5';
{ .AddField }
ComposedShader36.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'c';
field44.Type := 'SFFloat';
field44.AccessType := 'inputOutput';
field44.Value := '20';
{ .AddField }
ComposedShader36.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'd';
field45.Type := 'SFFloat';
field45.AccessType := 'inputOutput';
field45.Value := '20';
{ .AddField }
ComposedShader36.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'tdelta';
field46.Type := 'SFFloat';
field46.AccessType := 'inputOutput';
field46.Value := '0';
{ .AddField }
ComposedShader36.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'pdelta';
field47.Type := 'SFFloat';
field47.AccessType := 'inputOutput';
field47.Value := '0';
{ .AddField }
ComposedShader36.Field := field47;
{ <field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"/> </field> }
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.Type := 'VERTEX';
IS49 := TISNode.Create;
connect50 := TconnectNode.Create;
connect50.NodeField := 'url';
connect50.ProtoField := 'vertex';
{ .AddConnect }
IS49.Connect := connect50;
{ .SetIS }
ShaderPart48.IS := IS49;
{ .AddParts }
ComposedShader36.Parts := ShaderPart48;
ShaderPart51 := TShaderPartNode.Create;
ShaderPart51.Type := 'FRAGMENT';
IS52 := TISNode.Create;
connect53 := TconnectNode.Create;
connect53.NodeField := 'url';
connect53.ProtoField := 'fragment';
{ .AddConnect }
IS52.Connect := connect53;
{ .SetIS }
ShaderPart51.IS := IS52;
{ .AddParts }
ComposedShader36.Parts := ShaderPart51;
{ .AddShaders }
Appearance27.Shaders := ComposedShader36;
{ .SetAppearance }
Shape26.Appearance := Appearance27;
Sphere54 := TSphereNode.Create;
Sphere54.Radius := 5;
{ .SetGeometry }
Shape26.Geometry := Sphere54;
{ .AddChild }
Transform25.AddChildren([Shape26]);
Script55 := TScriptNode.Create;
Script55.DirectOutput := True;
field56 := TfieldNode.Create;
field56.NameField := 'translation';
field56.AccessType := 'inputOutput';
field56.Type := 'SFVec3f';
field56.Value := '0 0 0';
{ .AddField }
Script55.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'velocity';
field57.AccessType := 'inputOutput';
field57.Type := 'SFVec3f';
field57.Value := '0 0 0';
{ .AddField }
Script55.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'set_fraction';
field58.AccessType := 'inputOutput';
field58.Type := 'SFFloat';
{ .AddField }
Script55.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'a';
field59.Type := 'SFFloat';
field59.AccessType := 'inputOutput';
field59.Value := '0.5';
{ .AddField }
Script55.Field := field59;
field60 := TfieldNode.Create;
field60.NameField := 'b';
field60.Type := 'SFFloat';
field60.AccessType := 'inputOutput';
field60.Value := '0.5';
{ .AddField }
Script55.Field := field60;
field61 := TfieldNode.Create;
field61.NameField := 'c';
field61.Type := 'SFFloat';
field61.AccessType := 'inputOutput';
field61.Value := '3';
{ .AddField }
Script55.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'd';
field62.Type := 'SFFloat';
field62.AccessType := 'inputOutput';
field62.Value := '3';
{ .AddField }
Script55.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'tdelta';
field63.Type := 'SFFloat';
field63.AccessType := 'inputOutput';
field63.Value := '0.5';
{ .AddField }
Script55.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'pdelta';
field64.Type := 'SFFloat';
field64.AccessType := 'inputOutput';
field64.Value := '0.5';
{ .AddField }
Script55.Field := field64;

Script55.SetSourceCode('''ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}''');
{ .AddChildren }
Transform25.AddChildren([Script55]);
TimeSensor65 := TTimeSensorNode.Create;
TimeSensor65.CycleInterval := 5;
TimeSensor65.Loop := True;
{ .AddChildren }
Transform25.AddChildren([TimeSensor65]);
Transform25.AddRoute(TimeSensor65.EventFraction_changed, Script55.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.EventTranslation_changed, Transform25.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdA, ComposedShader36.FdA);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdB, ComposedShader36.FdB);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdC, ComposedShader36.FdC);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdD, ComposedShader36.FdD);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdTdelta, ComposedShader36.FdTdelta);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdPdelta, ComposedShader36.FdPdelta);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody24.AddChildren([Transform25]);
{ .SetProtoBody }
ProtoDeclare20.ProtoBody := ProtoBody24;
{ .AddChildren }
Group16.AddChildren([ProtoDeclare20]);
ProtoInstance74 := TProtoInstanceNode.Create;
ProtoInstance74.NameField := 'FlowerProto';
fieldValue75 := TfieldValueNode.Create;
fieldValue75.NameField := 'vertex';
fieldValue75.Value := '\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"';
{ .AddFieldValue }
ProtoInstance74.FieldValue := fieldValue75;
fieldValue76 := TfieldValueNode.Create;
fieldValue76.NameField := 'fragment';
fieldValue76.Value := '\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"';
{ .AddFieldValue }
ProtoInstance74.FieldValue := fieldValue76;
{ .AddChildren }
Group16.AddChildren([ProtoInstance74]);
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;
