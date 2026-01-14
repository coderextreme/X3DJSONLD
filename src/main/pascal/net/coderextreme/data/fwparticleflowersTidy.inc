function fwparticleflowersTidy: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
WorldInfo12: TWorldInfoNode;
NavigationInfo13: TNavigationInfoNode;
Viewpoint14: TViewpointNode;
Background15: TBackgroundNode;
Transform16: TTransformNode;
ParticleSystem17: TParticleSystemNode;
ExplosionEmitter18: TExplosionEmitterNode;
BoundedPhysicsModel19: TBoundedPhysicsModelNode;
Sphere20: TSphereNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
ComposedCubeMapTexture23: TComposedCubeMapTextureNode;
ImageTexture24: TImageTextureNode;
ImageTexture25: TImageTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ComposedShader30: TComposedShaderNode;
ShaderPart31: TShaderPartNode;
ShaderPart32: TShaderPartNode;
field33: TfieldNode;
field34: TfieldNode;
ComposedCubeMapTexture35: TComposedCubeMapTextureNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
Sphere45: TSphereNode;
Script46: TScriptNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
TimeSensor56: TTimeSensorNode;
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
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
Group11 := TGroupNode.Create;
WorldInfo12 := TWorldInfoNode.Create;
WorldInfo12.Title := 'particleflowers.x3d';
{ .AddChildren }
Group11.AddChildren([WorldInfo12]);
NavigationInfo13 := TNavigationInfoNode.Create;
NavigationInfo13.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group11.AddChildren([NavigationInfo13]);
Viewpoint14 := TViewpointNode.Create;
Viewpoint14.Description := 'Tour Views';
Viewpoint14.Position := Vector3(0,0,12);
{ .AddChildren }
Group11.AddChildren([Viewpoint14]);
Background15 := TBackgroundNode.Create;
Background15.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background15.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background15.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background15.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background15.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background15.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .AddChildren }
Group11.AddChildren([Background15]);
Transform16 := TTransformNode.Create;
ParticleSystem17 := TParticleSystemNode.Create;
ParticleSystem17.GeometryType := 'GEOMETRY';
ParticleSystem17.MaxParticles := 20;
ExplosionEmitter18 := TExplosionEmitterNode.Create;
ExplosionEmitter18.Speed := 2;
ExplosionEmitter18.Variation := 0.75;
{ .SetEmitter }
ParticleSystem17.Emitter := ExplosionEmitter18;
BoundedPhysicsModel19 := TBoundedPhysicsModelNode.Create;
Sphere20 := TSphereNode.Create;
Sphere20.Radius := 100;
{ .SetGeometry }
BoundedPhysicsModel19.Geometry := Sphere20;
{ .AddPhysics }
ParticleSystem17.Physics := BoundedPhysicsModel19;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.7,0.7,0.7);
Material22.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance21.Material := Material22;
ComposedCubeMapTexture23 := TComposedCubeMapTextureNode.Create;
ImageTexture24 := TImageTextureNode.Create;
ImageTexture24.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture23.FrontTexture := ImageTexture24;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture23.BackTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture23.LeftTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture23.RightTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture23.TopTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture23.BottomTexture := ImageTexture29;
{ .SetTexture }
Appearance21.Texture := ComposedCubeMapTexture23;
ComposedShader30 := TComposedShaderNode.Create;
ComposedShader30.Language := 'GLSL';
ShaderPart31 := TShaderPartNode.Create;
ShaderPart31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs']);
{ .AddParts }
ComposedShader30.Parts := ShaderPart31;
ShaderPart32 := TShaderPartNode.Create;
ShaderPart32.Type := 'FRAGMENT';
ShaderPart32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs']);
{ .AddParts }
ComposedShader30.Parts := ShaderPart32;
field33 := TfieldNode.Create;
field33.AccessType := 'inputOutput';
field33.Type := 'SFVec3f';
field33.NameField := 'chromaticDispertion';
field33.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader30.Field := field33;
field34 := TfieldNode.Create;
field34.AccessType := 'inputOutput';
field34.Type := 'SFNode';
field34.NameField := 'cube';
ComposedCubeMapTexture35 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture35 := ComposedCubeMapTexture23;
{ .AddChildren }
field34.AddChildren([ComposedCubeMapTexture35]);
{ .AddField }
ComposedShader30.Field := field34;
field36 := TfieldNode.Create;
field36.AccessType := 'inputOutput';
field36.Type := 'SFFloat';
field36.NameField := 'bias';
field36.Value := '0.5';
{ .AddField }
ComposedShader30.Field := field36;
field37 := TfieldNode.Create;
field37.AccessType := 'inputOutput';
field37.Type := 'SFFloat';
field37.NameField := 'scale';
field37.Value := '0.5';
{ .AddField }
ComposedShader30.Field := field37;
field38 := TfieldNode.Create;
field38.AccessType := 'inputOutput';
field38.Type := 'SFFloat';
field38.NameField := 'power';
field38.Value := '2';
{ .AddField }
ComposedShader30.Field := field38;
field39 := TfieldNode.Create;
field39.AccessType := 'inputOutput';
field39.Type := 'SFFloat';
field39.NameField := 'a';
field39.Value := '2';
{ .AddField }
ComposedShader30.Field := field39;
field40 := TfieldNode.Create;
field40.AccessType := 'inputOutput';
field40.Type := 'SFFloat';
field40.NameField := 'b';
field40.Value := '1';
{ .AddField }
ComposedShader30.Field := field40;
field41 := TfieldNode.Create;
field41.AccessType := 'inputOutput';
field41.Type := 'SFFloat';
field41.NameField := 'c';
field41.Value := '5';
{ .AddField }
ComposedShader30.Field := field41;
field42 := TfieldNode.Create;
field42.AccessType := 'inputOutput';
field42.Type := 'SFFloat';
field42.NameField := 'd';
field42.Value := '5';
{ .AddField }
ComposedShader30.Field := field42;
field43 := TfieldNode.Create;
field43.AccessType := 'inputOutput';
field43.Type := 'SFFloat';
field43.NameField := 'tdelta';
{ .AddField }
ComposedShader30.Field := field43;
field44 := TfieldNode.Create;
field44.AccessType := 'inputOutput';
field44.Type := 'SFFloat';
field44.NameField := 'pdelta';
{ .AddField }
ComposedShader30.Field := field44;
{ .AddShaders }
Appearance21.Shaders := ComposedShader30;
{ .SetAppearance }
ParticleSystem17.Appearance := Appearance21;
Sphere45 := TSphereNode.Create;
{ .SetGeometry }
ParticleSystem17.Geometry := Sphere45;
{ .AddChildren }
Transform16.AddChildren([ParticleSystem17]);
Script46 := TScriptNode.Create;
field47 := TfieldNode.Create;
field47.AccessType := 'inputOutput';
field47.Type := 'SFVec3f';
field47.NameField := 'translation';
{ .AddField }
Script46.Field := field47;
field48 := TfieldNode.Create;
field48.AccessType := 'inputOutput';
field48.Type := 'SFVec3f';
field48.NameField := 'velocity';
{ .AddField }
Script46.Field := field48;
field49 := TfieldNode.Create;
field49.AccessType := 'inputOnly';
field49.Type := 'SFFloat';
field49.NameField := 'set_fraction';
{ .AddField }
Script46.Field := field49;
field50 := TfieldNode.Create;
field50.AccessType := 'inputOutput';
field50.Type := 'SFFloat';
field50.NameField := 'a';
field50.Value := '0.5';
{ .AddField }
Script46.Field := field50;
field51 := TfieldNode.Create;
field51.AccessType := 'inputOutput';
field51.Type := 'SFFloat';
field51.NameField := 'b';
field51.Value := '0.5';
{ .AddField }
Script46.Field := field51;
field52 := TfieldNode.Create;
field52.AccessType := 'inputOutput';
field52.Type := 'SFFloat';
field52.NameField := 'c';
field52.Value := '3';
{ .AddField }
Script46.Field := field52;
field53 := TfieldNode.Create;
field53.AccessType := 'inputOutput';
field53.Type := 'SFFloat';
field53.NameField := 'd';
field53.Value := '3';
{ .AddField }
Script46.Field := field53;
field54 := TfieldNode.Create;
field54.AccessType := 'inputOutput';
field54.Type := 'SFFloat';
field54.NameField := 'tdelta';
field54.Value := '0.5';
{ .AddField }
Script46.Field := field54;
field55 := TfieldNode.Create;
field55.AccessType := 'inputOutput';
field55.Type := 'SFFloat';
field55.NameField := 'pdelta';
field55.Value := '0.5';
{ .AddField }
Script46.Field := field55;

Script46.SetSourceCode('''ecmascript:\n"+
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
Transform16.AddChildren([Script46]);
{ .AddChildren }
Group11.AddChildren([Transform16]);
TimeSensor56 := TTimeSensorNode.Create;
TimeSensor56.CycleInterval := 5;
TimeSensor56.Loop := True;
{ .AddChildren }
Group11.AddChildren([TimeSensor56]);
Group11.AddRoute(TimeSensor56.EventFraction_changed, Script46.EventSet_fraction);
{ .AddX3DRoute }
Group11.AddRoute(Script46.EventA_changed, ComposedShader30.EventSet_a);
{ .AddX3DRoute }
Group11.AddRoute(Script46.EventB_changed, ComposedShader30.EventSet_b);
{ .AddX3DRoute }
Group11.AddRoute(Script46.EventC_changed, ComposedShader30.EventSet_c);
{ .AddX3DRoute }
Group11.AddRoute(Script46.EventD_changed, ComposedShader30.EventSet_d);
{ .AddX3DRoute }
Group11.AddRoute(Script46.EventPdelta_changed, ComposedShader30.EventSet_pdelta);
{ .AddX3DRoute }
Group11.AddRoute(Script46.EventTdelta_changed, ComposedShader30.EventSet_tdelta);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
