function particleflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
WorldInfo16: TWorldInfoNode;
NavigationInfo17: TNavigationInfoNode;
Viewpoint18: TViewpointNode;
Background19: TBackgroundNode;
Group20: TGroupNode;
ParticleSystem21: TParticleSystemNode;
BoundedPhysicsModel22: TBoundedPhysicsModelNode;
Sphere23: TSphereNode;
ExplosionEmitter24: TExplosionEmitterNode;
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
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
Sphere49: TSphereNode;
Script50: TScriptNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
field59: TfieldNode;
TimeSensor60: TTimeSensorNode;
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
X3D0.Meta['description'] := 'A flower particle system';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
X3D0.Meta['generator'] := 'Vim';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'particleflowers.x3d';
{ .AddChildren }
Group15.AddChildren([WorldInfo16]);
NavigationInfo17 := TNavigationInfoNode.Create;
NavigationInfo17.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group15.AddChildren([NavigationInfo17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0,0,12);
{ .AddChildren }
Group15.AddChildren([Viewpoint18]);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png','../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png','../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png','../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png','../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png','../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png','../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group15.AddChildren([Background19]);
Group20 := TGroupNode.Create;
ParticleSystem21 := TParticleSystemNode.Create;
ParticleSystem21.MaxParticles := 20;
ParticleSystem21.GeometryType := 'GEOMETRY';
BoundedPhysicsModel22 := TBoundedPhysicsModelNode.Create;
Sphere23 := TSphereNode.Create;
Sphere23.Radius := 100;
{ .SetGeometry }
BoundedPhysicsModel22.Geometry := Sphere23;
{ .AddPhysics }
ParticleSystem21.Physics := BoundedPhysicsModel22;
ExplosionEmitter24 := TExplosionEmitterNode.Create;
ExplosionEmitter24.Speed := 2;
ExplosionEmitter24.Variation := 0.75;
{ .SetEmitter }
ParticleSystem21.Emitter := ExplosionEmitter24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7,0.7,0.7);
Material26.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png','../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png','../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png','../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png','../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png','../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png','../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
{ .SetTexture }
Appearance25.Texture := ComposedCubeMapTexture27;
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
field41 := TfieldNode.Create;
field41.NameField := 'a';
field41.Type := 'SFFloat';
field41.AccessType := 'inputOutput';
field41.Value := '2';
{ .AddField }
ComposedShader34.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'b';
field42.Type := 'SFFloat';
field42.AccessType := 'inputOutput';
field42.Value := '1';
{ .AddField }
ComposedShader34.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'c';
field43.Type := 'SFFloat';
field43.AccessType := 'inputOutput';
field43.Value := '5';
{ .AddField }
ComposedShader34.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'd';
field44.Type := 'SFFloat';
field44.AccessType := 'inputOutput';
field44.Value := '5';
{ .AddField }
ComposedShader34.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'tdelta';
field45.Type := 'SFFloat';
field45.AccessType := 'inputOutput';
field45.Value := '0';
{ .AddField }
ComposedShader34.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'pdelta';
field46.Type := 'SFFloat';
field46.AccessType := 'inputOutput';
field46.Value := '0';
{ .AddField }
ComposedShader34.Field := field46;
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs','../shaders/x_ite_flower_particles.vs']);
ShaderPart47.Type := 'VERTEX';
{ .AddParts }
ComposedShader34.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs','../shaders/commonnew.fs']);
ShaderPart48.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader34.Parts := ShaderPart48;
{ .AddShaders }
Appearance25.Shaders := ComposedShader34;
{ .SetAppearance }
ParticleSystem21.Appearance := Appearance25;
Sphere49 := TSphereNode.Create;
{ .SetGeometry }
ParticleSystem21.Geometry := Sphere49;
{ .AddChildren }
Group20.AddChildren([ParticleSystem21]);
Script50 := TScriptNode.Create;
field51 := TfieldNode.Create;
field51.NameField := 'translation';
field51.AccessType := 'inputOutput';
field51.Type := 'SFVec3f';
field51.Value := '0 0 0';
{ .AddField }
Script50.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'velocity';
field52.AccessType := 'inputOutput';
field52.Type := 'SFVec3f';
field52.Value := '0 0 0';
{ .AddField }
Script50.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'set_fraction';
field53.AccessType := 'inputOnly';
field53.Type := 'SFFloat';
{ .AddField }
Script50.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'a';
field54.Type := 'SFFloat';
field54.AccessType := 'inputOutput';
field54.Value := '0.5';
{ .AddField }
Script50.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'b';
field55.Type := 'SFFloat';
field55.AccessType := 'inputOutput';
field55.Value := '0.5';
{ .AddField }
Script50.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'c';
field56.Type := 'SFFloat';
field56.AccessType := 'inputOutput';
field56.Value := '3';
{ .AddField }
Script50.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'd';
field57.Type := 'SFFloat';
field57.AccessType := 'inputOutput';
field57.Value := '3';
{ .AddField }
Script50.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'tdelta';
field58.Type := 'SFFloat';
field58.AccessType := 'inputOutput';
field58.Value := '0.5';
{ .AddField }
Script50.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'pdelta';
field59.Type := 'SFFloat';
field59.AccessType := 'inputOutput';
field59.Value := '0.5';
{ .AddField }
Script50.Field := field59;

Script50.SetSourceCode('''ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta = tdelta + 0.05;\n"+
"				pdelta = pdelta + 0.05;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}''');
{ .AddChildren }
Group20.AddChildren([Script50]);
TimeSensor60 := TTimeSensorNode.Create;
TimeSensor60.CycleInterval := 5;
TimeSensor60.Loop := True;
{ .AddChildren }
Group20.AddChildren([TimeSensor60]);
Group20.AddRoute(TimeSensor60.EventFraction_changed, Script50.EventSet_fraction);
{ .AddX3DRoute }
Group20.AddRoute(Script50.FdA, ComposedShader34.FdA);
{ .AddX3DRoute }
Group20.AddRoute(Script50.FdB, ComposedShader34.FdB);
{ .AddX3DRoute }
Group20.AddRoute(Script50.FdC, ComposedShader34.FdC);
{ .AddX3DRoute }
Group20.AddRoute(Script50.FdD, ComposedShader34.FdD);
{ .AddX3DRoute }
Group20.AddRoute(Script50.FdPdelta, ComposedShader34.FdPdelta);
{ .AddX3DRoute }
Group20.AddRoute(Script50.FdTdelta, ComposedShader34.FdTdelta);
{ .AddX3DRoute }
{ .AddChildren }
Group15.AddChildren([Group20]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;
