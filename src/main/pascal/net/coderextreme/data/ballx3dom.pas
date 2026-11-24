unit ballx3dom;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createballx3dom: TX3DRootNode;

implementation

uses CastleVectors;

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
SFVec3f33: TSFVec3f;
SFNode34: TSFNode;
ComposedCubeMapTexture35: TComposedCubeMapTextureNode;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
SFFloat38: TSFFloat;
ShaderPart39: TShaderPartNode;
ShaderPart40: TShaderPartNode;

procedure Initballx3domPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'ballx3dom.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a prismatic sphere';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;;
WorldInfo16 := TWorldInfoNode.Create;;
WorldInfo16.Title := 'ball.x3d';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;;
NavigationInfo17.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;;
Viewpoint18.Description := 'Tour Views';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Background19);
end;

procedure Initballx3domPart1;
begin

Transform20 := TTransformNode.Create;;
Shape21 := TShapeNode.Create;;
Sphere22 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape21.Geometry := Sphere22;
Appearance23 := TAppearanceNode.Create;;
Material24 := TMaterialNode.Create;;
Material24.DiffuseColor := Vector3(0.7,0.7,0.7);
Material24.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;;
ImageTexture26 := TImageTextureNode.Create;;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture25.FdBackTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture25.FdBottomTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture25.FdFrontTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture25.FdLeftTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture25.FdRightTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture25.FdTopTexture.Set(ImageTexture31);
end;

procedure Initballx3domPart2;
begin

{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance23.Texture := ComposedCubeMapTexture25;
ComposedShader32 := TComposedShaderNode.Create;;
ComposedShader32.Language := 'GLSL';
SFVec3f33 := TSFVec3f.CreateUndefined(ComposedShader32, false, 'chromaticDispertion');
SFVec3f33.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader32.AddSFVec3f([SFVec3f33]);
SFNode34 := TSFNode.CreateUndefined(ComposedShader32, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode34.AddComposedCubeMapTexture([ComposedCubeMapTexture25]);
{ METHOD .AddSFNode }
ComposedShader32.AddSFNode([SFNode34]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader32, false, 'bias');
SFFloat36.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader32, false, 'scale');
SFFloat37.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader32, false, 'power');
SFFloat38.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat38]);
ShaderPart39 := TShaderPartNode.Create;;
ShaderPart39.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart39.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader32.Parts := ShaderPart39;
ShaderPart40 := TShaderPartNode.Create;;
ShaderPart40.SetUrl(['../shaders/common.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart40.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader32.Parts := ShaderPart40;
{ METHOD .AddChildren }
Appearance23.AddChildren([ComposedShader32]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape21.Appearance := Appearance23;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Shape21);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Transform20);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function Createballx3dom: TX3DRootNode;
begin
Initballx3domPart0;
Initballx3domPart1;
Initballx3domPart2;
Result := X3D0;
end;

begin
end.
