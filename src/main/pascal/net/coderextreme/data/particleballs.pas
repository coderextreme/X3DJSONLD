unit particleballs;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createparticleballs: TX3DRootNode;

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
  ParticleSystem20: TParticleSystemNode;
  BoundedPhysicsModel21: TBoundedPhysicsModelNode;
  Sphere22: TSphereNode;
  ExplosionEmitter23: TExplosionEmitterNode;
  Sphere24: TSphereNode;
  Appearance25: TAppearanceNode;
  Material26: TMaterialNode;
  ComposedCubeMapTexture27: TComposedCubeMapTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ImageTexture32: TImageTextureNode;
  ImageTexture33: TImageTextureNode;
  ComposedShader34: TComposedShaderNode;
  FieldVal35: TSFVec3f;
  FieldVal36: TSFNode;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  ShaderPart41: TShaderPartNode;
  ShaderPart42: TShaderPartNode;

procedure InitparticleballsPart0;
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
X3D0.Components['ParticleSystems'] := 3;
X3D0.Meta['title'] := 'particleflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'particleflowers.x3d';
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0, 0, 12);
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group14.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
BoundedPhysicsModel21 := TBoundedPhysicsModelNode.Create;
end;

procedure InitparticleballsPart1;
begin
Sphere22 := TSphereNode.Create;
Sphere22.Radius := 100;
BoundedPhysicsModel21.Geometry := Sphere22;
ParticleSystem20.Physics := BoundedPhysicsModel21;
ExplosionEmitter23 := TExplosionEmitterNode.Create;
ExplosionEmitter23.Speed := 2;
ExplosionEmitter23.Variation := 0.75;
ParticleSystem20.Emitter := ExplosionEmitter23;
{ <Shape> }
Sphere24 := TSphereNode.Create;
ParticleSystem20.Geometry := Sphere24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material26.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture27.X3DName := 'texture';
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture27.FdBackTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture27.FdBottomTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture27.FdFrontTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture27.FdLeftTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture27.FdRightTexture.Set(ImageTexture32);
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture27.FdTopTexture.Set(ImageTexture33);
Appearance25.Texture := ComposedCubeMapTexture27;
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
end;

procedure InitparticleballsPart2;
begin
{ <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> }
{ </field> }
{ <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF="shader" language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"'/> }
{ <ShaderPart type='FRAGMENT' url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"'/> }
{ </ComposedShader> }
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.Language := 'GLSL';
FieldVal35 := TSFVec3f.Create(ComposedShader34, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader34.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFNode.CreateUndefined(ComposedShader34, False, 'cube');
ComposedShader34.AddCustomFieldOrEvent(FieldVal36);
FieldVal36.Value := ComposedCubeMapTexture27;
FieldVal38 := TSFFloat.Create(ComposedShader34, False, 'bias', 0.5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader34, False, 'scale', 0.5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader34, False, 'power', 2);
ComposedShader34.AddCustomFieldOrEvent(FieldVal40);
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/x_iteparticles.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs']);
ShaderPart41.FdType.Value := 'VERTEX';
ComposedShader34.Parts := ShaderPart41;
ShaderPart42 := TShaderPartNode.Create;
ShaderPart42.X3DName := 'commonfs';
ShaderPart42.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs']);
ShaderPart42.FdType.Value := 'FRAGMENT';
ComposedShader34.Parts := ShaderPart42;
Appearance25.AddChildren([ComposedShader34]);
end;

procedure InitparticleballsPart3;
begin
ParticleSystem20.Appearance := Appearance25;
Transform19.FdChildren.Add(ParticleSystem20);
{ </Shape> }
Group14.FdChildren.Add(Transform19);
X3D0.AddChildren([Group14]);
end;

function Createparticleballs: TX3DRootNode;
begin
  InitparticleballsPart0;
  InitparticleballsPart1;
  InitparticleballsPart2;
  InitparticleballsPart3;
  Result := X3D0;
end;

begin
end.
