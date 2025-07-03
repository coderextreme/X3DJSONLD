function variationalflowers2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Viewpoint17: TViewpointNode;
Background18: TBackgroundNode;
Transform19: TTransformNode;
ParticleSystem20: TParticleSystemNode;
VariationPhysicsModel21: TVariationPhysicsModelNode;
ExplosionEmitter22: TExplosionEmitterNode;
Sphere23: TSphereNode;
Appearance24: TAppearanceNode;
Material25: TMaterialNode;
ComposedCubeMapTexture26: TComposedCubeMapTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ComposedShader33: TComposedShaderNode;
field34: TfieldNode;
field35: TfieldNode;
ComposedCubeMapTexture36: TComposedCubeMapTextureNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
ShaderPart41: TShaderPartNode;
ShaderPart42: TShaderPartNode;
Script43: TScriptNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
field48: TfieldNode;
TimeSensor49: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
X3D0.Meta['title'] := 'variationalflowers2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower variational system';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/variationalflowers2.x3d';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'variationalflowers2.x3d';
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
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group14.AddChildren([Background18]);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
{ values - array of MFFloats to pass to ComposedShader variations in values - array of MFFloats to pass to ComposedShader that varies values }
VariationPhysicsModel21 := TVariationPhysicsModelNode.Create;
VariationPhysicsModel21.Values := '2 2 5 5 0 0';
VariationPhysicsModel21.Variations := '0.2 0.1 0.3 0.3 0.01 0.01';
{ .AddVariationPhysicsModel }
ParticleSystem20.VariationPhysicsModel := VariationPhysicsModel21;
ExplosionEmitter22 := TExplosionEmitterNode.Create;
ExplosionEmitter22.Speed := 1;
ExplosionEmitter22.Variation := 0.75;
{ .SetEmitter }
ParticleSystem20.Emitter := ExplosionEmitter22;
Sphere23 := TSphereNode.Create;
{ .SetGeometry }
ParticleSystem20.Geometry := Sphere23;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0.7,0.7,0.7);
Material25.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture26.BackTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture26.BottomTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture26.FrontTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture26.LeftTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture26.RightTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture26.TopTexture := ImageTexture32;
{ .SetTexture }
Appearance24.Texture := ComposedCubeMapTexture26;
ComposedShader33 := TComposedShaderNode.Create;
ComposedShader33.Language := 'GLSL';
field34 := TfieldNode.Create;
field34.NameField := 'chromaticDispertion';
field34.AccessType := 'initializeOnly';
field34.Type := 'SFVec3f';
field34.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader33.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'cube';
field35.Type := 'SFNode';
field35.AccessType := 'initializeOnly';
ComposedCubeMapTexture36 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture36 := ComposedCubeMapTexture26;
{ .AddChildren }
field35.AddChildren([ComposedCubeMapTexture36]);
{ .AddField }
ComposedShader33.Field := field35;
field37 := TfieldNode.Create;
field37.NameField := 'bias';
field37.AccessType := 'initializeOnly';
field37.Type := 'SFFloat';
field37.Value := '0.5';
{ .AddField }
ComposedShader33.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'scale';
field38.AccessType := 'initializeOnly';
field38.Type := 'SFFloat';
field38.Value := '0.5';
{ .AddField }
ComposedShader33.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'power';
field39.AccessType := 'initializeOnly';
field39.Type := 'SFFloat';
field39.Value := '2';
{ .AddField }
ComposedShader33.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'x3d_ParticleValues';
field40.Type := 'MFFloat';
field40.AccessType := 'inputOutput';
field40.Value := '2 1 4 4 0 0';
{ .AddField }
ComposedShader33.Field := field40;
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/x_ite_variations.vs']);
ShaderPart41.Type := 'VERTEX';
{ .AddParts }
ComposedShader33.Parts := ShaderPart41;
ShaderPart42 := TShaderPartNode.Create;
ShaderPart42.SetUrl(['../shaders/commonnew.fs']);
ShaderPart42.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader33.Parts := ShaderPart42;
{ .AddShaders }
Appearance24.Shaders := ComposedShader33;
{ .SetAppearance }
ParticleSystem20.Appearance := Appearance24;
{ .AddChildren }
Transform19.AddChildren([ParticleSystem20]);
Script43 := TScriptNode.Create;
field44 := TfieldNode.Create;
field44.NameField := 'set_fraction';
field44.AccessType := 'inputOnly';
field44.Type := 'SFFloat';
{ .AddField }
Script43.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'values';
field45.Type := 'MFFloat';
field45.AccessType := 'inputOutput';
field45.Value := '2 2 5 5 0 0';
{ .AddField }
Script43.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'variations';
field46.Type := 'MFFloat';
field46.AccessType := 'inputOutput';
field46.Value := '0.2 0.1 0.3 0.3 0.01 0.01';
{ .AddField }
Script43.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'lastframe';
field47.Type := 'SFFloat';
field47.AccessType := 'inputOutput';
field47.Value := '0';
{ .AddField }
Script43.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'updaterate';
field48.Type := 'SFFloat';
field48.AccessType := 'inputOutput';
field48.Value := '0.1';
{ .AddField }
Script43.Field := field48;

Script43.SetSourceCode('''ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}''');
{ .AddChildren }
Transform19.AddChildren([Script43]);
TimeSensor49 := TTimeSensorNode.Create;
TimeSensor49.CycleInterval := 45;
TimeSensor49.Loop := True;
{ .AddChildren }
Transform19.AddChildren([TimeSensor49]);
Transform19.AddRoute(TimeSensor49.EventFraction_changed, Script43.EventSet_fraction);
{ .AddX3DRoute }
Transform19.AddRoute(Script43.FdValues, ComposedShader33.FdX3d_particlevalues);
{ .AddX3DRoute }
{ .AddChildren }
Group14.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
