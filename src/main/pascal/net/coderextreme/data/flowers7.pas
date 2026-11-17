unit flowers7;

interface

uses X3DNodes;

function Createflowers7: TX3DRootNode;

implementation

uses CastleVectors;

function Createflowers7: TX3DRootNode;
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
X3DField32: TX3DField;
ComposedCubeMapTexture33: TComposedCubeMapTextureNode;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
ShaderPart44: TShaderPartNode;
ShaderPart45: TShaderPartNode;
ComposedShader46: TComposedShaderNode;
X3DField47: TX3DField;
ComposedCubeMapTexture48: TComposedCubeMapTextureNode;
X3DField49: TX3DField;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
ShaderPart59: TShaderPartNode;
ShaderPart60: TShaderPartNode;
Sphere61: TSphereNode;
Script62: TScriptNode;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
X3DField67: TX3DField;
X3DField68: TX3DField;
X3DField69: TX3DField;
X3DField70: TX3DField;
X3DField71: TX3DField;
X3DField72: TX3DField;
X3DField73: TX3DField;
X3DField74: TX3DField;
X3DField75: TX3DField;
X3DField76: TX3DField;
Script77: TScriptNode;
X3DField78: TX3DField;
X3DField79: TX3DField;
X3DField80: TX3DField;
X3DField81: TX3DField;
X3DField82: TX3DField;
X3DField83: TX3DField;
X3DField84: TX3DField;
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
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'cube';
X3DField32.Type := 'SFNode';
X3DField32.AccessType := 'inputOutput';
ComposedCubeMapTexture33 := ComposedCubeMapTexture24;
{ .SetComposedCubeMapTexture }
X3DField32.ComposedCubeMapTexture := ComposedCubeMapTexture33;
{ .AddX3DField }
ComposedShader31.X3DField := X3DField32;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'chromaticDispertion';
X3DField34.AccessType := 'initializeOnly';
X3DField34.Type := 'SFVec3f';
X3DField34.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'bias';
X3DField35.Type := 'SFFloat';
X3DField35.AccessType := 'inputOutput';
X3DField35.Value := '0.5';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'scale';
X3DField36.Type := 'SFFloat';
X3DField36.AccessType := 'inputOutput';
X3DField36.Value := '0.5';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'power';
X3DField37.Type := 'SFFloat';
X3DField37.AccessType := 'inputOutput';
X3DField37.Value := '2';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'a';
X3DField38.Type := 'SFFloat';
X3DField38.AccessType := 'inputOutput';
X3DField38.Value := '10';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'b';
X3DField39.Type := 'SFFloat';
X3DField39.AccessType := 'inputOutput';
X3DField39.Value := '1';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'c';
X3DField40.Type := 'SFFloat';
X3DField40.AccessType := 'inputOutput';
X3DField40.Value := '20';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'd';
X3DField41.Type := 'SFFloat';
X3DField41.AccessType := 'inputOutput';
X3DField41.Value := '20';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'tdelta';
X3DField42.Type := 'SFFloat';
X3DField42.AccessType := 'inputOutput';
X3DField42.Value := '0';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'pdelta';
X3DField43.Type := 'SFFloat';
X3DField43.AccessType := 'inputOutput';
X3DField43.Value := '0';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField43;
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
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'cube';
X3DField47.Type := 'SFNode';
X3DField47.AccessType := 'inputOutput';
ComposedCubeMapTexture48 := ComposedCubeMapTexture24;
{ .SetComposedCubeMapTexture }
X3DField47.ComposedCubeMapTexture := ComposedCubeMapTexture48;
{ .SetX3DField }
ComposedShader46.X3DField := X3DField47;
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'chromaticDispertion';
X3DField49.AccessType := 'initializeOnly';
X3DField49.Type := 'SFVec3f';
X3DField49.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'bias';
X3DField50.Type := 'SFFloat';
X3DField50.AccessType := 'inputOnly';
X3DField50.Value := '0.5';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'scale';
X3DField51.Type := 'SFFloat';
X3DField51.AccessType := 'inputOnly';
X3DField51.Value := '0.5';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'power';
X3DField52.Type := 'SFFloat';
X3DField52.AccessType := 'inputOnly';
X3DField52.Value := '2';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'a';
X3DField53.Type := 'SFFloat';
X3DField53.AccessType := 'inputOnly';
X3DField53.Value := '10';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'b';
X3DField54.Type := 'SFFloat';
X3DField54.AccessType := 'inputOnly';
X3DField54.Value := '1';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'c';
X3DField55.Type := 'SFFloat';
X3DField55.AccessType := 'inputOnly';
X3DField55.Value := '20';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'd';
X3DField56.Type := 'SFFloat';
X3DField56.AccessType := 'inputOnly';
X3DField56.Value := '20';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'tdelta';
X3DField57.Type := 'SFFloat';
X3DField57.AccessType := 'inputOnly';
X3DField57.Value := '0';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'pdelta';
X3DField58.Type := 'SFFloat';
X3DField58.AccessType := 'inputOnly';
X3DField58.Value := '0';
{ .AddX3DField }
ComposedShader46.X3DField := X3DField58;
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
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'frontUrls';
X3DField63.Type := 'MFString';
X3DField63.AccessType := 'initializeOnly';
X3DField63.Value := '\'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\'';
{ .SetX3DField }
Script62.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'backUrls';
X3DField64.Type := 'MFString';
X3DField64.AccessType := 'initializeOnly';
X3DField64.Value := '\'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\'';
{ .AddX3DField }
Script62.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'leftUrls';
X3DField65.Type := 'MFString';
X3DField65.AccessType := 'initializeOnly';
X3DField65.Value := '\'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\'';
{ .AddX3DField }
Script62.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'rightUrls';
X3DField66.Type := 'MFString';
X3DField66.AccessType := 'initializeOnly';
X3DField66.Value := '\'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\'';
{ .AddX3DField }
Script62.X3DField := X3DField66;
X3DField67 := TX3DField.Create;
X3DField67.NameField := 'topUrls';
X3DField67.Type := 'MFString';
X3DField67.AccessType := 'initializeOnly';
X3DField67.Value := '\'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\'';
{ .AddX3DField }
Script62.X3DField := X3DField67;
X3DField68 := TX3DField.Create;
X3DField68.NameField := 'bottomUrls';
X3DField68.Type := 'MFString';
X3DField68.AccessType := 'initializeOnly';
X3DField68.Value := '\'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\' \'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\'';
{ .AddX3DField }
Script62.X3DField := X3DField68;
X3DField69 := TX3DField.Create;
X3DField69.NameField := 'front';
X3DField69.Type := 'MFString';
X3DField69.AccessType := 'inputOutput';
{ .AddX3DField }
Script62.X3DField := X3DField69;
X3DField70 := TX3DField.Create;
X3DField70.NameField := 'back';
X3DField70.Type := 'MFString';
X3DField70.AccessType := 'inputOutput';
{ .AddX3DField }
Script62.X3DField := X3DField70;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'left';
X3DField71.Type := 'MFString';
X3DField71.AccessType := 'inputOutput';
{ .AddX3DField }
Script62.X3DField := X3DField71;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'right';
X3DField72.Type := 'MFString';
X3DField72.AccessType := 'inputOutput';
{ .AddX3DField }
Script62.X3DField := X3DField72;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'top';
X3DField73.Type := 'MFString';
X3DField73.AccessType := 'inputOutput';
{ .AddX3DField }
Script62.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'bottom';
X3DField74.Type := 'MFString';
X3DField74.AccessType := 'inputOutput';
{ .AddX3DField }
Script62.X3DField := X3DField74;
X3DField75 := TX3DField.Create;
X3DField75.NameField := 'set_fraction';
X3DField75.Type := 'SFFloat';
X3DField75.AccessType := 'inputOnly';
{ .AddX3DField }
Script62.X3DField := X3DField75;
X3DField76 := TX3DField.Create;
X3DField76.NameField := 'old';
X3DField76.Type := 'SFInt32';
X3DField76.AccessType := 'inputOutput';
X3DField76.Value := '-1';
{ .AddX3DField }
Script62.X3DField := X3DField76;

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
X3DField78 := TX3DField.Create;
X3DField78.NameField := 'set_fraction';
X3DField78.Type := 'SFFloat';
X3DField78.AccessType := 'inputOnly';
{ .SetX3DField }
Script77.X3DField := X3DField78;
X3DField79 := TX3DField.Create;
X3DField79.NameField := 'a';
X3DField79.Type := 'SFFloat';
X3DField79.AccessType := 'inputOutput';
X3DField79.Value := '10';
{ .AddX3DField }
Script77.X3DField := X3DField79;
X3DField80 := TX3DField.Create;
X3DField80.NameField := 'b';
X3DField80.Type := 'SFFloat';
X3DField80.AccessType := 'inputOutput';
X3DField80.Value := '1';
{ .AddX3DField }
Script77.X3DField := X3DField80;
X3DField81 := TX3DField.Create;
X3DField81.NameField := 'c';
X3DField81.Type := 'SFFloat';
X3DField81.AccessType := 'inputOutput';
X3DField81.Value := '20';
{ .AddX3DField }
Script77.X3DField := X3DField81;
X3DField82 := TX3DField.Create;
X3DField82.NameField := 'd';
X3DField82.Type := 'SFFloat';
X3DField82.AccessType := 'inputOutput';
X3DField82.Value := '20';
{ .AddX3DField }
Script77.X3DField := X3DField82;
X3DField83 := TX3DField.Create;
X3DField83.NameField := 'tdelta';
X3DField83.Type := 'SFFloat';
X3DField83.AccessType := 'inputOutput';
X3DField83.Value := '0';
{ .AddX3DField }
Script77.X3DField := X3DField83;
X3DField84 := TX3DField.Create;
X3DField84.NameField := 'pdelta';
X3DField84.Type := 'SFFloat';
X3DField84.AccessType := 'inputOutput';
X3DField84.Value := '0';
{ .AddX3DField }
Script77.X3DField := X3DField84;

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

begin
end.
