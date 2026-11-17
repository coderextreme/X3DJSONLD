unit ballcge;

interface

uses X3DNodes;

function Createballcge: TX3DRootNode;

implementation

uses CastleVectors;

function Createballcge: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Viewpoint17: TViewpointNode;
Background18: TBackgroundNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Sphere21: TSphereNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
ComposedShader24: TComposedShaderNode;
X3DField25: TX3DField;
X3DField26: TX3DField;
ComposedCubeMapTexture27: TComposedCubeMapTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
ShaderPart37: TShaderPartNode;
ShaderPart38: TShaderPartNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Shaders'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Core'] := 1;
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d';
X3D0.Meta['title'] := 'ball.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['description'] := 'a prismatic sphere';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'ball.x3d';
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetAvatarSize([0.25,1.60000002384186,0.75]);
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Position := Vector3(0,0,12);
Viewpoint17.Description := 'Tour Views';
{ .AddChildren }
Group14.AddChildren([Viewpoint17]);
Background18 := TBackgroundNode.Create;
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .AddChildren }
Group14.AddChildren([Background18]);
Transform19 := TTransformNode.Create;
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.699999988079071,0.699999988079071,0.699999988079071);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance22.Material := Material23;
ComposedShader24 := TComposedShaderNode.Create;
ComposedShader24.Language := 'GLSL';
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'chromaticDispertion';
X3DField25.AccessType := 'initializeOnly';
X3DField25.Type := 'SFVec3f';
X3DField25.Value := '0.980000019073486 1 1.03299999237061';
{ .SetX3DField }
ComposedShader24.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'cube';
X3DField26.AccessType := 'initializeOnly';
X3DField26.Type := 'SFNode';
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
{ .SetComposedCubeMapTexture }
X3DField26.ComposedCubeMapTexture := ComposedCubeMapTexture27;
{ .AddX3DField }
ComposedShader24.X3DField := X3DField26;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'bias';
X3DField34.AccessType := 'initializeOnly';
X3DField34.Type := 'SFFloat';
X3DField34.Value := '0.5';
{ .AddX3DField }
ComposedShader24.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'scale';
X3DField35.AccessType := 'initializeOnly';
X3DField35.Type := 'SFFloat';
X3DField35.Value := '0.5';
{ .AddX3DField }
ComposedShader24.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'power';
X3DField36.AccessType := 'initializeOnly';
X3DField36.Type := 'SFFloat';
X3DField36.Value := '2';
{ .AddX3DField }
ComposedShader24.X3DField := X3DField36;
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.SetUrl(['../shaders/castle.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs']);
ShaderPart37.Type := 'VERTEX';
{ .AddParts }
ComposedShader24.Parts := ShaderPart37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
ShaderPart38.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader24.Parts := ShaderPart38;
{ .AddShaders }
Appearance22.Shaders := ComposedShader24;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group14.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;

begin
end.
