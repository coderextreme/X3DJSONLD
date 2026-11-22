unit ballcge;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createballcge: TX3DRootNode;

implementation

uses CastleVectors;

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
SFVec3f25: TSFVec3f;
SFNode26: TSFNode;
ComposedCubeMapTexture27: TComposedCubeMapTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
SFFloat34: TSFFloat;
SFFloat35: TSFFloat;
SFFloat36: TSFFloat;
ShaderPart37: TShaderPartNode;
ShaderPart38: TShaderPartNode;

procedure InitballcgePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d';
{ METHOD .Meta }
X3D0.Meta['title'] := 'ball.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a prismatic sphere';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'ball.x3d';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetAvatarSize([0.25,1.60000002384186,0.75]);
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Position := Vector3(0,0,12);
Viewpoint17.Description := 'Tour Views';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
{ METHOD .Geometry }
Shape20.Geometry := Sphere21;
end;

procedure InitballcgePart1;
begin

Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.699999988079071,0.699999988079071,0.699999988079071);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
ComposedShader24 := TComposedShaderNode.Create;
ComposedShader24.Language := 'GLSL';
SFVec3f25 := TSFVec3f.CreateUndefined(ComposedShader24, false, 'chromaticDispertion');
SFVec3f25.Value := '0.980000019073486 1 1.03299999237061';
{ METHOD .AddSFVec3f }
ComposedShader24.AddSFVec3f([SFVec3f25]);
SFNode26 := TSFNode.CreateUndefined(ComposedShader24, false, 'cube');
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
{ METHOD .AddComposedCubeMapTexture }
SFNode26.AddComposedCubeMapTexture([ComposedCubeMapTexture27]);
{ METHOD .AddSFNode }
ComposedShader24.AddSFNode([SFNode26]);
SFFloat34 := TSFFloat.CreateUndefined(ComposedShader24, false, 'bias');
SFFloat34.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader24.AddSFFloat([SFFloat34]);
SFFloat35 := TSFFloat.CreateUndefined(ComposedShader24, false, 'scale');
SFFloat35.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader24.AddSFFloat([SFFloat35]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader24, false, 'power');
SFFloat36.Value := '2';
end;

procedure InitballcgePart2;
begin

{ METHOD .AddSFFloat }
ComposedShader24.AddSFFloat([SFFloat36]);
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.SetUrl(['../shaders/castle.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs']);
ShaderPart37.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader24.Parts := ShaderPart37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
ShaderPart38.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader24.Parts := ShaderPart38;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader24]);
{ METHOD .Appearance }
Shape20.Appearance := Appearance22;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform19);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function Createballcge: TX3DRootNode;
begin
InitballcgePart0;
InitballcgePart1;
InitballcgePart2;
Result := X3D0;
end;

begin
end.
