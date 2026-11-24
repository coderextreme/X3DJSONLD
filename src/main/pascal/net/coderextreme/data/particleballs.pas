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
SFVec3f35: TSFVec3f;
SFNode36: TSFNode;
ComposedCubeMapTexture37: TComposedCubeMapTextureNode;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
ShaderPart41: TShaderPartNode;
ShaderPart42: TShaderPartNode;

procedure InitparticleballsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
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
X3D0.Components['ParticleSystems'] := 3;
{ METHOD .Component }
X3D0.Meta['title'] := 'particleflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;;
WorldInfo15 := TWorldInfoNode.Create;;
WorldInfo15.Title := 'particleflowers.x3d';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;;
Background18.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background18);
end;

procedure InitparticleballsPart1;
begin

Transform19 := TTransformNode.Create;;
ParticleSystem20 := TParticleSystemNode.Create;;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
BoundedPhysicsModel21 := TBoundedPhysicsModelNode.Create;;
Sphere22 := TSphereNode.Create;;
Sphere22.Radius := 100;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
BoundedPhysicsModel21.Geometry := Sphere22;
{ METHOD .Physics }
{ METHOD.SET .Physics }
ParticleSystem20.Physics := BoundedPhysicsModel21;
ExplosionEmitter23 := TExplosionEmitterNode.Create;;
ExplosionEmitter23.Speed := 2;
ExplosionEmitter23.Variation := 0.75;
{ METHOD .Emitter }
{ METHOD.SET .Emitter }
ParticleSystem20.Emitter := ExplosionEmitter23;
{ <Shape> }
Sphere24 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
ParticleSystem20.Geometry := Sphere24;
Appearance25 := TAppearanceNode.Create;;
Material26 := TMaterialNode.Create;;
Material26.DiffuseColor := Vector3(0.7,0.7,0.7);
Material26.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;;
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture27.FdBackTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture27.FdBottomTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;;
end;

procedure InitparticleballsPart2;
begin

ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture27.FdFrontTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture27.FdLeftTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture27.FdRightTexture.Set(ImageTexture32);
ImageTexture33 := TImageTextureNode.Create;;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture27.FdTopTexture.Set(ImageTexture33);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance25.Texture := ComposedCubeMapTexture27;
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
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
ComposedShader34 := TComposedShaderNode.Create;;
ComposedShader34.Language := 'GLSL';
SFVec3f35 := TSFVec3f.CreateUndefined(ComposedShader34, false, 'chromaticDispertion');
SFVec3f35.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader34.AddSFVec3f([SFVec3f35]);
SFNode36 := TSFNode.CreateUndefined(ComposedShader34, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode36.AddComposedCubeMapTexture([ComposedCubeMapTexture27]);
{ METHOD .AddSFNode }
ComposedShader34.AddSFNode([SFNode36]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader34, false, 'bias');
SFFloat38.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader34, false, 'scale');
SFFloat39.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader34, false, 'power');
SFFloat40.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat40]);
ShaderPart41 := TShaderPartNode.Create;;
ShaderPart41.SetUrl(['../shaders/x_iteparticles.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs']);
ShaderPart41.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader34.Parts := ShaderPart41;
ShaderPart42 := TShaderPartNode.Create;;
end;

procedure InitparticleballsPart3;
begin

ShaderPart42.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs']);
ShaderPart42.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader34.Parts := ShaderPart42;
{ METHOD .AddChildren }
Appearance25.AddChildren([ComposedShader34]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
ParticleSystem20.Appearance := Appearance25;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(ParticleSystem20);
{ </Shape> }
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform19);
{ METHOD .AddGroup }
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
