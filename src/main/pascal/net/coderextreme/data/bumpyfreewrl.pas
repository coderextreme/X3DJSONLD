unit bumpyfreewrl;

interface

uses X3DNodes;

function Createbumpyfreewrl: TX3DRootNode;

implementation

uses CastleVectors;

function Createbumpyfreewrl: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
WorldInfo16: TWorldInfoNode;
NavigationInfo17: TNavigationInfoNode;
Viewpoint18: TViewpointNode;
Background19: TBackgroundNode;
Transform20: TTransformNode;
Shape21: TShapeNode;
Sphere22: TSphereNode;
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
X3DField33: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'bumpyfreewrl.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bumpfreewrl.x3d';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'bumpyx_ite.x3d';
{ .AddChildren }
Group15.AddChildren([WorldInfo16]);
NavigationInfo17 := TNavigationInfoNode.Create;
{ .AddChildren }
Group15.AddChildren([NavigationInfo17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Position := Vector3(0,0,40);
Viewpoint18.Description := 'Transparent rose';
{ .AddChildren }
Group15.AddChildren([Viewpoint18]);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group15.AddChildren([Background19]);
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Sphere22 := TSphereNode.Create;
Sphere22.Radius := 5;
{ .SetGeometry }
Shape21.Geometry := Sphere22;
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
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'chromaticDispertion';
X3DField33.AccessType := 'inputOnly';
X3DField33.Type := 'SFVec3f';
X3DField33.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader32.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'fw_textureCoordGenType';
X3DField34.AccessType := 'inputOnly';
X3DField34.Type := 'SFInt32';
X3DField34.Value := '0';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'bias';
X3DField35.Type := 'SFFloat';
X3DField35.AccessType := 'inputOnly';
X3DField35.Value := '0.5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'scale';
X3DField36.Type := 'SFFloat';
X3DField36.AccessType := 'inputOnly';
X3DField36.Value := '0.5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'power';
X3DField37.Type := 'SFFloat';
X3DField37.AccessType := 'inputOnly';
X3DField37.Value := '2';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'a';
X3DField38.Type := 'SFFloat';
X3DField38.AccessType := 'inputOutput';
X3DField38.Value := '10';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'b';
X3DField39.Type := 'SFFloat';
X3DField39.AccessType := 'inputOutput';
X3DField39.Value := '1';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'c';
X3DField40.Type := 'SFFloat';
X3DField40.AccessType := 'inputOutput';
X3DField40.Value := '5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'd';
X3DField41.Type := 'SFFloat';
X3DField41.AccessType := 'inputOutput';
X3DField41.Value := '5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'tdelta';
X3DField42.Type := 'SFFloat';
X3DField42.AccessType := 'inputOutput';
X3DField42.Value := '0';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'pdelta';
X3DField43.Type := 'SFFloat';
X3DField43.AccessType := 'inputOutput';
X3DField43.Value := '0';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField43;
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['../shaders/freewrl_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart44.Type := 'VERTEX';
{ .AddParts }
ComposedShader32.Parts := ShaderPart44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['../shaders/freewrl_bubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart45.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader32.Parts := ShaderPart45;
{ .AddShaders }
Appearance23.Shaders := ComposedShader32;
{ .SetAppearance }
Shape21.Appearance := Appearance23;
{ .AddChild }
Transform20.AddChildren([Shape21]);
{ .AddChildren }
Group15.AddChildren([Transform20]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;

begin
end.
