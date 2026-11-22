unit particleflowers;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createparticleflowers: TX3DRootNode;

implementation

uses CastleVectors;

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
SFVec3f35: TSFVec3f;
SFNode36: TSFNode;
ComposedCubeMapTexture37: TComposedCubeMapTextureNode;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
SFFloat46: TSFFloat;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
Sphere49: TSphereNode;
Script50: TScriptNode;
SFVec3f51: TSFVec3f;
SFVec3f52: TSFVec3f;
SFFloat53: TSFFloat;
SFFloat54: TSFFloat;
SFFloat55: TSFFloat;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
SFFloat58: TSFFloat;
SFFloat59: TSFFloat;
TimeSensor60: TTimeSensorNode;

procedure InitparticleflowersPart0;
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
X3D0.Meta['description'] := 'A flower particle system';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vim';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'particleflowers.x3d';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;
NavigationInfo17.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png','../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png','../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png','../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png','../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png','../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png','../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Background19);
Group20 := TGroupNode.Create;
ParticleSystem21 := TParticleSystemNode.Create;
ParticleSystem21.MaxParticles := 20;
ParticleSystem21.GeometryType := 'GEOMETRY';
end;

procedure InitparticleflowersPart1;
begin

BoundedPhysicsModel22 := TBoundedPhysicsModelNode.Create;
Sphere23 := TSphereNode.Create;
Sphere23.Radius := 100;
{ METHOD .Geometry }
BoundedPhysicsModel22.Geometry := Sphere23;
{ METHOD .Physics }
ParticleSystem21.Physics := BoundedPhysicsModel22;
ExplosionEmitter24 := TExplosionEmitterNode.Create;
ExplosionEmitter24.Speed := 2;
ExplosionEmitter24.Variation := 0.75;
{ METHOD .Emitter }
ParticleSystem21.Emitter := ExplosionEmitter24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7,0.7,0.7);
Material26.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png','../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png','../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png','../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png','../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png','../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png','../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
{ METHOD .Texture }
Appearance25.Texture := ComposedCubeMapTexture27;
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.Language := 'GLSL';
SFVec3f35 := TSFVec3f.CreateUndefined(ComposedShader34, false, 'chromaticDispertion');
SFVec3f35.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader34.AddSFVec3f([SFVec3f35]);
SFNode36 := TSFNode.CreateUndefined(ComposedShader34, false, 'cube');
end;

procedure InitparticleflowersPart2;
begin

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
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader34, false, 'a');
SFFloat41.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader34, false, 'b');
SFFloat42.Value := '1';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat42]);
SFFloat43 := TSFFloat.CreateUndefined(ComposedShader34, false, 'c');
SFFloat43.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat43]);
SFFloat44 := TSFFloat.CreateUndefined(ComposedShader34, false, 'd');
SFFloat44.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat44]);
SFFloat45 := TSFFloat.CreateUndefined(ComposedShader34, false, 'tdelta');
SFFloat45.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat45]);
SFFloat46 := TSFFloat.CreateUndefined(ComposedShader34, false, 'pdelta');
SFFloat46.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat46]);
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs','../shaders/x_ite_flower_particles.vs']);
ShaderPart47.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader34.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs','../shaders/commonnew.fs']);
ShaderPart48.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader34.Parts := ShaderPart48;
{ METHOD .AddChildren }
Appearance25.AddChildren([ComposedShader34]);
{ METHOD .Appearance }
ParticleSystem21.Appearance := Appearance25;
Sphere49 := TSphereNode.Create;
end;

procedure InitparticleflowersPart3;
begin

{ METHOD .Geometry }
ParticleSystem21.Geometry := Sphere49;
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(ParticleSystem21);
Script50 := TScriptNode.Create;
SFVec3f51 := TSFVec3f.CreateUndefined(Script50, false, 'translation');
SFVec3f51.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f51);
SFVec3f52 := TSFVec3f.CreateUndefined(Script50, false, 'velocity');
SFVec3f52.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f52);
SFFloat53 := TSFFloat.CreateUndefined(Script50, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat53);
SFFloat54 := TSFFloat.CreateUndefined(Script50, false, 'a');
SFFloat54.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat54);
SFFloat55 := TSFFloat.CreateUndefined(Script50, false, 'b');
SFFloat55.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat55);
SFFloat56 := TSFFloat.CreateUndefined(Script50, false, 'c');
SFFloat56.Value := '3';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script50, false, 'd');
SFFloat57.Value := '3';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat57);
SFFloat58 := TSFFloat.CreateUndefined(Script50, false, 'tdelta');
SFFloat58.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat58);
SFFloat59 := TSFFloat.CreateUndefined(Script50, false, 'pdelta');
SFFloat59.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat59);

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
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(Script50);
TimeSensor60 := TTimeSensorNode.Create;
TimeSensor60.CycleInterval := 5;
TimeSensor60.Loop := True;
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(TimeSensor60);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
Group20.AddRoute(TimeSensor60.EventFraction_changed, Script50.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO x_ite.a }
{ Sample Animate.a TO x_ite.a}
Group20.AddRoute(Animate.[object Object], ComposedShader34.a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO x_ite.b }
{ Sample Animate.b TO x_ite.b}
Group20.AddRoute(Animate.[object Object], ComposedShader34.b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO x_ite.c }
{ Sample Animate.c TO x_ite.c}
Group20.AddRoute(Animate.[object Object], ComposedShader34.c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO x_ite.d }
{ Sample Animate.d TO x_ite.d}
Group20.AddRoute(Animate.[object Object], ComposedShader34.d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO x_ite.pdelta }
{ Sample Animate.pdelta TO x_ite.pdelta}
Group20.AddRoute(Animate.[object Object], ComposedShader34.pdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO x_ite.tdelta }
{ Sample Animate.tdelta TO x_ite.tdelta}
Group20.AddRoute(Animate.[object Object], ComposedShader34.tdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Group20);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function Createparticleflowers: TX3DRootNode;
begin
InitparticleflowersPart0;
InitparticleflowersPart1;
InitparticleflowersPart2;
InitparticleflowersPart3;
Result := X3D0;
end;

begin
end.
