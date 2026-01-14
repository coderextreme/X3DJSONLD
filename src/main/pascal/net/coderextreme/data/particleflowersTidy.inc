function particleflowersTidy: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group12: TGroupNode;
WorldInfo13: TWorldInfoNode;
NavigationInfo14: TNavigationInfoNode;
Viewpoint15: TViewpointNode;
Background16: TBackgroundNode;
Group17: TGroupNode;
ParticleSystem18: TParticleSystemNode;
ExplosionEmitter19: TExplosionEmitterNode;
BoundedPhysicsModel20: TBoundedPhysicsModelNode;
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
ShaderPart32: TShaderPartNode;
ShaderPart33: TShaderPartNode;
field34: TfieldNode;
field35: TfieldNode;
ComposedCubeMapTexture36: TComposedCubeMapTextureNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
Sphere46: TSphereNode;
Script47: TScriptNode;
field48: TfieldNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
TimeSensor57: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['ParticleSystems'] := 3;
X3D0.Meta['title'] := 'particleflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower particle system';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
X3D0.Meta['generator'] := 'Vim';
Group12 := TGroupNode.Create;
WorldInfo13 := TWorldInfoNode.Create;
WorldInfo13.Title := 'particleflowers.x3d';
{ .AddChildren }
Group12.AddChildren([WorldInfo13]);
NavigationInfo14 := TNavigationInfoNode.Create;
NavigationInfo14.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group12.AddChildren([NavigationInfo14]);
Viewpoint15 := TViewpointNode.Create;
Viewpoint15.Description := 'Tour Views';
Viewpoint15.Position := Vector3(0,0,12);
{ .AddChildren }
Group12.AddChildren([Viewpoint15]);
Background16 := TBackgroundNode.Create;
Background16.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png','../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background16.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png','../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background16.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png','../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background16.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png','../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background16.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png','../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background16.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png','../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .AddChildren }
Group12.AddChildren([Background16]);
Group17 := TGroupNode.Create;
ParticleSystem18 := TParticleSystemNode.Create;
ParticleSystem18.GeometryType := 'GEOMETRY';
ParticleSystem18.MaxParticles := 20;
ExplosionEmitter19 := TExplosionEmitterNode.Create;
ExplosionEmitter19.Speed := 2;
ExplosionEmitter19.Variation := 0.75;
{ .SetEmitter }
ParticleSystem18.Emitter := ExplosionEmitter19;
BoundedPhysicsModel20 := TBoundedPhysicsModelNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 100;
{ .SetGeometry }
BoundedPhysicsModel20.Geometry := Sphere21;
{ .AddPhysics }
ParticleSystem18.Physics := BoundedPhysicsModel20;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png','../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture24.FrontTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png','../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture24.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png','../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture24.LeftTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png','../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture24.RightTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png','../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture24.TopTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png','../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture24.BottomTexture := ImageTexture30;
{ .SetTexture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
ShaderPart32 := TShaderPartNode.Create;
ShaderPart32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs','../shaders/x_ite_flower_particles.vs']);
{ .AddParts }
ComposedShader31.Parts := ShaderPart32;
ShaderPart33 := TShaderPartNode.Create;
ShaderPart33.Type := 'FRAGMENT';
ShaderPart33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs','../shaders/commonnew.fs']);
{ .AddParts }
ComposedShader31.Parts := ShaderPart33;
field34 := TfieldNode.Create;
field34.AccessType := 'initializeOnly';
field34.Type := 'SFVec3f';
field34.NameField := 'chromaticDispertion';
field34.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader31.Field := field34;
field35 := TfieldNode.Create;
field35.AccessType := 'initializeOnly';
field35.Type := 'SFNode';
field35.NameField := 'cube';
ComposedCubeMapTexture36 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture36 := ComposedCubeMapTexture24;
{ .AddChildren }
field35.AddChildren([ComposedCubeMapTexture36]);
{ .AddField }
ComposedShader31.Field := field35;
field37 := TfieldNode.Create;
field37.AccessType := 'initializeOnly';
field37.Type := 'SFFloat';
field37.NameField := 'bias';
field37.Value := '0.5';
{ .AddField }
ComposedShader31.Field := field37;
field38 := TfieldNode.Create;
field38.AccessType := 'initializeOnly';
field38.Type := 'SFFloat';
field38.NameField := 'scale';
field38.Value := '0.5';
{ .AddField }
ComposedShader31.Field := field38;
field39 := TfieldNode.Create;
field39.AccessType := 'initializeOnly';
field39.Type := 'SFFloat';
field39.NameField := 'power';
field39.Value := '2';
{ .AddField }
ComposedShader31.Field := field39;
field40 := TfieldNode.Create;
field40.AccessType := 'inputOutput';
field40.Type := 'SFFloat';
field40.NameField := 'a';
field40.Value := '2';
{ .AddField }
ComposedShader31.Field := field40;
field41 := TfieldNode.Create;
field41.AccessType := 'inputOutput';
field41.Type := 'SFFloat';
field41.NameField := 'b';
field41.Value := '1';
{ .AddField }
ComposedShader31.Field := field41;
field42 := TfieldNode.Create;
field42.AccessType := 'inputOutput';
field42.Type := 'SFFloat';
field42.NameField := 'c';
field42.Value := '5';
{ .AddField }
ComposedShader31.Field := field42;
field43 := TfieldNode.Create;
field43.AccessType := 'inputOutput';
field43.Type := 'SFFloat';
field43.NameField := 'd';
field43.Value := '5';
{ .AddField }
ComposedShader31.Field := field43;
field44 := TfieldNode.Create;
field44.AccessType := 'inputOutput';
field44.Type := 'SFFloat';
field44.NameField := 'tdelta';
{ .AddField }
ComposedShader31.Field := field44;
field45 := TfieldNode.Create;
field45.AccessType := 'inputOutput';
field45.Type := 'SFFloat';
field45.NameField := 'pdelta';
{ .AddField }
ComposedShader31.Field := field45;
{ .AddShaders }
Appearance22.Shaders := ComposedShader31;
{ .SetAppearance }
ParticleSystem18.Appearance := Appearance22;
Sphere46 := TSphereNode.Create;
{ .SetGeometry }
ParticleSystem18.Geometry := Sphere46;
{ .AddChildren }
Group17.AddChildren([ParticleSystem18]);
Script47 := TScriptNode.Create;
field48 := TfieldNode.Create;
field48.AccessType := 'inputOutput';
field48.Type := 'SFVec3f';
field48.NameField := 'translation';
{ .AddField }
Script47.Field := field48;
field49 := TfieldNode.Create;
field49.AccessType := 'inputOutput';
field49.Type := 'SFVec3f';
field49.NameField := 'velocity';
{ .AddField }
Script47.Field := field49;
field50 := TfieldNode.Create;
field50.AccessType := 'inputOnly';
field50.Type := 'SFFloat';
field50.NameField := 'set_fraction';
{ .AddField }
Script47.Field := field50;
field51 := TfieldNode.Create;
field51.AccessType := 'inputOutput';
field51.Type := 'SFFloat';
field51.NameField := 'a';
field51.Value := '0.5';
{ .AddField }
Script47.Field := field51;
field52 := TfieldNode.Create;
field52.AccessType := 'inputOutput';
field52.Type := 'SFFloat';
field52.NameField := 'b';
field52.Value := '0.5';
{ .AddField }
Script47.Field := field52;
field53 := TfieldNode.Create;
field53.AccessType := 'inputOutput';
field53.Type := 'SFFloat';
field53.NameField := 'c';
field53.Value := '3';
{ .AddField }
Script47.Field := field53;
field54 := TfieldNode.Create;
field54.AccessType := 'inputOutput';
field54.Type := 'SFFloat';
field54.NameField := 'd';
field54.Value := '3';
{ .AddField }
Script47.Field := field54;
field55 := TfieldNode.Create;
field55.AccessType := 'inputOutput';
field55.Type := 'SFFloat';
field55.NameField := 'tdelta';
field55.Value := '0.5';
{ .AddField }
Script47.Field := field55;
field56 := TfieldNode.Create;
field56.AccessType := 'inputOutput';
field56.Type := 'SFFloat';
field56.NameField := 'pdelta';
field56.Value := '0.5';
{ .AddField }
Script47.Field := field56;

Script47.SetSourceCode('''ecmascript:\n"+
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
Group17.AddChildren([Script47]);
TimeSensor57 := TTimeSensorNode.Create;
TimeSensor57.CycleInterval := 5;
TimeSensor57.Loop := True;
{ .AddChildren }
Group17.AddChildren([TimeSensor57]);
{ .AddChildren }
Group12.AddChildren([Group17]);
Group12.AddRoute(TimeSensor57.EventFraction_changed, Script47.EventSet_fraction);
{ .AddX3DRoute }
Group12.AddRoute(Script47.EventA_changed, ComposedShader31.EventSet_a);
{ .AddX3DRoute }
Group12.AddRoute(Script47.EventB_changed, ComposedShader31.EventSet_b);
{ .AddX3DRoute }
Group12.AddRoute(Script47.EventC_changed, ComposedShader31.EventSet_c);
{ .AddX3DRoute }
Group12.AddRoute(Script47.EventD_changed, ComposedShader31.EventSet_d);
{ .AddX3DRoute }
Group12.AddRoute(Script47.EventPdelta_changed, ComposedShader31.EventSet_pdelta);
{ .AddX3DRoute }
Group12.AddRoute(Script47.EventTdelta_changed, ComposedShader31.EventSet_tdelta);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group12]);
Result := X3D0;
end;
