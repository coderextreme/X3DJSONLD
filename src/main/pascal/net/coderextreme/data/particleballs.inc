function particleballs: TX3DRootNode;
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
field35: TfieldNode;
field36: TfieldNode;
ComposedCubeMapTexture37: TComposedCubeMapTextureNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
ShaderPart41: TShaderPartNode;
ShaderPart42: TShaderPartNode;
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
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0,0,12);
{ .AddChildren }
Group14.AddChildren([Viewpoint17]);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group14.AddChildren([Background18]);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
BoundedPhysicsModel21 := TBoundedPhysicsModelNode.Create;
Sphere22 := TSphereNode.Create;
Sphere22.Radius := 100;
{ .SetGeometry }
BoundedPhysicsModel21.Geometry := Sphere22;
{ .AddPhysics }
ParticleSystem20.Physics := BoundedPhysicsModel21;
ExplosionEmitter23 := TExplosionEmitterNode.Create;
ExplosionEmitter23.Speed := 2;
ExplosionEmitter23.Variation := 0.75;
{ .SetEmitter }
ParticleSystem20.Emitter := ExplosionEmitter23;
{ <Shape> }
Sphere24 := TSphereNode.Create;
{ .SetGeometry }
ParticleSystem20.Geometry := Sphere24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7,0.7,0.7);
Material26.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
{ .SetTexture }
Appearance25.Texture := ComposedCubeMapTexture27;
{ <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"'></ShaderPart> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader> }
{ <ComposedShader DEF="shader" language="GLSL"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"'/> <ShaderPart type='FRAGMENT' url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"'/> </ComposedShader> }
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.Language := 'GLSL';
field35 := TfieldNode.Create;
field35.NameField := 'chromaticDispertion';
field35.AccessType := 'initializeOnly';
field35.Type := 'SFVec3f';
field35.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader34.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'cube';
field36.Type := 'SFNode';
field36.AccessType := 'initializeOnly';
ComposedCubeMapTexture37 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture37 := ComposedCubeMapTexture27;
{ .AddChildren }
field36.AddChildren([ComposedCubeMapTexture37]);
{ .AddField }
ComposedShader34.Field := field36;
field38 := TfieldNode.Create;
field38.NameField := 'bias';
field38.AccessType := 'initializeOnly';
field38.Type := 'SFFloat';
field38.Value := '0.5';
{ .AddField }
ComposedShader34.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'scale';
field39.AccessType := 'initializeOnly';
field39.Type := 'SFFloat';
field39.Value := '0.5';
{ .AddField }
ComposedShader34.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'power';
field40.AccessType := 'initializeOnly';
field40.Type := 'SFFloat';
field40.Value := '2';
{ .AddField }
ComposedShader34.Field := field40;
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/x_iteparticles.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs']);
ShaderPart41.Type := 'VERTEX';
{ .AddParts }
ComposedShader34.Parts := ShaderPart41;
ShaderPart42 := TShaderPartNode.Create;
ShaderPart42.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs']);
ShaderPart42.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader34.Parts := ShaderPart42;
{ .AddShaders }
Appearance25.Shaders := ComposedShader34;
{ .SetAppearance }
ParticleSystem20.Appearance := Appearance25;
{ .AddChildren }
Transform19.AddChildren([ParticleSystem20]);
{ </Shape> }
{ .AddChildren }
Group14.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
