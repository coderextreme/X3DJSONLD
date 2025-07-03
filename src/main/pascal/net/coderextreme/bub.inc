function bub: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Viewpoint18: TViewpointNode;
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
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
ShaderPart38: TShaderPartNode;
ShaderPart39: TShaderPartNode;
ComposedShader40: TComposedShaderNode;
field41: TfieldNode;
ComposedCubeMapTexture42: TComposedCubeMapTextureNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
Sphere49: TSphereNode;
Script50: TScriptNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
TimeSensor54: TTimeSensorNode;
ProtoInstance57: TProtoInstanceNode;
ProtoInstance58: TProtoInstanceNode;
ProtoInstance59: TProtoInstanceNode;
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
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
{ <component name='Shape' level='4'></component> }
X3D0.Meta['title'] := 'bub.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '3 prismatic spheres';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d';
Group15 := TGroupNode.Create;
NavigationInfo16 := TNavigationInfoNode.Create;
{ .AddChildren }
Group15.AddChildren([NavigationInfo16]);
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group15.AddChildren([Background17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Position := Vector3(0,0,20);
Viewpoint18.Description := 'Look at the bubbles flying';
{ .AddChildren }
Group15.AddChildren([Viewpoint18]);
ProtoDeclare19 := TProtoDeclareNode.Create;
ProtoDeclare19.NameField := 'Bubble';
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
{ <ComposedShader DEF='gl' language="GLSL"> <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> <ShaderPart url='"../shaders/gl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language="GLSL"> <field name='fw_textureCoodGenType' type='SFInt32' accessType="inputOutput" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader> }
{ <ComposedShader DEF='instant' language="GLSL"> <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
field33 := TfieldNode.Create;
field33.NameField := 'cube';
field33.Type := 'SFInt32';
field33.AccessType := 'inputOutput';
field33.Value := '0';
{ .AddField }
ComposedShader32.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'chromaticDispertion';
field34.Type := 'SFVec3f';
field34.AccessType := 'inputOutput';
field34.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader32.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'bias';
field35.Type := 'SFFloat';
field35.AccessType := 'inputOutput';
field35.Value := '0.5';
{ .AddField }
ComposedShader32.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'scale';
field36.Type := 'SFFloat';
field36.AccessType := 'inputOutput';
field36.Value := '0.5';
{ .AddField }
ComposedShader32.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'power';
field37.Type := 'SFFloat';
field37.AccessType := 'inputOutput';
field37.Value := '2';
{ .AddField }
ComposedShader32.Field := field37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart38.Type := 'VERTEX';
{ .AddParts }
ComposedShader32.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.SetUrl(['../shaders/pc_bubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs']);
ShaderPart39.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader32.Parts := ShaderPart39;
{ .AddShaders }
Appearance23.Shaders := ComposedShader32;
ComposedShader40 := TComposedShaderNode.Create;
ComposedShader40.Language := 'GLSL';
field41 := TfieldNode.Create;
field41.NameField := 'cube';
field41.Type := 'SFNode';
field41.AccessType := 'inputOutput';
ComposedCubeMapTexture42 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture42 := ComposedCubeMapTexture25;
{ .AddChildren }
field41.AddChildren([ComposedCubeMapTexture42]);
{ .AddField }
ComposedShader40.Field := field41;
field43 := TfieldNode.Create;
field43.NameField := 'chromaticDispertion';
field43.Type := 'SFVec3f';
field43.AccessType := 'inputOutput';
field43.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader40.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'bias';
field44.Type := 'SFFloat';
field44.AccessType := 'inputOutput';
field44.Value := '0.5';
{ .AddField }
ComposedShader40.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'scale';
field45.Type := 'SFFloat';
field45.AccessType := 'inputOutput';
field45.Value := '0.5';
{ .AddField }
ComposedShader40.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'power';
field46.Type := 'SFFloat';
field46.AccessType := 'inputOutput';
field46.Value := '2';
{ .AddField }
ComposedShader40.Field := field46;
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart47.Type := 'VERTEX';
{ .AddParts }
ComposedShader40.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['../shaders/x_itebubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs']);
ShaderPart48.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader40.Parts := ShaderPart48;
{ .AddShaders }
Appearance23.Shaders := ComposedShader40;
{ .SetAppearance }
Shape22.Appearance := Appearance23;
Sphere49 := TSphereNode.Create;
{ .SetGeometry }
Shape22.Geometry := Sphere49;
{ .AddChild }
Transform21.AddChildren([Shape22]);
{ .AddChildren }
ProtoBody20.AddChildren([Transform21]);
Script50 := TScriptNode.Create;
field51 := TfieldNode.Create;
field51.NameField := 'translation';
field51.AccessType := 'inputOutput';
field51.Type := 'SFVec3f';
field51.Value := '0 0 0';
{ .AddField }
Script50.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'velocity';
field52.AccessType := 'inputOutput';
field52.Type := 'SFVec3f';
field52.Value := '0 0 0';
{ .AddField }
Script50.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'set_fraction';
field53.AccessType := 'inputOnly';
field53.Type := 'SFTime';
{ .AddField }
Script50.Field := field53;

Script50.SetSourceCode('''ecmascript:\n"+
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
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}''');
{ .AddChildren }
ProtoBody20.AddChildren([Script50]);
TimeSensor54 := TTimeSensorNode.Create;
TimeSensor54.CycleInterval := 0.15;
TimeSensor54.Loop := True;
{ .AddChildren }
ProtoBody20.AddChildren([TimeSensor54]);
ProtoBody20.AddRoute(TimeSensor54.FdCycletime, Script50.EventSet_fraction);
{ .AddX3DRoute }
ProtoBody20.AddRoute(Script50.EventTranslation_changed, Transform21.FdTranslation);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare19.ProtoBody := ProtoBody20;
{ .AddChildren }
Group15.AddChildren([ProtoDeclare19]);
ProtoInstance57 := TProtoInstanceNode.Create;
ProtoInstance57.NameField := 'Bubble';
{ .AddChildren }
Group15.AddChildren([ProtoInstance57]);
ProtoInstance58 := TProtoInstanceNode.Create;
ProtoInstance58.NameField := 'Bubble';
{ .AddChildren }
Group15.AddChildren([ProtoInstance58]);
ProtoInstance59 := TProtoInstanceNode.Create;
ProtoInstance59.NameField := 'Bubble';
{ .AddChildren }
Group15.AddChildren([ProtoInstance59]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;
