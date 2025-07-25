function fwparticleflowers: TX3DRootNode;
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
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
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
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/particleflowers.x3d';
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
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.Language := 'GLSL';
field35 := TfieldNode.Create;
field35.NameField := 'chromaticDispertion';
field35.AccessType := 'inputOutput';
field35.Type := 'SFVec3f';
field35.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader34.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'cube';
field36.Type := 'SFNode';
field36.AccessType := 'inputOutput';
ComposedCubeMapTexture37 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture37 := ComposedCubeMapTexture27;
{ .AddChildren }
field36.AddChildren([ComposedCubeMapTexture37]);
{ .AddField }
ComposedShader34.Field := field36;
field38 := TfieldNode.Create;
field38.NameField := 'bias';
field38.AccessType := 'inputOutput';
field38.Type := 'SFFloat';
field38.Value := '0.5';
{ .AddField }
ComposedShader34.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'scale';
field39.AccessType := 'inputOutput';
field39.Type := 'SFFloat';
field39.Value := '0.5';
{ .AddField }
ComposedShader34.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'power';
field40.AccessType := 'inputOutput';
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
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs']);
ShaderPart47.Type := 'VERTEX';
{ .AddParts }
ComposedShader34.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs']);
ShaderPart48.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader34.Parts := ShaderPart48;
{ .AddShaders }
Appearance25.Shaders := ComposedShader34;
{ .SetAppearance }
ParticleSystem20.Appearance := Appearance25;
{ .AddChildren }
Transform19.AddChildren([ParticleSystem20]);
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
Transform19.AddChildren([Script49]);
TimeSensor59 := TTimeSensorNode.Create;
TimeSensor59.CycleInterval := 5;
TimeSensor59.Loop := True;
{ .AddChildren }
Transform19.AddChildren([TimeSensor59]);
Transform19.AddRoute(TimeSensor59.EventFraction_changed, Script49.EventSet_fraction);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdA, ComposedShader34.FdA);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdB, ComposedShader34.FdB);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdC, ComposedShader34.FdC);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdD, ComposedShader34.FdD);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdPdelta, ComposedShader34.FdPdelta);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdTdelta, ComposedShader34.FdTdelta);
{ .AddX3DRoute }
{ .AddChildren }
Group14.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
