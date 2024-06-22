function particleflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Viewpoint17: TViewpointNode;
Background18: TBackgroundNode;
Group19: TGroupNode;
ParticleSystem20: TParticleSystemNode;
BoundedPhysicsModel21: TBoundedPhysicsModelNode;
Sphere22: TSphereNode;
ExplosionEmitter23: TExplosionEmitterNode;
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
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
ShaderPart46: TShaderPartNode;
ShaderPart47: TShaderPartNode;
Sphere48: TSphereNode;
Script49: TScriptNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
TimeSensor59: TTimeSensorNode;
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
Background18.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png','../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png','../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png','../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png','../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png','../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png','../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group14.AddChildren([Background18]);
Group19 := TGroupNode.Create;
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
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0.7,0.7,0.7);
Material25.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png','../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture26.BackTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png','../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture26.BottomTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png','../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture26.FrontTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png','../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture26.LeftTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png','../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture26.RightTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png','../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
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
field40.NameField := 'a';
field40.Type := 'SFFloat';
field40.AccessType := 'inputOutput';
field40.Value := '2';
{ .AddField }
ComposedShader33.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'b';
field41.Type := 'SFFloat';
field41.AccessType := 'inputOutput';
field41.Value := '1';
{ .AddField }
ComposedShader33.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'c';
field42.Type := 'SFFloat';
field42.AccessType := 'inputOutput';
field42.Value := '5';
{ .AddField }
ComposedShader33.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'd';
field43.Type := 'SFFloat';
field43.AccessType := 'inputOutput';
field43.Value := '5';
{ .AddField }
ComposedShader33.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'tdelta';
field44.Type := 'SFFloat';
field44.AccessType := 'inputOutput';
field44.Value := '0';
{ .AddField }
ComposedShader33.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'pdelta';
field45.Type := 'SFFloat';
field45.AccessType := 'inputOutput';
field45.Value := '0';
{ .AddField }
ComposedShader33.Field := field45;
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs','../shaders/x_ite_flower_particles.vs']);
ShaderPart46.Type := 'VERTEX';
{ .AddParts }
ComposedShader33.Parts := ShaderPart46;
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs','../shaders/commonnew.fs']);
ShaderPart47.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader33.Parts := ShaderPart47;
{ .AddShaders }
Appearance24.Shaders := ComposedShader33;
{ .SetAppearance }
ParticleSystem20.Appearance := Appearance24;
Sphere48 := TSphereNode.Create;
{ .SetGeometry }
ParticleSystem20.Geometry := Sphere48;
{ .AddChildren }
Group19.AddChildren([ParticleSystem20]);
Script49 := TScriptNode.Create;
field50 := TfieldNode.Create;
field50.NameField := 'translation';
field50.AccessType := 'inputOutput';
field50.Type := 'SFVec3f';
field50.Value := '0 0 0';
{ .AddField }
Script49.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'velocity';
field51.AccessType := 'inputOutput';
field51.Type := 'SFVec3f';
field51.Value := '0 0 0';
{ .AddField }
Script49.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'set_fraction';
field52.AccessType := 'inputOnly';
field52.Type := 'SFFloat';
{ .AddField }
Script49.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'a';
field53.Type := 'SFFloat';
field53.AccessType := 'inputOutput';
field53.Value := '0.5';
{ .AddField }
Script49.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'b';
field54.Type := 'SFFloat';
field54.AccessType := 'inputOutput';
field54.Value := '0.5';
{ .AddField }
Script49.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'c';
field55.Type := 'SFFloat';
field55.AccessType := 'inputOutput';
field55.Value := '3';
{ .AddField }
Script49.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'd';
field56.Type := 'SFFloat';
field56.AccessType := 'inputOutput';
field56.Value := '3';
{ .AddField }
Script49.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'tdelta';
field57.Type := 'SFFloat';
field57.AccessType := 'inputOutput';
field57.Value := '0.5';
{ .AddField }
Script49.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'pdelta';
field58.Type := 'SFFloat';
field58.AccessType := 'inputOutput';
field58.Value := '0.5';
{ .AddField }
Script49.Field := field58;

Script49.SetSourceCode('''ecmascript:\n"+
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
Group19.AddChildren([Script49]);
TimeSensor59 := TTimeSensorNode.Create;
TimeSensor59.CycleInterval := 5;
TimeSensor59.Loop := True;
{ .AddChildren }
Group19.AddChildren([TimeSensor59]);
Group19.AddRoute(TimeSensor59.EventFraction_changed, Script49.EventSet_fraction);
{ .AddX3DRoute }
Group19.AddRoute(Script49.FdA, ComposedShader33.FdA);
{ .AddX3DRoute }
Group19.AddRoute(Script49.FdB, ComposedShader33.FdB);
{ .AddX3DRoute }
Group19.AddRoute(Script49.FdC, ComposedShader33.FdC);
{ .AddX3DRoute }
Group19.AddRoute(Script49.FdD, ComposedShader33.FdD);
{ .AddX3DRoute }
Group19.AddRoute(Script49.FdPdelta, ComposedShader33.FdPdelta);
{ .AddX3DRoute }
Group19.AddRoute(Script49.FdTdelta, ComposedShader33.FdTdelta);
{ .AddX3DRoute }
{ .AddChildren }
Group14.AddChildren([Group19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
