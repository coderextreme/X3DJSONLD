function bumpyfreewrlsliders: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
LayerSet18: TLayerSetNode;
Layer19: TLayerNode;
NavigationInfo20: TNavigationInfoNode;
DirectionalLight21: TDirectionalLightNode;
DirectionalLight22: TDirectionalLightNode;
Viewpoint23: TViewpointNode;
Group24: TGroupNode;
Transform25: TTransformNode;
Shape26: TShapeNode;
Cylinder27: TCylinderNode;
Appearance28: TAppearanceNode;
Material29: TMaterialNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
Cone32: TConeNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Cylinder37: TCylinderNode;
Appearance38: TAppearanceNode;
Material39: TMaterialNode;
Transform40: TTransformNode;
Shape41: TShapeNode;
Cone42: TConeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
Transform45: TTransformNode;
Shape46: TShapeNode;
Cylinder47: TCylinderNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Transform50: TTransformNode;
Shape51: TShapeNode;
Cone52: TConeNode;
Appearance53: TAppearanceNode;
Material54: TMaterialNode;
Transform55: TTransformNode;
Background56: TBackgroundNode;
Transform57: TTransformNode;
Shape58: TShapeNode;
Sphere59: TSphereNode;
Appearance60: TAppearanceNode;
Material61: TMaterialNode;
ComposedCubeMapTexture62: TComposedCubeMapTextureNode;
ImageTexture63: TImageTextureNode;
ImageTexture64: TImageTextureNode;
ImageTexture65: TImageTextureNode;
ImageTexture66: TImageTextureNode;
ImageTexture67: TImageTextureNode;
ImageTexture68: TImageTextureNode;
ComposedShader69: TComposedShaderNode;
field70: TfieldNode;
field71: TfieldNode;
field72: TfieldNode;
field73: TfieldNode;
field74: TfieldNode;
field75: TfieldNode;
field76: TfieldNode;
field77: TfieldNode;
field78: TfieldNode;
field79: TfieldNode;
field80: TfieldNode;
ShaderPart81: TShaderPartNode;
IS82: TISNode;
connect83: TconnectNode;
ShaderPart84: TShaderPartNode;
IS85: TISNode;
connect86: TconnectNode;
DISEntityManager87: TDISEntityManagerNode;
DISEntityTypeMapping88: TDISEntityTypeMappingNode;
DISEntityTypeMapping89: TDISEntityTypeMappingNode;
DISEntityTypeMapping90: TDISEntityTypeMappingNode;
DISEntityTypeMapping91: TDISEntityTypeMappingNode;
Collision92: TCollisionNode;
Group93: TGroupNode;
LayoutLayer96: TLayoutLayerNode;
Transform97: TTransformNode;
Shape98: TShapeNode;
Appearance99: TAppearanceNode;
Material100: TMaterialNode;
Box101: TBoxNode;
Transform102: TTransformNode;
Transform103: TTransformNode;
Shape104: TShapeNode;
Text105: TTextNode;
FontStyle106: TFontStyleNode;
Appearance107: TAppearanceNode;
Material108: TMaterialNode;
ProtoDeclare109: TProtoDeclareNode;
ProtoInterface110: TProtoInterfaceNode;
field111: TfieldNode;
field112: TfieldNode;
field113: TfieldNode;
field114: TfieldNode;
field115: TfieldNode;
field116: TfieldNode;
field117: TfieldNode;
field118: TfieldNode;
ProtoBody119: TProtoBodyNode;
Group120: TGroupNode;
Transform121: TTransformNode;
IS122: TISNode;
connect123: TconnectNode;
Transform124: TTransformNode;
IS125: TISNode;
connect126: TconnectNode;
PlaneSensor127: TPlaneSensorNode;
Transform128: TTransformNode;
TouchSensor129: TTouchSensorNode;
Transform130: TTransformNode;
Shape131: TShapeNode;
Text132: TTextNode;
IS133: TISNode;
connect134: TconnectNode;
FontStyle135: TFontStyleNode;
Appearance136: TAppearanceNode;
Material137: TMaterialNode;
Transform138: TTransformNode;
IS139: TISNode;
connect140: TconnectNode;
Shape141: TShapeNode;
Text142: TTextNode;
FontStyle143: TFontStyleNode;
Appearance144: TAppearanceNode;
Material145: TMaterialNode;
Script146: TScriptNode;
field147: TfieldNode;
field148: TfieldNode;
field149: TfieldNode;
field150: TfieldNode;
field151: TfieldNode;
field152: TfieldNode;
IS153: TISNode;
connect154: TconnectNode;
connect155: TconnectNode;
connect156: TconnectNode;
ProtoInstance160: TProtoInstanceNode;
fieldValue161: TfieldValueNode;
fieldValue162: TfieldValueNode;
fieldValue163: TfieldValueNode;
fieldValue164: TfieldValueNode;
fieldValue165: TfieldValueNode;
fieldValue166: TfieldValueNode;
fieldValue167: TfieldValueNode;
fieldValue168: TfieldValueNode;
ComposedShader169: TComposedShaderNode;
ProtoInstance170: TProtoInstanceNode;
fieldValue171: TfieldValueNode;
fieldValue172: TfieldValueNode;
fieldValue173: TfieldValueNode;
fieldValue174: TfieldValueNode;
fieldValue175: TfieldValueNode;
fieldValue176: TfieldValueNode;
fieldValue177: TfieldValueNode;
fieldValue178: TfieldValueNode;
ComposedShader179: TComposedShaderNode;
ProtoInstance180: TProtoInstanceNode;
fieldValue181: TfieldValueNode;
fieldValue182: TfieldValueNode;
fieldValue183: TfieldValueNode;
fieldValue184: TfieldValueNode;
fieldValue185: TfieldValueNode;
fieldValue186: TfieldValueNode;
fieldValue187: TfieldValueNode;
fieldValue188: TfieldValueNode;
ComposedShader189: TComposedShaderNode;
ProtoInstance190: TProtoInstanceNode;
fieldValue191: TfieldValueNode;
fieldValue192: TfieldValueNode;
fieldValue193: TfieldValueNode;
fieldValue194: TfieldValueNode;
fieldValue195: TfieldValueNode;
fieldValue196: TfieldValueNode;
fieldValue197: TfieldValueNode;
fieldValue198: TfieldValueNode;
ComposedShader199: TComposedShaderNode;
ProtoInstance200: TProtoInstanceNode;
fieldValue201: TfieldValueNode;
fieldValue202: TfieldValueNode;
fieldValue203: TfieldValueNode;
fieldValue204: TfieldValueNode;
fieldValue205: TfieldValueNode;
fieldValue206: TfieldValueNode;
fieldValue207: TfieldValueNode;
fieldValue208: TfieldValueNode;
ComposedShader209: TComposedShaderNode;
ProtoInstance210: TProtoInstanceNode;
fieldValue211: TfieldValueNode;
fieldValue212: TfieldValueNode;
fieldValue213: TfieldValueNode;
fieldValue214: TfieldValueNode;
fieldValue215: TfieldValueNode;
fieldValue216: TfieldValueNode;
fieldValue217: TfieldValueNode;
fieldValue218: TfieldValueNode;
ComposedShader219: TComposedShaderNode;
Layout220: TLayoutNode;
Viewport221: TViewportNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['DIS'] := 2;
X3D0.Meta['title'] := 'bumpyfreewrlsliders.x3d';
X3D0.Meta['description'] := 'Bumpy Orbitals with Sliders for FreeWRL';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['identifier'] := 'https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d';
X3D0.Meta['license'] := 'license.html';
Group17 := TGroupNode.Create;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet18 := TLayerSetNode.Create;
LayerSet18.ActiveLayer := 1;
LayerSet18.SetOrder([1,2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display }
{ like a HUD (heads up display) }
Layer19 := TLayerNode.Create;
Layer19.Pickable := True;
Layer19.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo20 := TNavigationInfoNode.Create;
NavigationInfo20.SetType(['EXAMINE','FLY','LOOKAT','ANY']);
NavigationInfo20.SetAvatarSize([0.25,1.75,0.75]);
{ .AddChildren }
Layer19.AddChildren([NavigationInfo20]);
DirectionalLight21 := TDirectionalLightNode.Create;
DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(0,-1,0);
{ .AddChildren }
Layer19.AddChildren([DirectionalLight21]);
DirectionalLight22 := TDirectionalLightNode.Create;
DirectionalLight22.AmbientIntensity := 0.2;
DirectionalLight22.Direction := Vector3(-1,-0.1,-1);
{ .AddChildren }
Layer19.AddChildren([DirectionalLight22]);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.Description := 'My Overview';
Viewpoint23.FieldOfView := 1.570796;
Viewpoint23.Position := Vector3(0,1.75,60);
{ .AddChildren }
Layer19.AddChildren([Viewpoint23]);
{ this group contains the red/green/blue 3D crosshair }
Group24 := TGroupNode.Create;
{ Arrow X }
Transform25 := TTransformNode.Create;
Transform25.Translation := Vector3(25,0,0);
Transform25.Rotation := Vector4(0,0,-1,1.57);
Shape26 := TShapeNode.Create;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Radius := 0.35;
Cylinder27.Height := 50;
{ .SetGeometry }
Shape26.Geometry := Cylinder27;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
Material29.DiffuseColor := Vector3(1,0,0);
Material29.EmissiveColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance28.Material := Material29;
{ .SetAppearance }
Shape26.Appearance := Appearance28;
{ .AddChild }
Transform25.AddChildren([Shape26]);
{ .AddChildren }
Group24.AddChildren([Transform25]);
Transform30 := TTransformNode.Create;
Transform30.Translation := Vector3(50,0,0);
Transform30.Rotation := Vector4(0,0,-1,1.57);
Shape31 := TShapeNode.Create;
Cone32 := TConeNode.Create;
Cone32.BottomRadius := 0.8;
Cone32.Height := 3;
{ .SetGeometry }
Shape31.Geometry := Cone32;
Appearance33 := TAppearanceNode.Create;
Material34 := TMaterialNode.Create;
Material34 := Material29;
{ .SetMaterial }
Appearance33.Material := Material34;
{ .SetAppearance }
Shape31.Appearance := Appearance33;
{ .AddChild }
Transform30.AddChildren([Shape31]);
{ .AddChildren }
Group24.AddChildren([Transform30]);
{ Arrow Y }
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0,25,0);
Shape36 := TShapeNode.Create;
Cylinder37 := TCylinderNode.Create;
Cylinder37 := Cylinder27;
{ .SetGeometry }
Shape36.Geometry := Cylinder37;
Appearance38 := TAppearanceNode.Create;
Material39 := TMaterialNode.Create;
Material39.DiffuseColor := Vector3(0,1,0);
Material39.EmissiveColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance38.Material := Material39;
{ .SetAppearance }
Shape36.Appearance := Appearance38;
{ .AddChild }
Transform35.AddChildren([Shape36]);
{ .AddChildren }
Group24.AddChildren([Transform35]);
Transform40 := TTransformNode.Create;
Transform40.Translation := Vector3(0,50,0);
Shape41 := TShapeNode.Create;
Cone42 := TConeNode.Create;
Cone42 := Cone32;
{ .SetGeometry }
Shape41.Geometry := Cone42;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
Material44 := Material39;
{ .SetMaterial }
Appearance43.Material := Material44;
{ .SetAppearance }
Shape41.Appearance := Appearance43;
{ .AddChild }
Transform40.AddChildren([Shape41]);
{ .AddChildren }
Group24.AddChildren([Transform40]);
{ Arrow Z }
Transform45 := TTransformNode.Create;
Transform45.Translation := Vector3(0,0,25);
Transform45.Rotation := Vector4(1,0,0,1.57);
Shape46 := TShapeNode.Create;
Cylinder47 := TCylinderNode.Create;
Cylinder47 := Cylinder27;
{ .SetGeometry }
Shape46.Geometry := Cylinder47;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,0,1);
Material49.EmissiveColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape46.Appearance := Appearance48;
{ .AddChild }
Transform45.AddChildren([Shape46]);
{ .AddChildren }
Group24.AddChildren([Transform45]);
Transform50 := TTransformNode.Create;
Transform50.Translation := Vector3(0,0,50);
Transform50.Rotation := Vector4(1,0,0,1.57);
Shape51 := TShapeNode.Create;
Cone52 := TConeNode.Create;
Cone52 := Cone32;
{ .SetGeometry }
Shape51.Geometry := Cone52;
Appearance53 := TAppearanceNode.Create;
Material54 := TMaterialNode.Create;
Material54 := Material49;
{ .SetMaterial }
Appearance53.Material := Material54;
{ .SetAppearance }
Shape51.Appearance := Appearance53;
{ .AddChild }
Transform50.AddChildren([Shape51]);
{ .AddChildren }
Group24.AddChildren([Transform50]);
{ .AddChildren }
Layer19.AddChildren([Group24]);
{ the model that is being reviewed by the users of this scene }
Transform55 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background56 := TBackgroundNode.Create;
Background56.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background56.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background56.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background56.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background56.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background56.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Transform55.AddChildren([Background56]);
Transform57 := TTransformNode.Create;
Shape58 := TShapeNode.Create;
Sphere59 := TSphereNode.Create;
Sphere59.Radius := 5;
{ .SetGeometry }
Shape58.Geometry := Sphere59;
{ <IndexedFaceSet convex="false" DEF="Orbit" creaseAngle="0"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
Appearance60 := TAppearanceNode.Create;
Material61 := TMaterialNode.Create;
Material61.DiffuseColor := Vector3(0.7,0.7,0.7);
Material61.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance60.Material := Material61;
ComposedCubeMapTexture62 := TComposedCubeMapTextureNode.Create;
ImageTexture63 := TImageTextureNode.Create;
ImageTexture63.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture62.BackTexture := ImageTexture63;
ImageTexture64 := TImageTextureNode.Create;
ImageTexture64.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture62.BottomTexture := ImageTexture64;
ImageTexture65 := TImageTextureNode.Create;
ImageTexture65.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture62.FrontTexture := ImageTexture65;
ImageTexture66 := TImageTextureNode.Create;
ImageTexture66.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture62.LeftTexture := ImageTexture66;
ImageTexture67 := TImageTextureNode.Create;
ImageTexture67.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture62.RightTexture := ImageTexture67;
ImageTexture68 := TImageTextureNode.Create;
ImageTexture68.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture62.TopTexture := ImageTexture68;
{ .SetTexture }
Appearance60.Texture := ComposedCubeMapTexture62;
ComposedShader69 := TComposedShaderNode.Create;
ComposedShader69.Language := 'GLSL';
field70 := TfieldNode.Create;
field70.NameField := 'fw_textureCoordGenType';
field70.AccessType := 'inputOutput';
field70.Type := 'SFInt32';
field70.Value := '0';
{ .AddField }
ComposedShader69.Field := field70;
field71 := TfieldNode.Create;
field71.NameField := 'chromaticDispertion';
field71.AccessType := 'initializeOnly';
field71.Type := 'SFVec3f';
field71.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader69.Field := field71;
field72 := TfieldNode.Create;
field72.NameField := 'bias';
field72.Type := 'SFFloat';
field72.AccessType := 'inputOutput';
field72.Value := '0.5';
{ .AddField }
ComposedShader69.Field := field72;
field73 := TfieldNode.Create;
field73.NameField := 'scale';
field73.Type := 'SFFloat';
field73.AccessType := 'inputOutput';
field73.Value := '0.5';
{ .AddField }
ComposedShader69.Field := field73;
field74 := TfieldNode.Create;
field74.NameField := 'power';
field74.Type := 'SFFloat';
field74.AccessType := 'inputOutput';
field74.Value := '2';
{ .AddField }
ComposedShader69.Field := field74;
field75 := TfieldNode.Create;
field75.NameField := 'a';
field75.Type := 'SFFloat';
field75.AccessType := 'inputOutput';
field75.Value := '15';
{ .AddField }
ComposedShader69.Field := field75;
field76 := TfieldNode.Create;
field76.NameField := 'b';
field76.Type := 'SFFloat';
field76.AccessType := 'inputOutput';
field76.Value := '5';
{ .AddField }
ComposedShader69.Field := field76;
field77 := TfieldNode.Create;
field77.NameField := 'c';
field77.Type := 'SFFloat';
field77.AccessType := 'inputOutput';
field77.Value := '20';
{ .AddField }
ComposedShader69.Field := field77;
field78 := TfieldNode.Create;
field78.NameField := 'd';
field78.Type := 'SFFloat';
field78.AccessType := 'inputOutput';
field78.Value := '20';
{ .AddField }
ComposedShader69.Field := field78;
field79 := TfieldNode.Create;
field79.NameField := 'tdelta';
field79.Type := 'SFFloat';
field79.AccessType := 'inputOutput';
field79.Value := '0';
{ .AddField }
ComposedShader69.Field := field79;
field80 := TfieldNode.Create;
field80.NameField := 'pdelta';
field80.Type := 'SFFloat';
field80.AccessType := 'inputOutput';
field80.Value := '0';
{ .AddField }
ComposedShader69.Field := field80;
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
ShaderPart81 := TShaderPartNode.Create;
ShaderPart81.Type := 'VERTEX';
IS82 := TISNode.Create;
connect83 := TconnectNode.Create;
connect83.NodeField := 'url';
connect83.ProtoField := 'vertex';
{ .AddConnect }
IS82.Connect := connect83;
{ .SetIS }
ShaderPart81.IS := IS82;
{ .AddParts }
ComposedShader69.Parts := ShaderPart81;
ShaderPart84 := TShaderPartNode.Create;
ShaderPart84.Type := 'FRAGMENT';
IS85 := TISNode.Create;
connect86 := TconnectNode.Create;
connect86.NodeField := 'url';
connect86.ProtoField := 'fragment';
{ .AddConnect }
IS85.Connect := connect86;
{ .SetIS }
ShaderPart84.IS := IS85;
{ .AddParts }
ComposedShader69.Parts := ShaderPart84;
{ .AddShaders }
Appearance60.Shaders := ComposedShader69;
{ <ComposedShader DEF="freewrlShader" language="GLSL"> }
{ <field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='15'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='5'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <ShaderPart type='VERTEX'> }
{ <IS> }
{ <connect nodeField="url" protoField="vertex"/> }
{ </IS> }
{ </ShaderPart> }
{ <ShaderPart type='FRAGMENT'> }
{ <IS> }
{ <connect nodeField="url" protoField="fragment"/> }
{ </IS> }
{ </ShaderPart> }
{ </ComposedShader> }
{ .SetAppearance }
Shape58.Appearance := Appearance60;
{ .AddChild }
Transform57.AddChildren([Shape58]);
{ .AddChildren }
Transform55.AddChildren([Transform57]);
{ .AddChildren }
Layer19.AddChildren([Transform55]);
{ <Script DEF="OrbitScript"> }
{ <field accessType="inputOutput" name="coordinates" type="MFVec3f"/> }
{ <field accessType="outputOnly" name="coordIndexes" type="MFInt32"/> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
(* <![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script> *)
{ <ROUTE fromField="coordIndexes" fromNode="OrbitScript" toField="set_coordIndex" toNode="Orbit"/> }
{ <ROUTE fromField="coordinates" fromNode="OrbitScript" toField="set_point" toNode="OrbitCoordinates"/> }
{ DIS multiuser facilities }
DISEntityManager87 := TDISEntityManagerNode.Create;
DISEntityTypeMapping88 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping88.Category := 77;
DISEntityTypeMapping88.Specific := 1;
DISEntityTypeMapping88.SetUrl(['../data/Leif8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
{ .AddChildren }
DISEntityManager87.AddChildren([DISEntityTypeMapping88]);
DISEntityTypeMapping89 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping89.Category := 77;
DISEntityTypeMapping89.Specific := 2;
DISEntityTypeMapping89.SetUrl(['../data/Lily8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
{ .AddChildren }
DISEntityManager87.AddChildren([DISEntityTypeMapping89]);
DISEntityTypeMapping90 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping90.Category := 77;
DISEntityTypeMapping90.Specific := 3;
DISEntityTypeMapping90.SetUrl(['../data/Tufani8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
{ .AddChildren }
DISEntityManager87.AddChildren([DISEntityTypeMapping90]);
DISEntityTypeMapping91 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping91.Category := 77;
DISEntityTypeMapping91.Specific := 4;
DISEntityTypeMapping91.SetUrl(['../data/Gramps8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
{ .AddChildren }
DISEntityManager87.AddChildren([DISEntityTypeMapping91]);
{ .AddChildren }
Layer19.AddChildren([DISEntityManager87]);
Collision92 := TCollisionNode.Create;
Group93 := TGroupNode.Create;
{ .SetProxy }
Collision92.Proxy := Group93;
{ .AddChildren }
Layer19.AddChildren([Collision92]);
Layer19.AddRoute(DISEntityManager87.FdAddedentities, Group93.FdAddchildren);
{ .AddX3DRoute }
Layer19.AddRoute(DISEntityManager87.FdRemovedentities, Group93.FdRemovechildren);
{ .AddX3DRoute }
{ .AddLayers }
LayerSet18.Layers := Layer19;
LayoutLayer96 := TLayoutLayerNode.Create;
LayoutLayer96.Pickable := True;
LayoutLayer96.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform97 := TTransformNode.Create;
Transform97.Translation := Vector3(0,0,-3);
Shape98 := TShapeNode.Create;
Appearance99 := TAppearanceNode.Create;
Material100 := TMaterialNode.Create;
Material100.DiffuseColor := Vector3(0.1,0.1,0.1);
Material100.Transparency := 1;
{ .SetMaterial }
Appearance99.Material := Material100;
{ .SetAppearance }
Shape98.Appearance := Appearance99;
Box101 := TBoxNode.Create;
Box101.Size := Vector3(100,100,0.02);
{ .SetGeometry }
Shape98.Geometry := Box101;
{ .AddChild }
Transform97.AddChildren([Shape98]);
{ .AddChildren }
LayoutLayer96.AddChildren([Transform97]);
Transform102 := TTransformNode.Create;
Transform103 := TTransformNode.Create;
Transform103.Translation := Vector3(0,0,-20);
Shape104 := TShapeNode.Create;
Text105 := TTextNode.Create;
Text105.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle106 := TFontStyleNode.Create;
FontStyle106.Size := 0.09;
{ .SetFontStyle }
Text105.FontStyle := FontStyle106;
{ .SetGeometry }
Shape104.Geometry := Text105;
Appearance107 := TAppearanceNode.Create;
Material108 := TMaterialNode.Create;
Material108.DiffuseColor := Vector3(0,1,1);
{ .SetMaterial }
Appearance107.Material := Material108;
{ .SetAppearance }
Shape104.Appearance := Appearance107;
{ .AddChild }
Transform103.AddChildren([Shape104]);
{ .AddChildren }
Transform102.AddChildren([Transform103]);
{ .AddChildren }
LayoutLayer96.AddChildren([Transform102]);
ProtoDeclare109 := TProtoDeclareNode.Create;
ProtoDeclare109.NameField := 'SliderProto';
ProtoInterface110 := TProtoInterfaceNode.Create;
field111 := TfieldNode.Create;
field111.NameField := 'sliderTranslation';
field111.AccessType := 'inputOutput';
field111.Type := 'SFVec3f';
field111.Value := '0 0.7 0';
{ .AddField }
ProtoInterface110.Field := field111;
field112 := TfieldNode.Create;
field112.NameField := 'transformTranslation';
field112.AccessType := 'inputOutput';
field112.Type := 'SFVec3f';
field112.Value := '0 0 0.1';
{ .AddField }
ProtoInterface110.Field := field112;
field113 := TfieldNode.Create;
field113.NameField := 'sensorTranslation';
field113.AccessType := 'inputOutput';
field113.Type := 'SFVec3f';
field113.Value := '0 0 0';
{ .AddField }
ProtoInterface110.Field := field113;
field114 := TfieldNode.Create;
field114.NameField := 'numberTranslation';
field114.AccessType := 'inputOutput';
field114.Type := 'SFVec3f';
field114.Value := '0.2 0 0';
{ .AddField }
ProtoInterface110.Field := field114;
field115 := TfieldNode.Create;
field115.NameField := 'textString';
field115.AccessType := 'inputOutput';
field115.Type := 'MFString';
field115.Value := '\"a=\"';
{ .AddField }
ProtoInterface110.Field := field115;
field116 := TfieldNode.Create;
field116.NameField := 'parameterName';
field116.AccessType := 'inputOutput';
field116.Type := 'SFString';
field116.Value := 'a';
{ .AddField }
ProtoInterface110.Field := field116;
field117 := TfieldNode.Create;
field117.NameField := 'parameterScale';
field117.AccessType := 'inputOutput';
field117.Type := 'SFFloat';
field117.Value := '30';
{ .AddField }
ProtoInterface110.Field := field117;
field118 := TfieldNode.Create;
field118.NameField := 'shaderNode';
field118.AccessType := 'inputOutput';
field118.Type := 'SFNode';
{ .AddField }
ProtoInterface110.Field := field118;
{ .SetProtoInterface }
ProtoDeclare109.ProtoInterface := ProtoInterface110;
ProtoBody119 := TProtoBodyNode.Create;
Group120 := TGroupNode.Create;
Transform121 := TTransformNode.Create;
Transform121.Translation := Vector3(0,0.7,0);
IS122 := TISNode.Create;
connect123 := TconnectNode.Create;
connect123.NodeField := 'translation';
connect123.ProtoField := 'sliderTranslation';
{ .AddConnect }
IS122.Connect := connect123;
{ .SetIS }
Transform121.IS := IS122;
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0,0,0.1);
IS125 := TISNode.Create;
connect126 := TconnectNode.Create;
connect126.NodeField := 'translation';
connect126.ProtoField := 'sensorTranslation';
{ .AddConnect }
IS125.Connect := connect126;
{ .SetIS }
Transform124.IS := IS125;
PlaneSensor127 := TPlaneSensorNode.Create;
PlaneSensor127.MaxPosition := Vector2(2,0);
{ .AddChildren }
Transform124.AddChildren([PlaneSensor127]);
Transform128 := TTransformNode.Create;
Transform128.Translation := Vector3(0,0,0);
TouchSensor129 := TTouchSensorNode.Create;
{ .AddChildren }
Transform128.AddChildren([TouchSensor129]);
{ .AddChildren }
Transform124.AddChildren([Transform128]);
Transform130 := TTransformNode.Create;
Shape131 := TShapeNode.Create;
Text132 := TTextNode.Create;
Text132.SetText(['a=']);
IS133 := TISNode.Create;
connect134 := TconnectNode.Create;
connect134.NodeField := 'string';
connect134.ProtoField := 'textString';
{ .AddConnect }
IS133.Connect := connect134;
{ .SetIS }
Text132.IS := IS133;
FontStyle135 := TFontStyleNode.Create;
FontStyle135.Size := 0.2;
{ .SetFontStyle }
Text132.FontStyle := FontStyle135;
{ .SetGeometry }
Shape131.Geometry := Text132;
Appearance136 := TAppearanceNode.Create;
Material137 := TMaterialNode.Create;
Material137.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance136.Material := Material137;
{ .SetAppearance }
Shape131.Appearance := Appearance136;
{ .AddChild }
Transform130.AddChildren([Shape131]);
Transform138 := TTransformNode.Create;
IS139 := TISNode.Create;
connect140 := TconnectNode.Create;
connect140.NodeField := 'translation';
connect140.ProtoField := 'numberTranslation';
{ .AddConnect }
IS139.Connect := connect140;
{ .SetIS }
Transform138.IS := IS139;
Shape141 := TShapeNode.Create;
Text142 := TTextNode.Create;
Text142.SetText(['0']);
FontStyle143 := TFontStyleNode.Create;
FontStyle143.Size := 0.2;
{ .SetFontStyle }
Text142.FontStyle := FontStyle143;
{ .SetGeometry }
Shape141.Geometry := Text142;
Appearance144 := TAppearanceNode.Create;
Material145 := TMaterialNode.Create;
Material145.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance144.Material := Material145;
{ .SetAppearance }
Shape141.Appearance := Appearance144;
{ .AddChild }
Transform138.AddChildren([Shape141]);
{ .AddChildren }
Transform130.AddChildren([Transform138]);
{ .AddChildren }
Transform124.AddChildren([Transform130]);
{ .AddChildren }
Transform121.AddChildren([Transform124]);
{ .AddChildren }
Group120.AddChildren([Transform121]);
Script146 := TScriptNode.Create;
Script146.DirectOutput := True;
Script146.MustEvaluate := True;
field147 := TfieldNode.Create;
field147.NameField := 'protoScale';
field147.AccessType := 'inputOutput';
field147.Type := 'SFFloat';
field147.Value := '30';
{ .AddField }
Script146.Field := field147;
field148 := TfieldNode.Create;
field148.NameField := 'shader';
field148.AccessType := 'inputOutput';
field148.Type := 'SFNode';
{ .AddField }
Script146.Field := field148;
field149 := TfieldNode.Create;
field149.NameField := 'newTranslation';
field149.AccessType := 'inputOutput';
field149.Type := 'SFVec3f';
field149.Value := '1 1 1';
{ .AddField }
Script146.Field := field149;
field150 := TfieldNode.Create;
field150.NameField := 'protoValue_changed';
field150.AccessType := 'inputOutput';
field150.Type := 'SFFloat';
field150.Value := '1';
{ .AddField }
Script146.Field := field150;
field151 := TfieldNode.Create;
field151.NameField := 'protoNumber_changed';
field151.AccessType := 'inputOutput';
field151.Type := 'MFString';
field151.Value := '\"0.0\"';
{ .AddField }
Script146.Field := field151;
field152 := TfieldNode.Create;
field152.NameField := 'protoParameterName';
field152.AccessType := 'inputOutput';
field152.Type := 'SFString';
field152.Value := 'a';
{ .AddField }
Script146.Field := field152;
IS153 := TISNode.Create;
connect154 := TconnectNode.Create;
connect154.NodeField := 'protoScale';
connect154.ProtoField := 'parameterScale';
{ .AddConnect }
IS153.Connect := connect154;
connect155 := TconnectNode.Create;
connect155.NodeField := 'protoParameterName';
connect155.ProtoField := 'parameterName';
{ .AddConnect }
IS153.Connect := connect155;
connect156 := TconnectNode.Create;
connect156.NodeField := 'shader';
connect156.ProtoField := 'shaderNode';
{ .AddConnect }
IS153.Connect := connect156;
{ .SetIS }
Script146.IS := IS153;

Script146.SetSourceCode('''ecmascript:\n"+
"	const newTranslation = function(Value) {\n"+
"	    protoValue_changed = Value[0] * protoScale;\n"+
"	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());\n"+
"	    Browser.println(\"In newTranslation:\");\n"+
"	    Browser.println(shader);\n"+
"	    Browser.println(Value[0]);\n"+
"	    Browser.println(Value.x);\n"+
"	    Browser.println(protoScale);\n"+
"	    Browser.println(Value[0] * protoScale);\n"+
"	    Browser.println(protoParameterName);\n"+
"					// shader[protoParameterName] = Value[0] * protoScale;\n"+
"	};''');
{ .AddChildren }
Group120.AddChildren([Script146]);
Group120.AddRoute(PlaneSensor127.EventTranslation_changed, Transform124.FdTranslation);
{ .AddX3DRoute }
Group120.AddRoute(PlaneSensor127.EventTranslation_changed, Script146.FdNewtranslation);
{ .AddX3DRoute }
Group120.AddRoute(Script146.EventProtonumber_changed, Text142.FdString);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody119.AddChildren([Group120]);
{ .SetProtoBody }
ProtoDeclare109.ProtoBody := ProtoBody119;
{ .AddChildren }
LayoutLayer96.AddChildren([ProtoDeclare109]);
ProtoInstance160 := TProtoInstanceNode.Create;
ProtoInstance160.NameField := 'SliderProto';
fieldValue161 := TfieldValueNode.Create;
fieldValue161.NameField := 'sliderTranslation';
fieldValue161.Value := '0 0.7 0';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue161;
fieldValue162 := TfieldValueNode.Create;
fieldValue162.NameField := 'transformTranslation';
fieldValue162.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue162;
fieldValue163 := TfieldValueNode.Create;
fieldValue163.NameField := 'sensorTranslation';
fieldValue163.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue163;
fieldValue164 := TfieldValueNode.Create;
fieldValue164.NameField := 'numberTranslation';
fieldValue164.Value := '0.3 0 0';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue164;
fieldValue165 := TfieldValueNode.Create;
fieldValue165.NameField := 'textString';
fieldValue165.Value := '\"a=\"';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue165;
fieldValue166 := TfieldValueNode.Create;
fieldValue166.NameField := 'parameterName';
fieldValue166.Value := 'a';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue166;
fieldValue167 := TfieldValueNode.Create;
fieldValue167.NameField := 'parameterScale';
fieldValue167.Value := '30';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue167;
fieldValue168 := TfieldValueNode.Create;
fieldValue168.NameField := 'shaderNode';
ComposedShader169 := TComposedShaderNode.Create;
ComposedShader169 := ComposedShader69;
{ .AddChildren }
fieldValue168.AddChildren([ComposedShader169]);
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue168;
{ .AddChildren }
LayoutLayer96.AddChildren([ProtoInstance160]);
ProtoInstance170 := TProtoInstanceNode.Create;
ProtoInstance170.NameField := 'SliderProto';
fieldValue171 := TfieldValueNode.Create;
fieldValue171.NameField := 'sliderTranslation';
fieldValue171.Value := '0 0.4 0';
{ .AddFieldValue }
ProtoInstance170.FieldValue := fieldValue171;
fieldValue172 := TfieldValueNode.Create;
fieldValue172.NameField := 'transformTranslation';
fieldValue172.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance170.FieldValue := fieldValue172;
fieldValue173 := TfieldValueNode.Create;
fieldValue173.NameField := 'sensorTranslation';
fieldValue173.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance170.FieldValue := fieldValue173;
fieldValue174 := TfieldValueNode.Create;
fieldValue174.NameField := 'numberTranslation';
fieldValue174.Value := '0.3 0 0';
{ .AddFieldValue }
ProtoInstance170.FieldValue := fieldValue174;
fieldValue175 := TfieldValueNode.Create;
fieldValue175.NameField := 'textString';
fieldValue175.Value := '\"b=\"';
{ .AddFieldValue }
ProtoInstance170.FieldValue := fieldValue175;
fieldValue176 := TfieldValueNode.Create;
fieldValue176.NameField := 'parameterName';
fieldValue176.Value := 'b';
{ .AddFieldValue }
ProtoInstance170.FieldValue := fieldValue176;
fieldValue177 := TfieldValueNode.Create;
fieldValue177.NameField := 'parameterScale';
fieldValue177.Value := '30';
{ .AddFieldValue }
ProtoInstance170.FieldValue := fieldValue177;
fieldValue178 := TfieldValueNode.Create;
fieldValue178.NameField := 'shaderNode';
ComposedShader179 := TComposedShaderNode.Create;
ComposedShader179 := ComposedShader69;
{ .AddChildren }
fieldValue178.AddChildren([ComposedShader179]);
{ .AddFieldValue }
ProtoInstance170.FieldValue := fieldValue178;
{ .AddChildren }
LayoutLayer96.AddChildren([ProtoInstance170]);
ProtoInstance180 := TProtoInstanceNode.Create;
ProtoInstance180.NameField := 'SliderProto';
fieldValue181 := TfieldValueNode.Create;
fieldValue181.NameField := 'sliderTranslation';
fieldValue181.Value := '0 0.1 0';
{ .AddFieldValue }
ProtoInstance180.FieldValue := fieldValue181;
fieldValue182 := TfieldValueNode.Create;
fieldValue182.NameField := 'transformTranslation';
fieldValue182.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance180.FieldValue := fieldValue182;
fieldValue183 := TfieldValueNode.Create;
fieldValue183.NameField := 'sensorTranslation';
fieldValue183.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance180.FieldValue := fieldValue183;
fieldValue184 := TfieldValueNode.Create;
fieldValue184.NameField := 'numberTranslation';
fieldValue184.Value := '0.3 0 0';
{ .AddFieldValue }
ProtoInstance180.FieldValue := fieldValue184;
fieldValue185 := TfieldValueNode.Create;
fieldValue185.NameField := 'textString';
fieldValue185.Value := '\"c=\"';
{ .AddFieldValue }
ProtoInstance180.FieldValue := fieldValue185;
fieldValue186 := TfieldValueNode.Create;
fieldValue186.NameField := 'parameterName';
fieldValue186.Value := 'c';
{ .AddFieldValue }
ProtoInstance180.FieldValue := fieldValue186;
fieldValue187 := TfieldValueNode.Create;
fieldValue187.NameField := 'parameterScale';
fieldValue187.Value := '20';
{ .AddFieldValue }
ProtoInstance180.FieldValue := fieldValue187;
fieldValue188 := TfieldValueNode.Create;
fieldValue188.NameField := 'shaderNode';
ComposedShader189 := TComposedShaderNode.Create;
ComposedShader189 := ComposedShader69;
{ .AddChildren }
fieldValue188.AddChildren([ComposedShader189]);
{ .AddFieldValue }
ProtoInstance180.FieldValue := fieldValue188;
{ .AddChildren }
LayoutLayer96.AddChildren([ProtoInstance180]);
ProtoInstance190 := TProtoInstanceNode.Create;
ProtoInstance190.NameField := 'SliderProto';
fieldValue191 := TfieldValueNode.Create;
fieldValue191.NameField := 'sliderTranslation';
fieldValue191.Value := '0 -0.2 0';
{ .AddFieldValue }
ProtoInstance190.FieldValue := fieldValue191;
fieldValue192 := TfieldValueNode.Create;
fieldValue192.NameField := 'transformTranslation';
fieldValue192.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance190.FieldValue := fieldValue192;
fieldValue193 := TfieldValueNode.Create;
fieldValue193.NameField := 'sensorTranslation';
fieldValue193.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance190.FieldValue := fieldValue193;
fieldValue194 := TfieldValueNode.Create;
fieldValue194.NameField := 'numberTranslation';
fieldValue194.Value := '0.3 0 0';
{ .AddFieldValue }
ProtoInstance190.FieldValue := fieldValue194;
fieldValue195 := TfieldValueNode.Create;
fieldValue195.NameField := 'textString';
fieldValue195.Value := '\"d=\"';
{ .AddFieldValue }
ProtoInstance190.FieldValue := fieldValue195;
fieldValue196 := TfieldValueNode.Create;
fieldValue196.NameField := 'parameterName';
fieldValue196.Value := 'd';
{ .AddFieldValue }
ProtoInstance190.FieldValue := fieldValue196;
fieldValue197 := TfieldValueNode.Create;
fieldValue197.NameField := 'parameterScale';
fieldValue197.Value := '20';
{ .AddFieldValue }
ProtoInstance190.FieldValue := fieldValue197;
fieldValue198 := TfieldValueNode.Create;
fieldValue198.NameField := 'shaderNode';
ComposedShader199 := TComposedShaderNode.Create;
ComposedShader199 := ComposedShader69;
{ .AddChildren }
fieldValue198.AddChildren([ComposedShader199]);
{ .AddFieldValue }
ProtoInstance190.FieldValue := fieldValue198;
{ .AddChildren }
LayoutLayer96.AddChildren([ProtoInstance190]);
ProtoInstance200 := TProtoInstanceNode.Create;
ProtoInstance200.NameField := 'SliderProto';
fieldValue201 := TfieldValueNode.Create;
fieldValue201.NameField := 'sliderTranslation';
fieldValue201.Value := '0 -0.5 0';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue201;
fieldValue202 := TfieldValueNode.Create;
fieldValue202.NameField := 'transformTranslation';
fieldValue202.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue202;
fieldValue203 := TfieldValueNode.Create;
fieldValue203.NameField := 'sensorTranslation';
fieldValue203.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue203;
fieldValue204 := TfieldValueNode.Create;
fieldValue204.NameField := 'numberTranslation';
fieldValue204.Value := '0.8 0 0';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue204;
fieldValue205 := TfieldValueNode.Create;
fieldValue205.NameField := 'textString';
fieldValue205.Value := '\"tdelta=\"';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue205;
fieldValue206 := TfieldValueNode.Create;
fieldValue206.NameField := 'parameterName';
fieldValue206.Value := 'tdelta';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue206;
fieldValue207 := TfieldValueNode.Create;
fieldValue207.NameField := 'parameterScale';
fieldValue207.Value := '6.28';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue207;
fieldValue208 := TfieldValueNode.Create;
fieldValue208.NameField := 'shaderNode';
ComposedShader209 := TComposedShaderNode.Create;
ComposedShader209 := ComposedShader69;
{ .AddChildren }
fieldValue208.AddChildren([ComposedShader209]);
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue208;
{ .AddChildren }
LayoutLayer96.AddChildren([ProtoInstance200]);
ProtoInstance210 := TProtoInstanceNode.Create;
ProtoInstance210.NameField := 'SliderProto';
fieldValue211 := TfieldValueNode.Create;
fieldValue211.NameField := 'sliderTranslation';
fieldValue211.Value := '0 -0.8 0';
{ .AddFieldValue }
ProtoInstance210.FieldValue := fieldValue211;
fieldValue212 := TfieldValueNode.Create;
fieldValue212.NameField := 'transformTranslation';
fieldValue212.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance210.FieldValue := fieldValue212;
fieldValue213 := TfieldValueNode.Create;
fieldValue213.NameField := 'sensorTranslation';
fieldValue213.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance210.FieldValue := fieldValue213;
fieldValue214 := TfieldValueNode.Create;
fieldValue214.NameField := 'numberTranslation';
fieldValue214.Value := '0.8 0 0';
{ .AddFieldValue }
ProtoInstance210.FieldValue := fieldValue214;
fieldValue215 := TfieldValueNode.Create;
fieldValue215.NameField := 'textString';
fieldValue215.Value := '\"pdelta=\"';
{ .AddFieldValue }
ProtoInstance210.FieldValue := fieldValue215;
fieldValue216 := TfieldValueNode.Create;
fieldValue216.NameField := 'parameterName';
fieldValue216.Value := 'pdelta';
{ .AddFieldValue }
ProtoInstance210.FieldValue := fieldValue216;
fieldValue217 := TfieldValueNode.Create;
fieldValue217.NameField := 'parameterScale';
fieldValue217.Value := '6.28';
{ .AddFieldValue }
ProtoInstance210.FieldValue := fieldValue217;
fieldValue218 := TfieldValueNode.Create;
fieldValue218.NameField := 'shaderNode';
ComposedShader219 := TComposedShaderNode.Create;
ComposedShader219 := ComposedShader69;
{ .AddChildren }
fieldValue218.AddChildren([ComposedShader219]);
{ .AddFieldValue }
ProtoInstance210.FieldValue := fieldValue218;
{ .AddChildren }
LayoutLayer96.AddChildren([ProtoInstance210]);
Layout220 := TLayoutNode.Create;
Layout220.SetAlign(['LEFT','BOTTOM']);
Layout220.SetOffset([-0.5,0]);
{ .SetLayout }
LayoutLayer96.Layout := Layout220;
Viewport221 := TViewportNode.Create;
{ .SetViewport }
LayoutLayer96.Viewport := Viewport221;
{ .AddLayers }
LayerSet18.Layers := LayoutLayer96;
{ .AddChildren }
Group17.AddChildren([LayerSet18]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
