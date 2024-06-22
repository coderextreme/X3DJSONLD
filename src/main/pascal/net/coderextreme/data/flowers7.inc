function flowers7: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Background18: TBackgroundNode;
Viewpoint19: TViewpointNode;
Transform20: TTransformNode;
Shape21: TShapeNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
ComposedCubeMapTexture24: TComposedCubeMapTextureNode;
ImageTexture25: TImageTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ComposedShader31: TComposedShaderNode;
field32: TfieldNode;
ComposedCubeMapTexture33: TComposedCubeMapTextureNode;
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
ShaderPart44: TShaderPartNode;
ShaderPart45: TShaderPartNode;
ComposedShader46: TComposedShaderNode;
field47: TfieldNode;
ComposedCubeMapTexture48: TComposedCubeMapTextureNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
ShaderPart59: TShaderPartNode;
ShaderPart60: TShaderPartNode;
Sphere61: TSphereNode;
Script62: TScriptNode;
field63: TfieldNode;
field64: TfieldNode;
field65: TfieldNode;
field66: TfieldNode;
field67: TfieldNode;
field68: TfieldNode;
field69: TfieldNode;
field70: TfieldNode;
field71: TfieldNode;
field72: TfieldNode;
field73: TfieldNode;
field74: TfieldNode;
field75: TfieldNode;
field76: TfieldNode;
Script77: TScriptNode;
field78: TfieldNode;
field79: TfieldNode;
field80: TfieldNode;
field81: TfieldNode;
field82: TfieldNode;
field83: TfieldNode;
field84: TfieldNode;
TimeSensor85: TTimeSensorNode;
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
X3D0.Meta['title'] := 'flowers7.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d';
X3D0.Meta['description'] := 'a flower';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
{ .AddChildren }
Group16.AddChildren([NavigationInfo17]);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ .AddChildren }
Group16.AddChildren([Background18]);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.Position := Vector3(0,0,40);
Viewpoint19.Description := 'Transparent rose';
{ .AddChildren }
Group16.AddChildren([Viewpoint19]);
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture24.BackTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture24.BottomTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture24.FrontTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture24.LeftTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture24.RightTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture24.TopTexture := ImageTexture30;
{ .SetTexture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
{ TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
field32 := TfieldNode.Create;
field32.NameField := 'cube';
field32.Type := 'SFNode';
field32.AccessType := 'inputOutput';
ComposedCubeMapTexture33 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture33 := ComposedCubeMapTexture24;
{ .AddChildren }
field32.AddChildren([ComposedCubeMapTexture33]);
{ .AddField }
ComposedShader31.Field := field32;
field34 := TfieldNode.Create;
field34.NameField := 'chromaticDispertion';
field34.AccessType := 'initializeOnly';
field34.Type := 'SFVec3f';
field34.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader31.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'bias';
field35.Type := 'SFFloat';
field35.AccessType := 'inputOutput';
field35.Value := '0.5';
{ .AddField }
ComposedShader31.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'scale';
field36.Type := 'SFFloat';
field36.AccessType := 'inputOutput';
field36.Value := '0.5';
{ .AddField }
ComposedShader31.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'power';
field37.Type := 'SFFloat';
field37.AccessType := 'inputOutput';
field37.Value := '2';
{ .AddField }
ComposedShader31.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'a';
field38.Type := 'SFFloat';
field38.AccessType := 'inputOutput';
field38.Value := '10';
{ .AddField }
ComposedShader31.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'b';
field39.Type := 'SFFloat';
field39.AccessType := 'inputOutput';
field39.Value := '1';
{ .AddField }
ComposedShader31.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'c';
field40.Type := 'SFFloat';
field40.AccessType := 'inputOutput';
field40.Value := '20';
{ .AddField }
ComposedShader31.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'd';
field41.Type := 'SFFloat';
field41.AccessType := 'inputOutput';
field41.Value := '20';
{ .AddField }
ComposedShader31.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'tdelta';
field42.Type := 'SFFloat';
field42.AccessType := 'inputOutput';
field42.Value := '0';
{ .AddField }
ComposedShader31.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'pdelta';
field43.Type := 'SFFloat';
field43.AccessType := 'inputOutput';
field43.Value := '0';
{ .AddField }
ComposedShader31.Field := field43;
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs']);
ShaderPart44.Type := 'VERTEX';
{ .AddParts }
ComposedShader31.Parts := ShaderPart44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart45.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader31.Parts := ShaderPart45;
{ .AddShaders }
Appearance22.Shaders := ComposedShader31;
ComposedShader46 := TComposedShaderNode.Create;
ComposedShader46.Language := 'GLSL';
field47 := TfieldNode.Create;
field47.NameField := 'cube';
field47.Type := 'SFNode';
field47.AccessType := 'inputOutput';
ComposedCubeMapTexture48 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture48 := ComposedCubeMapTexture24;
{ .AddChildren }
field47.AddChildren([ComposedCubeMapTexture48]);
{ .AddField }
ComposedShader46.Field := field47;
field49 := TfieldNode.Create;
field49.NameField := 'chromaticDispertion';
field49.AccessType := 'initializeOnly';
field49.Type := 'SFVec3f';
field49.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader46.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'bias';
field50.Type := 'SFFloat';
field50.AccessType := 'inputOnly';
field50.Value := '0.5';
{ .AddField }
ComposedShader46.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'scale';
field51.Type := 'SFFloat';
field51.AccessType := 'inputOnly';
field51.Value := '0.5';
{ .AddField }
ComposedShader46.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'power';
field52.Type := 'SFFloat';
field52.AccessType := 'inputOnly';
field52.Value := '2';
{ .AddField }
ComposedShader46.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'a';
field53.Type := 'SFFloat';
field53.AccessType := 'inputOnly';
field53.Value := '10';
{ .AddField }
ComposedShader46.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'b';
field54.Type := 'SFFloat';
field54.AccessType := 'inputOnly';
field54.Value := '1';
{ .AddField }
ComposedShader46.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'c';
field55.Type := 'SFFloat';
field55.AccessType := 'inputOnly';
field55.Value := '20';
{ .AddField }
ComposedShader46.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'd';
field56.Type := 'SFFloat';
field56.AccessType := 'inputOnly';
field56.Value := '20';
{ .AddField }
ComposedShader46.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'tdelta';
field57.Type := 'SFFloat';
field57.AccessType := 'inputOnly';
field57.Value := '0';
{ .AddField }
ComposedShader46.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'pdelta';
field58.Type := 'SFFloat';
field58.AccessType := 'inputOnly';
field58.Value := '0';
{ .AddField }
ComposedShader46.Field := field58;
ShaderPart59 := TShaderPartNode.Create;
ShaderPart59.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart59.Type := 'VERTEX';
{ .AddParts }
ComposedShader46.Parts := ShaderPart59;
ShaderPart60 := TShaderPartNode.Create;
ShaderPart60.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart60.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader46.Parts := ShaderPart60;
{ .AddShaders }
Appearance22.Shaders := ComposedShader46;
{ .SetAppearance }
Shape21.Appearance := Appearance22;
Sphere61 := TSphereNode.Create;
{ .SetGeometry }
Shape21.Geometry := Sphere61;
{ .AddChild }
Transform20.AddChildren([Shape21]);
{ .AddChildren }
Group16.AddChildren([Transform20]);
Script62 := TScriptNode.Create;
Script62.DirectOutput := True;
field63 := TfieldNode.Create;
field63.NameField := 'frontUrls';
field63.Type := 'MFString';
field63.AccessType := 'initializeOnly';
field63.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"';
{ .AddField }
Script62.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'backUrls';
field64.Type := 'MFString';
field64.AccessType := 'initializeOnly';
field64.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"';
{ .AddField }
Script62.Field := field64;
field65 := TfieldNode.Create;
field65.NameField := 'leftUrls';
field65.Type := 'MFString';
field65.AccessType := 'initializeOnly';
field65.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"';
{ .AddField }
Script62.Field := field65;
field66 := TfieldNode.Create;
field66.NameField := 'rightUrls';
field66.Type := 'MFString';
field66.AccessType := 'initializeOnly';
field66.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"';
{ .AddField }
Script62.Field := field66;
field67 := TfieldNode.Create;
field67.NameField := 'topUrls';
field67.Type := 'MFString';
field67.AccessType := 'initializeOnly';
field67.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"';
{ .AddField }
Script62.Field := field67;
field68 := TfieldNode.Create;
field68.NameField := 'bottomUrls';
field68.Type := 'MFString';
field68.AccessType := 'initializeOnly';
field68.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"';
{ .AddField }
Script62.Field := field68;
field69 := TfieldNode.Create;
field69.NameField := 'front';
field69.Type := 'MFString';
field69.AccessType := 'inputOutput';
{ .AddField }
Script62.Field := field69;
field70 := TfieldNode.Create;
field70.NameField := 'back';
field70.Type := 'MFString';
field70.AccessType := 'inputOutput';
{ .AddField }
Script62.Field := field70;
field71 := TfieldNode.Create;
field71.NameField := 'left';
field71.Type := 'MFString';
field71.AccessType := 'inputOutput';
{ .AddField }
Script62.Field := field71;
field72 := TfieldNode.Create;
field72.NameField := 'right';
field72.Type := 'MFString';
field72.AccessType := 'inputOutput';
{ .AddField }
Script62.Field := field72;
field73 := TfieldNode.Create;
field73.NameField := 'top';
field73.Type := 'MFString';
field73.AccessType := 'inputOutput';
{ .AddField }
Script62.Field := field73;
field74 := TfieldNode.Create;
field74.NameField := 'bottom';
field74.Type := 'MFString';
field74.AccessType := 'inputOutput';
{ .AddField }
Script62.Field := field74;
field75 := TfieldNode.Create;
field75.NameField := 'set_fraction';
field75.Type := 'SFFloat';
field75.AccessType := 'inputOnly';
{ .AddField }
Script62.Field := field75;
field76 := TfieldNode.Create;
field76.NameField := 'old';
field76.Type := 'SFInt32';
field76.AccessType := 'inputOutput';
field76.Value := '-1';
{ .AddField }
Script62.Field := field76;

Script62.SetSourceCode('''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }''');
{ .AddChildren }
Group16.AddChildren([Script62]);
{ <TimeSensor DEF="Clock" cycleInterval="45" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/> }
Script77 := TScriptNode.Create;
Script77.DirectOutput := True;
field78 := TfieldNode.Create;
field78.NameField := 'set_fraction';
field78.Type := 'SFFloat';
field78.AccessType := 'inputOnly';
{ .AddField }
Script77.Field := field78;
field79 := TfieldNode.Create;
field79.NameField := 'a';
field79.Type := 'SFFloat';
field79.AccessType := 'inputOutput';
field79.Value := '10';
{ .AddField }
Script77.Field := field79;
field80 := TfieldNode.Create;
field80.NameField := 'b';
field80.Type := 'SFFloat';
field80.AccessType := 'inputOutput';
field80.Value := '1';
{ .AddField }
Script77.Field := field80;
field81 := TfieldNode.Create;
field81.NameField := 'c';
field81.Type := 'SFFloat';
field81.AccessType := 'inputOutput';
field81.Value := '20';
{ .AddField }
Script77.Field := field81;
field82 := TfieldNode.Create;
field82.NameField := 'd';
field82.Type := 'SFFloat';
field82.AccessType := 'inputOutput';
field82.Value := '20';
{ .AddField }
Script77.Field := field82;
field83 := TfieldNode.Create;
field83.NameField := 'tdelta';
field83.Type := 'SFFloat';
field83.AccessType := 'inputOutput';
field83.Value := '0';
{ .AddField }
Script77.Field := field83;
field84 := TfieldNode.Create;
field84.NameField := 'pdelta';
field84.Type := 'SFFloat';
field84.AccessType := 'inputOutput';
field84.Value := '0';
{ .AddField }
Script77.Field := field84;

Script77.SetSourceCode('''ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}''');
{ .AddChildren }
Group16.AddChildren([Script77]);
TimeSensor85 := TTimeSensorNode.Create;
TimeSensor85.CycleInterval := 5;
TimeSensor85.Loop := True;
{ .AddChildren }
Group16.AddChildren([TimeSensor85]);
Group16.AddRoute(TimeSensor85.EventFraction_changed, Script77.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdA, ComposedShader46.FdA);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdB, ComposedShader46.FdB);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdC, ComposedShader46.FdC);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdD, ComposedShader46.FdD);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdPdelta, ComposedShader46.FdPdelta);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdTdelta, ComposedShader46.FdTdelta);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdA, ComposedShader31.FdA);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdB, ComposedShader31.FdB);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdC, ComposedShader31.FdC);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdD, ComposedShader31.FdD);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdPdelta, ComposedShader31.FdPdelta);
{ .AddX3DRoute }
Group16.AddRoute(Script77.FdTdelta, ComposedShader31.FdTdelta);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;
