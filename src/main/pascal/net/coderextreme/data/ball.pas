unit ball;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createball: TX3DRootNode;

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
  ComposedCubeMapTexture24: TComposedCubeMapTextureNode;
  ImageTexture25: TImageTextureNode;
  ImageTexture26: TImageTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ComposedShader31: TComposedShaderNode;
  FieldVal32: TSFVec3f;
  FieldVal33: TSFNode;
  FieldVal35: TSFFloat;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  ShaderPart38: TShaderPartNode;
  ShaderPart39: TShaderPartNode;

procedure InitballPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'ball.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d';
X3D0.Meta['description'] := 'a prismatic sphere';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'ball.x3d';
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0, 0, 12);
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group14.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
end;

procedure InitballPart1;
begin
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material23.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture24.X3DName := 'texture';
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture24.BackTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture24.BottomTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture24.FrontTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture24.LeftTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture24.RightTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture24.TopTexture := ImageTexture30;
Appearance22.Texture := ComposedCubeMapTexture24;
{ <ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> }
{ <ShaderProgram url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"' containerField='programs'> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> }
{ <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> }
{ <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> }
{ <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> }
{ </ShaderProgram> }
{ <ShaderProgram url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"' containerField='programs' type='FRAGMENT'/> }
{ </ProgramShader> }
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> }
{ </field> }
{ <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
end;

procedure InitballPart2;
begin
{ <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> }
{ <ShaderPart url='"../shaders/castle.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"'></ShaderPart> }
{ <ShaderPart DEF='commonfs' url='"../shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='fw_Texture_unit0' type='SFNode' accessType="initializeOnly"> }
{ <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> }
{ </field> }
{ <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> }
{ <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> }
{ <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs"'></ShaderPart> }
{ <ShaderPart USE='commonfs'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> }
{ </field> }
{ <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs"'></ShaderPart> }
{ <ShaderPart USE='commonfs'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> }
{ <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> }
{ <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> }
{ <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"'></ShaderPart> }
{ <ShaderPart USE='commonfs'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> }
end;

procedure InitballPart3;
begin
{ </field> }
{ <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"'></ShaderPart> }
{ <ShaderPart USE="commonfs"></ShaderPart> }
{ </ComposedShader> }
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := slGLSL;
FieldVal32 := TSFVec3f.Create(ComposedShader31, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader31.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TSFNode.CreateUndefined(ComposedShader31, False, 'cube');
ComposedShader31.AddCustomFieldOrEvent(FieldVal33);
FieldVal33.Value := ComposedCubeMapTexture24;
FieldVal35 := TSFFloat.Create(ComposedShader31, False, 'bias', 0.5);
ComposedShader31.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.Create(ComposedShader31, False, 'scale', 0.5);
ComposedShader31.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(ComposedShader31, False, 'power', 2);
ComposedShader31.AddCustomFieldOrEvent(FieldVal37);
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart38.ShaderType := stVertex;
ComposedShader31.FdParts.Add(ShaderPart38);
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.X3DName := 'commonfs';
ShaderPart39.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs']);
ShaderPart39.ShaderType := stFragment;
ComposedShader31.FdParts.Add(ShaderPart39);
{ <ShaderPart USE="commonfs"></ShaderPart> }
Appearance22.FdShaders.Add(ComposedShader31);
Shape20.Appearance := Appearance22;
Transform19.FdChildren.Add(Shape20);
Group14.FdChildren.Add(Transform19);
X3D0.AddChildren([Group14]);
end;

function Createball: TX3DRootNode;
begin
  InitballPart0;
  InitballPart1;
  InitballPart2;
  InitballPart3;
  Result := X3D0;
end;

begin
end.
