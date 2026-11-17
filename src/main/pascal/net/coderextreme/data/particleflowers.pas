unit particleflowers;

interface

uses X3DNodes;

function Createparticleflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createparticleflowers: TX3DRootNode;
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
X3DField35: TX3DField;
X3DField36: TX3DField;
ComposedCubeMapTexture37: TComposedCubeMapTextureNode;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
Sphere49: TSphereNode;
Script50: TScriptNode;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
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
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'chromaticDispertion';
X3DField35.AccessType := 'initializeOnly';
X3DField35.Type := 'SFVec3f';
X3DField35.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader34.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'cube';
X3DField36.Type := 'SFNode';
X3DField36.AccessType := 'initializeOnly';
ComposedCubeMapTexture37 := ComposedCubeMapTexture27;
{ .SetComposedCubeMapTexture }
X3DField36.ComposedCubeMapTexture := ComposedCubeMapTexture37;
{ .AddX3DField }
ComposedShader34.X3DField := X3DField36;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'bias';
X3DField38.AccessType := 'initializeOnly';
X3DField38.Type := 'SFFloat';
X3DField38.Value := '0.5';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'scale';
X3DField39.AccessType := 'initializeOnly';
X3DField39.Type := 'SFFloat';
X3DField39.Value := '0.5';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'power';
X3DField40.AccessType := 'initializeOnly';
X3DField40.Type := 'SFFloat';
X3DField40.Value := '2';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'a';
X3DField41.Type := 'SFFloat';
X3DField41.AccessType := 'inputOutput';
X3DField41.Value := '2';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'b';
X3DField42.Type := 'SFFloat';
X3DField42.AccessType := 'inputOutput';
X3DField42.Value := '1';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'c';
X3DField43.Type := 'SFFloat';
X3DField43.AccessType := 'inputOutput';
X3DField43.Value := '5';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'd';
X3DField44.Type := 'SFFloat';
X3DField44.AccessType := 'inputOutput';
X3DField44.Value := '5';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'tdelta';
X3DField45.Type := 'SFFloat';
X3DField45.AccessType := 'inputOutput';
X3DField45.Value := '0';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'pdelta';
X3DField46.Type := 'SFFloat';
X3DField46.AccessType := 'inputOutput';
X3DField46.Value := '0';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField46;
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
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'translation';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'SFVec3f';
X3DField51.Value := '0 0 0';
{ .SetX3DField }
Script50.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'velocity';
X3DField52.AccessType := 'inputOutput';
X3DField52.Type := 'SFVec3f';
X3DField52.Value := '0 0 0';
{ .AddX3DField }
Script50.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'set_fraction';
X3DField53.AccessType := 'inputOnly';
X3DField53.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'a';
X3DField54.Type := 'SFFloat';
X3DField54.AccessType := 'inputOutput';
X3DField54.Value := '0.5';
{ .AddX3DField }
Script50.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'b';
X3DField55.Type := 'SFFloat';
X3DField55.AccessType := 'inputOutput';
X3DField55.Value := '0.5';
{ .AddX3DField }
Script50.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'c';
X3DField56.Type := 'SFFloat';
X3DField56.AccessType := 'inputOutput';
X3DField56.Value := '3';
{ .AddX3DField }
Script50.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'd';
X3DField57.Type := 'SFFloat';
X3DField57.AccessType := 'inputOutput';
X3DField57.Value := '3';
{ .AddX3DField }
Script50.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'tdelta';
X3DField58.Type := 'SFFloat';
X3DField58.AccessType := 'inputOutput';
X3DField58.Value := '0.5';
{ .AddX3DField }
Script50.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'pdelta';
X3DField59.Type := 'SFFloat';
X3DField59.AccessType := 'inputOutput';
X3DField59.Value := '0.5';
{ .AddX3DField }
Script50.X3DField := X3DField59;

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

begin
end.
