function flowerproto: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
ProtoDeclare17: TProtoDeclareNode;
ProtoInterface18: TProtoInterfaceNode;
field19: TfieldNode;
field20: TfieldNode;
ProtoBody21: TProtoBodyNode;
Transform22: TTransformNode;
Shape23: TShapeNode;
Appearance24: TAppearanceNode;
Material25: TMaterialNode;
ComposedCubeMapTexture26: TComposedCubeMapTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ComposedShader33: TComposedShaderNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
ShaderPart45: TShaderPartNode;
IS46: TISNode;
connect47: TconnectNode;
ShaderPart48: TShaderPartNode;
IS49: TISNode;
connect50: TconnectNode;
Sphere51: TSphereNode;
Script52: TScriptNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
field59: TfieldNode;
field60: TfieldNode;
field61: TfieldNode;
TimeSensor62: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
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
ProtoDeclare17 := TProtoDeclareNode.Create;
ProtoDeclare17.NameField := 'FlowerProto';
ProtoInterface18 := TProtoInterfaceNode.Create;
field19 := TfieldNode.Create;
field19.NameField := 'vertex';
field19.AccessType := 'inputOutput';
field19.Type := 'MFString';
field19.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\"';
{ .AddField }
ProtoInterface18.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'fragment';
field20.AccessType := 'inputOutput';
field20.Type := 'MFString';
field20.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"';
{ .AddField }
ProtoInterface18.Field := field20;
{ .SetProtoInterface }
ProtoDeclare17.ProtoInterface := ProtoInterface18;
ProtoBody21 := TProtoBodyNode.Create;
Transform22 := TTransformNode.Create;
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0.7,0.7,0.7);
Material25.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture26.BackTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture26.BottomTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture26.FrontTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture26.LeftTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture26.RightTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture26.TopTexture := ImageTexture32;
{ .SetTexture }
Appearance24.Texture := ComposedCubeMapTexture26;
ComposedShader33 := TComposedShaderNode.Create;
ComposedShader33.Language := 'GLSL';
field34 := TfieldNode.Create;
field34.NameField := 'cube';
field34.Type := 'SFInt32';
field34.AccessType := 'inputOutput';
field34.Value := '0';
{ .AddField }
ComposedShader33.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'chromaticDispertion';
field35.AccessType := 'initializeOnly';
field35.Type := 'SFVec3f';
field35.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader33.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'bias';
field36.Type := 'SFFloat';
field36.AccessType := 'inputOutput';
field36.Value := '0.5';
{ .AddField }
ComposedShader33.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'scale';
field37.Type := 'SFFloat';
field37.AccessType := 'inputOutput';
field37.Value := '0.5';
{ .AddField }
ComposedShader33.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'power';
field38.Type := 'SFFloat';
field38.AccessType := 'inputOutput';
field38.Value := '2';
{ .AddField }
ComposedShader33.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'a';
field39.Type := 'SFFloat';
field39.AccessType := 'inputOutput';
field39.Value := '10';
{ .AddField }
ComposedShader33.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'b';
field40.Type := 'SFFloat';
field40.AccessType := 'inputOutput';
field40.Value := '1';
{ .AddField }
ComposedShader33.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'c';
field41.Type := 'SFFloat';
field41.AccessType := 'inputOutput';
field41.Value := '20';
{ .AddField }
ComposedShader33.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'd';
field42.Type := 'SFFloat';
field42.AccessType := 'inputOutput';
field42.Value := '20';
{ .AddField }
ComposedShader33.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'tdelta';
field43.Type := 'SFFloat';
field43.AccessType := 'inputOutput';
field43.Value := '0';
{ .AddField }
ComposedShader33.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'pdelta';
field44.Type := 'SFFloat';
field44.AccessType := 'inputOutput';
field44.Value := '0';
{ .AddField }
ComposedShader33.Field := field44;
{ <field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"/> </field> }
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.Type := 'VERTEX';
IS46 := TISNode.Create;
connect47 := TconnectNode.Create;
connect47.NodeField := 'url';
connect47.ProtoField := 'vertex';
{ .AddConnect }
IS46.Connect := connect47;
{ .SetIS }
ShaderPart45.IS := IS46;
{ .AddParts }
ComposedShader33.Parts := ShaderPart45;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.Type := 'FRAGMENT';
IS49 := TISNode.Create;
connect50 := TconnectNode.Create;
connect50.NodeField := 'url';
connect50.ProtoField := 'fragment';
{ .AddConnect }
IS49.Connect := connect50;
{ .SetIS }
ShaderPart48.IS := IS49;
{ .AddParts }
ComposedShader33.Parts := ShaderPart48;
{ .AddShaders }
Appearance24.Shaders := ComposedShader33;
{ .SetAppearance }
Shape23.Appearance := Appearance24;
Sphere51 := TSphereNode.Create;
{ .SetGeometry }
Shape23.Geometry := Sphere51;
{ .AddChild }
Transform22.AddChildren([Shape23]);
Script52 := TScriptNode.Create;
field53 := TfieldNode.Create;
field53.NameField := 'translation';
field53.AccessType := 'inputOutput';
field53.Type := 'SFVec3f';
field53.Value := '0 0 0';
{ .AddField }
Script52.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'velocity';
field54.AccessType := 'inputOutput';
field54.Type := 'SFVec3f';
field54.Value := '0 0 0';
{ .AddField }
Script52.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'set_fraction';
field55.AccessType := 'inputOnly';
field55.Type := 'SFFloat';
{ .AddField }
Script52.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'a';
field56.Type := 'SFFloat';
field56.AccessType := 'inputOutput';
field56.Value := '0.5';
{ .AddField }
Script52.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'b';
field57.Type := 'SFFloat';
field57.AccessType := 'inputOutput';
field57.Value := '0.5';
{ .AddField }
Script52.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'c';
field58.Type := 'SFFloat';
field58.AccessType := 'inputOutput';
field58.Value := '3';
{ .AddField }
Script52.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'd';
field59.Type := 'SFFloat';
field59.AccessType := 'inputOutput';
field59.Value := '3';
{ .AddField }
Script52.Field := field59;
field60 := TfieldNode.Create;
field60.NameField := 'tdelta';
field60.Type := 'SFFloat';
field60.AccessType := 'inputOutput';
field60.Value := '0.5';
{ .AddField }
Script52.Field := field60;
field61 := TfieldNode.Create;
field61.NameField := 'pdelta';
field61.Type := 'SFFloat';
field61.AccessType := 'inputOutput';
field61.Value := '0.5';
{ .AddField }
Script52.Field := field61;

Script52.SetSourceCode('''ecmascript:\n"+
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
Transform22.AddChildren([Script52]);
TimeSensor62 := TTimeSensorNode.Create;
TimeSensor62.CycleInterval := 5;
TimeSensor62.Loop := True;
{ .AddChildren }
Transform22.AddChildren([TimeSensor62]);
Transform22.AddRoute(TimeSensor62.EventFraction_changed, Script52.EventSet_fraction);
{ .AddX3DRoute }
Transform22.AddRoute(Script52.EventTranslation_changed, Transform22.FdTranslation);
{ .AddX3DRoute }
Transform22.AddRoute(Script52.FdA, ComposedShader33.FdA);
{ .AddX3DRoute }
Transform22.AddRoute(Script52.FdB, ComposedShader33.FdB);
{ .AddX3DRoute }
Transform22.AddRoute(Script52.FdC, ComposedShader33.FdC);
{ .AddX3DRoute }
Transform22.AddRoute(Script52.FdD, ComposedShader33.FdD);
{ .AddX3DRoute }
Transform22.AddRoute(Script52.FdTdelta, ComposedShader33.FdTdelta);
{ .AddX3DRoute }
Transform22.AddRoute(Script52.FdPdelta, ComposedShader33.FdPdelta);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody21.AddChildren([Transform22]);
{ .SetProtoBody }
ProtoDeclare17.ProtoBody := ProtoBody21;
{ .AddChildren }
Group16.AddChildren([ProtoDeclare17]);
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;
