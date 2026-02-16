function flowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Background18: TBackgroundNode;
ProtoDeclare19: TProtoDeclareNode;
ProtoBody20: TProtoBodyNode;
Transform21: TTransformNode;
Shape22: TShapeNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;
ComposedCubeMapTexture25: TComposedCubeMapTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ComposedShader32: TComposedShaderNode;
field33: TfieldNode;
ComposedCubeMapTexture34: TComposedCubeMapTextureNode;
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
ShaderPart46: TShaderPartNode;
Sphere47: TSphereNode;
Script48: TScriptNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
TimeSensor58: TTimeSensorNode;
ProtoInstance67: TProtoInstanceNode;
ProtoInstance68: TProtoInstanceNode;
ProtoInstance69: TProtoInstanceNode;
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
X3D0.Meta['title'] := 'flowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
{ .AddChildren }
Group16.AddChildren([NavigationInfo17]);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group16.AddChildren([Background18]);
ProtoDeclare19 := TProtoDeclareNode.Create;
ProtoDeclare19.NameField := 'flower';
ProtoBody20 := TProtoBodyNode.Create;
Transform21 := TTransformNode.Create;
Shape22 := TShapeNode.Create;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7,0.7,0.7);
Material24.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture25.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture25.BottomTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture25.FrontTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture25.LeftTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture25.RightTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture25.TopTexture := ImageTexture31;
{ .SetTexture }
Appearance23.Texture := ComposedCubeMapTexture25;
{ <ComposedShader DEF='x3dom' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"'></ShaderPart> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
field33 := TfieldNode.Create;
field33.NameField := 'cube';
field33.Type := 'SFNode';
field33.AccessType := 'inputOutput';
ComposedCubeMapTexture34 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture34 := ComposedCubeMapTexture25;
{ .AddChildren }
field33.AddChildren([ComposedCubeMapTexture34]);
{ .AddField }
ComposedShader32.Field := field33;
field35 := TfieldNode.Create;
field35.NameField := 'chromaticDispertion';
field35.AccessType := 'initializeOnly';
field35.Type := 'SFVec3f';
field35.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader32.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'bias';
field36.Type := 'SFFloat';
field36.AccessType := 'inputOnly';
field36.Value := '0.5';
{ .AddField }
ComposedShader32.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'scale';
field37.Type := 'SFFloat';
field37.AccessType := 'inputOnly';
field37.Value := '0.5';
{ .AddField }
ComposedShader32.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'power';
field38.Type := 'SFFloat';
field38.AccessType := 'inputOnly';
field38.Value := '2';
{ .AddField }
ComposedShader32.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'a';
field39.Type := 'SFFloat';
field39.AccessType := 'inputOnly';
field39.Value := '10';
{ .AddField }
ComposedShader32.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'b';
field40.Type := 'SFFloat';
field40.AccessType := 'inputOnly';
field40.Value := '1';
{ .AddField }
ComposedShader32.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'c';
field41.Type := 'SFFloat';
field41.AccessType := 'inputOnly';
field41.Value := '20';
{ .AddField }
ComposedShader32.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'd';
field42.Type := 'SFFloat';
field42.AccessType := 'inputOnly';
field42.Value := '20';
{ .AddField }
ComposedShader32.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'tdelta';
field43.Type := 'SFFloat';
field43.AccessType := 'inputOnly';
field43.Value := '0';
{ .AddField }
ComposedShader32.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'pdelta';
field44.Type := 'SFFloat';
field44.AccessType := 'inputOnly';
field44.Value := '0';
{ .AddField }
ComposedShader32.Field := field44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart45.Type := 'VERTEX';
{ .AddParts }
ComposedShader32.Parts := ShaderPart45;
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart46.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader32.Parts := ShaderPart46;
{ .AddShaders }
Appearance23.Shaders := ComposedShader32;
{ .SetAppearance }
Shape22.Appearance := Appearance23;
Sphere47 := TSphereNode.Create;
{ .SetGeometry }
Shape22.Geometry := Sphere47;
{ .AddChild }
Transform21.AddChildren([Shape22]);
{ .AddChildren }
ProtoBody20.AddChildren([Transform21]);
Script48 := TScriptNode.Create;
field49 := TfieldNode.Create;
field49.NameField := 'translation';
field49.AccessType := 'inputOutput';
field49.Type := 'SFVec3f';
field49.Value := '0 0 0';
{ .AddField }
Script48.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'velocity';
field50.AccessType := 'inputOutput';
field50.Type := 'SFVec3f';
field50.Value := '0 0 0';
{ .AddField }
Script48.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'set_fraction';
field51.AccessType := 'inputOnly';
field51.Type := 'SFFloat';
{ .AddField }
Script48.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'a';
field52.Type := 'SFFloat';
field52.AccessType := 'inputOutput';
field52.Value := '0.5';
{ .AddField }
Script48.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'b';
field53.Type := 'SFFloat';
field53.AccessType := 'inputOutput';
field53.Value := '0.5';
{ .AddField }
Script48.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'c';
field54.Type := 'SFFloat';
field54.AccessType := 'inputOutput';
field54.Value := '3';
{ .AddField }
Script48.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'd';
field55.Type := 'SFFloat';
field55.AccessType := 'inputOutput';
field55.Value := '3';
{ .AddField }
Script48.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'tdelta';
field56.Type := 'SFFloat';
field56.AccessType := 'inputOutput';
field56.Value := '0.5';
{ .AddField }
Script48.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'pdelta';
field57.Type := 'SFFloat';
field57.AccessType := 'inputOutput';
field57.Value := '0.5';
{ .AddField }
Script48.Field := field57;

Script48.SetSourceCode('''ecmascript:\n"+
"\n"+
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
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
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
ProtoBody20.AddChildren([Script48]);
TimeSensor58 := TTimeSensorNode.Create;
TimeSensor58.CycleInterval := 5;
TimeSensor58.Loop := True;
{ .AddChildren }
ProtoBody20.AddChildren([TimeSensor58]);
ProtoBody20.AddRoute(TimeSensor58.EventFraction_changed, Script48.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody20.AddRoute(Script48.EventTranslation_changed, Transform21.FdTranslation);
{ .AddX3DRoute }
ProtoBody20.AddRoute(Script48.FdA, ComposedShader32.FdA);
{ .AddX3DRoute }
ProtoBody20.AddRoute(Script48.FdB, ComposedShader32.FdB);
{ .AddX3DRoute }
ProtoBody20.AddRoute(Script48.FdC, ComposedShader32.FdC);
{ .AddX3DRoute }
ProtoBody20.AddRoute(Script48.FdD, ComposedShader32.FdD);
{ .AddX3DRoute }
ProtoBody20.AddRoute(Script48.FdPdelta, ComposedShader32.FdPdelta);
{ .AddX3DRoute }
ProtoBody20.AddRoute(Script48.FdTdelta, ComposedShader32.FdTdelta);
{ .AddX3DRoute }
{ <ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> }
{ <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> }
{ <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> }
{ <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> }
{ <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> }
{ <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/> }
{ .SetProtoBody }
ProtoDeclare19.ProtoBody := ProtoBody20;
{ .AddChildren }
Group16.AddChildren([ProtoDeclare19]);
ProtoInstance67 := TProtoInstanceNode.Create;
ProtoInstance67.NameField := 'flower';
{ .AddChildren }
Group16.AddChildren([ProtoInstance67]);
ProtoInstance68 := TProtoInstanceNode.Create;
ProtoInstance68.NameField := 'flower';
{ .AddChildren }
Group16.AddChildren([ProtoInstance68]);
ProtoInstance69 := TProtoInstanceNode.Create;
ProtoInstance69.NameField := 'flower';
{ .AddChildren }
Group16.AddChildren([ProtoInstance69]);
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;
