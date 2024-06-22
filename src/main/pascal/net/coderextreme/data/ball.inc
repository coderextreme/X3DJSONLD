function ball: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Viewpoint17: TViewpointNode;
Background18: TBackgroundNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
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
field32: TfieldNode;
field33: TfieldNode;
ComposedCubeMapTexture34: TComposedCubeMapTextureNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
ShaderPart38: TShaderPartNode;
ShaderPart39: TShaderPartNode;
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
X3D0.Meta['title'] := 'ball.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d';
X3D0.Meta['description'] := 'a prismatic sphere';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'ball.x3d';
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
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture24.BackTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture24.BottomTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture24.FrontTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture24.LeftTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture24.RightTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture24.TopTexture := ImageTexture30;
{ .SetTexture }
Appearance22.Texture := ComposedCubeMapTexture24;
{ <ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"' containerField='programs' type='FRAGMENT'/> </ProgramShader> }
{ <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='"../shaders/castle.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"' type="VERTEX" containerField='parts'></ShaderPart> <ShaderPart DEF='commonfs' url='"../shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType="initializeOnly"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs"' type="VERTEX" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs"' type="VERTEX" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"' type="VERTEX" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"' type="VERTEX" containerField='parts'></ShaderPart> <ShaderPart USE="commonfs"></ShaderPart> </ComposedShader> }
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
field32 := TfieldNode.Create;
field32.NameField := 'chromaticDispertion';
field32.AccessType := 'initializeOnly';
field32.Type := 'SFVec3f';
field32.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader31.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'cube';
field33.Type := 'SFNode';
field33.AccessType := 'initializeOnly';
ComposedCubeMapTexture34 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture34 := ComposedCubeMapTexture24;
{ .AddChildren }
field33.AddChildren([ComposedCubeMapTexture34]);
{ .AddField }
ComposedShader31.Field := field33;
field35 := TfieldNode.Create;
field35.NameField := 'bias';
field35.AccessType := 'initializeOnly';
field35.Type := 'SFFloat';
field35.Value := '0.5';
{ .AddField }
ComposedShader31.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'scale';
field36.AccessType := 'initializeOnly';
field36.Type := 'SFFloat';
field36.Value := '0.5';
{ .AddField }
ComposedShader31.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'power';
field37.AccessType := 'initializeOnly';
field37.Type := 'SFFloat';
field37.Value := '2';
{ .AddField }
ComposedShader31.Field := field37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart38.Type := 'VERTEX';
{ .AddParts }
ComposedShader31.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs']);
ShaderPart39.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader31.Parts := ShaderPart39;
{ <ShaderPart USE="commonfs"></ShaderPart> }
{ .AddShaders }
Appearance22.Shaders := ComposedShader31;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group14.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
