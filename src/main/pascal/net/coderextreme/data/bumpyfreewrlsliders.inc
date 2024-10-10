function bumpyfreewrlsliders: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group31: TGroupNode;
LayerSet32: TLayerSetNode;
Layer33: TLayerNode;
NavigationInfo34: TNavigationInfoNode;
DirectionalLight35: TDirectionalLightNode;
DirectionalLight36: TDirectionalLightNode;
Viewpoint37: TViewpointNode;
Group38: TGroupNode;
Transform39: TTransformNode;
Shape40: TShapeNode;
Cylinder41: TCylinderNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
Cone46: TConeNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Cylinder51: TCylinderNode;
Appearance52: TAppearanceNode;
Material53: TMaterialNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
Cone56: TConeNode;
Appearance57: TAppearanceNode;
Material58: TMaterialNode;
Transform59: TTransformNode;
Shape60: TShapeNode;
Cylinder61: TCylinderNode;
Appearance62: TAppearanceNode;
Material63: TMaterialNode;
Transform64: TTransformNode;
Shape65: TShapeNode;
Cone66: TConeNode;
Appearance67: TAppearanceNode;
Material68: TMaterialNode;
Transform69: TTransformNode;
Background70: TBackgroundNode;
Shape71: TShapeNode;
Sphere72: TSphereNode;
Appearance73: TAppearanceNode;
Material74: TMaterialNode;
ComposedCubeMapTexture75: TComposedCubeMapTextureNode;
ImageTexture76: TImageTextureNode;
ImageTexture77: TImageTextureNode;
ImageTexture78: TImageTextureNode;
ImageTexture79: TImageTextureNode;
ImageTexture80: TImageTextureNode;
ImageTexture81: TImageTextureNode;
ComposedShader82: TComposedShaderNode;
field83: TfieldNode;
field84: TfieldNode;
field85: TfieldNode;
field86: TfieldNode;
field87: TfieldNode;
field88: TfieldNode;
field89: TfieldNode;
field90: TfieldNode;
field91: TfieldNode;
field92: TfieldNode;
field93: TfieldNode;
ShaderPart94: TShaderPartNode;
ShaderPart95: TShaderPartNode;
DISEntityManager96: TDISEntityManagerNode;
DISEntityTypeMapping97: TDISEntityTypeMappingNode;
DISEntityTypeMapping98: TDISEntityTypeMappingNode;
DISEntityTypeMapping99: TDISEntityTypeMappingNode;
DISEntityTypeMapping100: TDISEntityTypeMappingNode;
Collision101: TCollisionNode;
Group102: TGroupNode;
LayoutLayer105: TLayoutLayerNode;
Transform106: TTransformNode;
Shape107: TShapeNode;
Appearance108: TAppearanceNode;
Material109: TMaterialNode;
Box110: TBoxNode;
Transform111: TTransformNode;
Transform112: TTransformNode;
Shape113: TShapeNode;
Appearance114: TAppearanceNode;
Material115: TMaterialNode;
Cylinder116: TCylinderNode;
Transform117: TTransformNode;
PlaneSensor118: TPlaneSensorNode;
Transform119: TTransformNode;
TouchSensor120: TTouchSensorNode;
Shape121: TShapeNode;
Sphere122: TSphereNode;
Appearance123: TAppearanceNode;
Material124: TMaterialNode;
Shape125: TShapeNode;
Cylinder126: TCylinderNode;
Appearance127: TAppearanceNode;
Material128: TMaterialNode;
Transform129: TTransformNode;
Shape130: TShapeNode;
Appearance131: TAppearanceNode;
Material132: TMaterialNode;
Cylinder133: TCylinderNode;
Transform134: TTransformNode;
Transform135: TTransformNode;
Shape136: TShapeNode;
Appearance137: TAppearanceNode;
Material138: TMaterialNode;
Cylinder139: TCylinderNode;
Transform140: TTransformNode;
PlaneSensor141: TPlaneSensorNode;
Transform142: TTransformNode;
TouchSensor143: TTouchSensorNode;
Shape144: TShapeNode;
Sphere145: TSphereNode;
Appearance146: TAppearanceNode;
Material147: TMaterialNode;
Shape148: TShapeNode;
Cylinder149: TCylinderNode;
Appearance150: TAppearanceNode;
Material151: TMaterialNode;
Transform152: TTransformNode;
Transform153: TTransformNode;
Shape154: TShapeNode;
Appearance155: TAppearanceNode;
Material156: TMaterialNode;
Cylinder157: TCylinderNode;
Transform158: TTransformNode;
PlaneSensor159: TPlaneSensorNode;
Transform160: TTransformNode;
TouchSensor161: TTouchSensorNode;
Shape162: TShapeNode;
Sphere163: TSphereNode;
Appearance164: TAppearanceNode;
Material165: TMaterialNode;
Shape166: TShapeNode;
Cylinder167: TCylinderNode;
Appearance168: TAppearanceNode;
Material169: TMaterialNode;
Transform170: TTransformNode;
Transform171: TTransformNode;
Shape172: TShapeNode;
Appearance173: TAppearanceNode;
Material174: TMaterialNode;
Cylinder175: TCylinderNode;
Transform176: TTransformNode;
PlaneSensor177: TPlaneSensorNode;
Transform178: TTransformNode;
TouchSensor179: TTouchSensorNode;
Shape180: TShapeNode;
Sphere181: TSphereNode;
Appearance182: TAppearanceNode;
Material183: TMaterialNode;
Shape184: TShapeNode;
Cylinder185: TCylinderNode;
Appearance186: TAppearanceNode;
Material187: TMaterialNode;
Transform188: TTransformNode;
Transform189: TTransformNode;
Shape190: TShapeNode;
Appearance191: TAppearanceNode;
Material192: TMaterialNode;
Cylinder193: TCylinderNode;
Transform194: TTransformNode;
PlaneSensor195: TPlaneSensorNode;
Transform196: TTransformNode;
TouchSensor197: TTouchSensorNode;
Shape198: TShapeNode;
Sphere199: TSphereNode;
Appearance200: TAppearanceNode;
Material201: TMaterialNode;
Shape202: TShapeNode;
Cylinder203: TCylinderNode;
Appearance204: TAppearanceNode;
Material205: TMaterialNode;
Transform206: TTransformNode;
Transform207: TTransformNode;
Shape208: TShapeNode;
Appearance209: TAppearanceNode;
Material210: TMaterialNode;
Cylinder211: TCylinderNode;
Transform212: TTransformNode;
PlaneSensor213: TPlaneSensorNode;
Transform214: TTransformNode;
TouchSensor215: TTouchSensorNode;
Shape216: TShapeNode;
Sphere217: TSphereNode;
Appearance218: TAppearanceNode;
Material219: TMaterialNode;
Shape220: TShapeNode;
Cylinder221: TCylinderNode;
Appearance222: TAppearanceNode;
Material223: TMaterialNode;
Script224: TScriptNode;
field225: TfieldNode;
field226: TfieldNode;
Script227: TScriptNode;
field228: TfieldNode;
field229: TfieldNode;
Script230: TScriptNode;
field231: TfieldNode;
field232: TfieldNode;
Script233: TScriptNode;
field234: TfieldNode;
field235: TfieldNode;
Script236: TScriptNode;
field237: TfieldNode;
field238: TfieldNode;
Script239: TScriptNode;
field240: TfieldNode;
field241: TfieldNode;
Layout260: TLayoutNode;
Viewport261: TViewportNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['DIS'] := 2;
{ <component name='Shape' level='4'></component> }
{ Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L }
X3D0.Meta['title'] := 'bumpfreewrlsliders.x3d';
X3D0.Meta['description'] := '*enter description here, short-sentence summaries preferred*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['translator'] := '*if manually translating VRML-to-X3D, enter name of person translating here*';
X3D0.Meta['created'] := '*enter date of initial version here*';
X3D0.Meta['translated'] := '*enter date of translation here*';
X3D0.Meta['modified'] := '*enter date of latest revision here*';
X3D0.Meta['version'] := '*enter version here, if any*';
X3D0.Meta['reference'] := '*enter reference citation or relative/online url here*';
X3D0.Meta['reference'] := '*enter additional url/bibliographic reference information here*';
X3D0.Meta['requires'] := '*enter reference resource here if required to support function, delivery, or coherence of content*';
X3D0.Meta['rights'] := '*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024';
X3D0.Meta['drawing'] := '*enter drawing filename/url here*';
X3D0.Meta['MovingImage'] := '*enter movie filename/url here*';
X3D0.Meta['photo'] := '*enter photo filename/url here*';
X3D0.Meta['subject'] := '*enter subject keywords here*';
X3D0.Meta['accessRights'] := '*enter permission statements or url here*';
X3D0.Meta['identifier'] := '*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*';
X3D0.Meta['generator'] := 'PSPad, http://www.pspad.com/';
X3D0.Meta['license'] := 'license.html';
{ "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their "discussion about the teapot" }
Group31 := TGroupNode.Create;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet32 := TLayerSetNode.Create;
LayerSet32.ActiveLayer := 1;
LayerSet32.SetOrder([1,2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display like a HUD (heads up display) }
Layer33 := TLayerNode.Create;
Layer33.Pickable := True;
Layer33.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo34 := TNavigationInfoNode.Create;
NavigationInfo34.SetType(['EXAMINE']);
NavigationInfo34.SetAvatarSize([0.25,1.75,0.75]);
{ .AddChildren }
Layer33.AddChildren([NavigationInfo34]);
DirectionalLight35 := TDirectionalLightNode.Create;
DirectionalLight35.AmbientIntensity := 0.2;
DirectionalLight35.Direction := Vector3(0,-1,0);
{ .AddChildren }
Layer33.AddChildren([DirectionalLight35]);
DirectionalLight36 := TDirectionalLightNode.Create;
DirectionalLight36.AmbientIntensity := 0.2;
DirectionalLight36.Direction := Vector3(-1,-0.1,-1);
{ .AddChildren }
Layer33.AddChildren([DirectionalLight36]);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Description := 'My Overview';
Viewpoint37.FieldOfView := 1.570796;
Viewpoint37.Position := Vector3(0,1.75,60);
{ .AddChildren }
Layer33.AddChildren([Viewpoint37]);
{ this group contains the red/green/blue 3D crosshair }
Group38 := TGroupNode.Create;
{ Arrow X }
Transform39 := TTransformNode.Create;
Transform39.Translation := Vector3(25,0,0);
Transform39.Rotation := Vector4(0,0,-1,1.57);
Shape40 := TShapeNode.Create;
Cylinder41 := TCylinderNode.Create;
Cylinder41.Radius := 0.35;
Cylinder41.Height := 50;
{ .SetGeometry }
Shape40.Geometry := Cylinder41;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(1,0,0);
Material43.EmissiveColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance42.Material := Material43;
{ .SetAppearance }
Shape40.Appearance := Appearance42;
{ .AddChild }
Transform39.AddChildren([Shape40]);
{ .AddChildren }
Group38.AddChildren([Transform39]);
Transform44 := TTransformNode.Create;
Transform44.Translation := Vector3(50,0,0);
Transform44.Rotation := Vector4(0,0,-1,1.57);
Shape45 := TShapeNode.Create;
Cone46 := TConeNode.Create;
Cone46.BottomRadius := 0.8;
Cone46.Height := 3;
{ .SetGeometry }
Shape45.Geometry := Cone46;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48 := Material43;
{ .SetMaterial }
Appearance47.Material := Material48;
{ .SetAppearance }
Shape45.Appearance := Appearance47;
{ .AddChild }
Transform44.AddChildren([Shape45]);
{ .AddChildren }
Group38.AddChildren([Transform44]);
{ Arrow Y }
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,25,0);
Shape50 := TShapeNode.Create;
Cylinder51 := TCylinderNode.Create;
Cylinder51 := Cylinder41;
{ .SetGeometry }
Shape50.Geometry := Cylinder51;
Appearance52 := TAppearanceNode.Create;
Material53 := TMaterialNode.Create;
Material53.DiffuseColor := Vector3(0,1,0);
Material53.EmissiveColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance52.Material := Material53;
{ .SetAppearance }
Shape50.Appearance := Appearance52;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
Group38.AddChildren([Transform49]);
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(0,50,0);
Shape55 := TShapeNode.Create;
Cone56 := TConeNode.Create;
Cone56 := Cone46;
{ .SetGeometry }
Shape55.Geometry := Cone56;
Appearance57 := TAppearanceNode.Create;
Material58 := TMaterialNode.Create;
Material58 := Material53;
{ .SetMaterial }
Appearance57.Material := Material58;
{ .SetAppearance }
Shape55.Appearance := Appearance57;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
Group38.AddChildren([Transform54]);
{ Arrow Z }
Transform59 := TTransformNode.Create;
Transform59.Translation := Vector3(0,0,25);
Transform59.Rotation := Vector4(1,0,0,1.57);
Shape60 := TShapeNode.Create;
Cylinder61 := TCylinderNode.Create;
Cylinder61 := Cylinder41;
{ .SetGeometry }
Shape60.Geometry := Cylinder61;
Appearance62 := TAppearanceNode.Create;
Material63 := TMaterialNode.Create;
Material63.DiffuseColor := Vector3(0,0,1);
Material63.EmissiveColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance62.Material := Material63;
{ .SetAppearance }
Shape60.Appearance := Appearance62;
{ .AddChild }
Transform59.AddChildren([Shape60]);
{ .AddChildren }
Group38.AddChildren([Transform59]);
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(0,0,50);
Transform64.Rotation := Vector4(1,0,0,1.57);
Shape65 := TShapeNode.Create;
Cone66 := TConeNode.Create;
Cone66 := Cone46;
{ .SetGeometry }
Shape65.Geometry := Cone66;
Appearance67 := TAppearanceNode.Create;
Material68 := TMaterialNode.Create;
Material68 := Material63;
{ .SetMaterial }
Appearance67.Material := Material68;
{ .SetAppearance }
Shape65.Appearance := Appearance67;
{ .AddChild }
Transform64.AddChildren([Shape65]);
{ .AddChildren }
Group38.AddChildren([Transform64]);
{ .AddChildren }
Layer33.AddChildren([Group38]);
{ the model that is being reviewed by the users of this scene }
Transform69 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background70 := TBackgroundNode.Create;
Background70.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background70.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background70.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background70.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background70.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background70.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Transform69.AddChildren([Background70]);
Shape71 := TShapeNode.Create;
Sphere72 := TSphereNode.Create;
Sphere72.Radius := 0.01;
{ .SetGeometry }
Shape71.Geometry := Sphere72;
Appearance73 := TAppearanceNode.Create;
Material74 := TMaterialNode.Create;
Material74.DiffuseColor := Vector3(0.7,0.7,0.7);
Material74.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance73.Material := Material74;
ComposedCubeMapTexture75 := TComposedCubeMapTextureNode.Create;
ImageTexture76 := TImageTextureNode.Create;
ImageTexture76.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBack }
ComposedCubeMapTexture75.Back := ImageTexture76;
ImageTexture77 := TImageTextureNode.Create;
ImageTexture77.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottom }
ComposedCubeMapTexture75.Bottom := ImageTexture77;
ImageTexture78 := TImageTextureNode.Create;
ImageTexture78.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFront }
ComposedCubeMapTexture75.Front := ImageTexture78;
ImageTexture79 := TImageTextureNode.Create;
ImageTexture79.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeft }
ComposedCubeMapTexture75.Left := ImageTexture79;
ImageTexture80 := TImageTextureNode.Create;
ImageTexture80.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRight }
ComposedCubeMapTexture75.Right := ImageTexture80;
ImageTexture81 := TImageTextureNode.Create;
ImageTexture81.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTop }
ComposedCubeMapTexture75.Top := ImageTexture81;
{ .SetTexture }
Appearance73.Texture := ComposedCubeMapTexture75;
ComposedShader82 := TComposedShaderNode.Create;
ComposedShader82.Language := 'GLSL';
field83 := TfieldNode.Create;
field83.NameField := 'chromaticDispertion';
field83.AccessType := 'inputOnly';
field83.Type := 'SFVec3f';
field83.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader82.Field := field83;
field84 := TfieldNode.Create;
field84.NameField := 'fw_textureCoordGenType';
field84.AccessType := 'inputOnly';
field84.Type := 'SFInt32';
field84.Value := '0';
{ .AddField }
ComposedShader82.Field := field84;
field85 := TfieldNode.Create;
field85.NameField := 'bias';
field85.Type := 'SFFloat';
field85.AccessType := 'inputOnly';
field85.Value := '0.5';
{ .AddField }
ComposedShader82.Field := field85;
field86 := TfieldNode.Create;
field86.NameField := 'scale';
field86.Type := 'SFFloat';
field86.AccessType := 'inputOnly';
field86.Value := '0.5';
{ .AddField }
ComposedShader82.Field := field86;
field87 := TfieldNode.Create;
field87.NameField := 'power';
field87.Type := 'SFFloat';
field87.AccessType := 'inputOnly';
field87.Value := '2';
{ .AddField }
ComposedShader82.Field := field87;
field88 := TfieldNode.Create;
field88.NameField := 'a';
field88.Type := 'SFFloat';
field88.AccessType := 'inputOutput';
field88.Value := '15';
{ .AddField }
ComposedShader82.Field := field88;
field89 := TfieldNode.Create;
field89.NameField := 'b';
field89.Type := 'SFFloat';
field89.AccessType := 'inputOutput';
field89.Value := '5';
{ .AddField }
ComposedShader82.Field := field89;
field90 := TfieldNode.Create;
field90.NameField := 'c';
field90.Type := 'SFFloat';
field90.AccessType := 'inputOutput';
field90.Value := '5';
{ .AddField }
ComposedShader82.Field := field90;
field91 := TfieldNode.Create;
field91.NameField := 'd';
field91.Type := 'SFFloat';
field91.AccessType := 'inputOutput';
field91.Value := '5';
{ .AddField }
ComposedShader82.Field := field91;
field92 := TfieldNode.Create;
field92.NameField := 'tdelta';
field92.Type := 'SFFloat';
field92.AccessType := 'inputOutput';
field92.Value := '0';
{ .AddField }
ComposedShader82.Field := field92;
field93 := TfieldNode.Create;
field93.NameField := 'pdelta';
field93.Type := 'SFFloat';
field93.AccessType := 'inputOutput';
field93.Value := '0';
{ .AddField }
ComposedShader82.Field := field93;
ShaderPart94 := TShaderPartNode.Create;
ShaderPart94.SetUrl(['../shaders/freewrl_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart94.Type := 'VERTEX';
{ .AddParts }
ComposedShader82.Parts := ShaderPart94;
ShaderPart95 := TShaderPartNode.Create;
ShaderPart95.SetUrl(['../shaders/freewrl_bubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart95.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader82.Parts := ShaderPart95;
{ .AddShaders }
Appearance73.Shaders := ComposedShader82;
{ .SetAppearance }
Shape71.Appearance := Appearance73;
{ .AddChild }
Transform69.AddChildren([Shape71]);
{ .AddChildren }
Layer33.AddChildren([Transform69]);
{ DIS multiuser facilities }
DISEntityManager96 := TDISEntityManagerNode.Create;
DISEntityManager96.NetworkMode := 'networkReader';
DISEntityTypeMapping97 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping97.Category := 77;
DISEntityTypeMapping97.Specific := 1;
DISEntityTypeMapping97.SetUrl(['../data/Leif8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
{ .AddChildren }
DISEntityManager96.AddChildren([DISEntityTypeMapping97]);
DISEntityTypeMapping98 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping98.Category := 77;
DISEntityTypeMapping98.Specific := 2;
DISEntityTypeMapping98.SetUrl(['../data/Lily8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
{ .AddChildren }
DISEntityManager96.AddChildren([DISEntityTypeMapping98]);
DISEntityTypeMapping99 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping99.Category := 77;
DISEntityTypeMapping99.Specific := 3;
DISEntityTypeMapping99.SetUrl(['../data/Tufani8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
{ .AddChildren }
DISEntityManager96.AddChildren([DISEntityTypeMapping99]);
DISEntityTypeMapping100 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping100.Category := 77;
DISEntityTypeMapping100.Specific := 4;
DISEntityTypeMapping100.SetUrl(['../data/Gramps8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
{ .AddChildren }
DISEntityManager96.AddChildren([DISEntityTypeMapping100]);
{ .AddChildren }
Layer33.AddChildren([DISEntityManager96]);
Collision101 := TCollisionNode.Create;
Collision101.Enabled := False;
Group102 := TGroupNode.Create;
{ .SetProxy }
Collision101.Proxy := Group102;
{ .AddChildren }
Layer33.AddChildren([Collision101]);
Layer33.AddRoute(DISEntityManager96.FdAddedentities, Group102.FdAddchildren);
{ .AddX3DRoute }
Layer33.AddRoute(DISEntityManager96.FdRemovedentities, Group102.FdRemovechildren);
{ .AddX3DRoute }
{ .AddLayers }
LayerSet32.Layers := Layer33;
LayoutLayer105 := TLayoutLayerNode.Create;
LayoutLayer105.Pickable := True;
LayoutLayer105.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform106 := TTransformNode.Create;
Transform106.Translation := Vector3(0,0,-3);
Shape107 := TShapeNode.Create;
Appearance108 := TAppearanceNode.Create;
Material109 := TMaterialNode.Create;
Material109.DiffuseColor := Vector3(0,0,0);
Material109.Transparency := 0.7;
{ .SetMaterial }
Appearance108.Material := Material109;
{ .SetAppearance }
Shape107.Appearance := Appearance108;
Box110 := TBoxNode.Create;
Box110.Size := Vector3(100,100,0.02);
{ .SetGeometry }
Shape107.Geometry := Box110;
{ .AddChild }
Transform106.AddChildren([Shape107]);
{ .AddChildren }
LayoutLayer105.AddChildren([Transform106]);
{ the plane sensors }
Transform111 := TTransformNode.Create;
Transform111.Translation := Vector3(0,0.7,0);
Transform112 := TTransformNode.Create;
Transform112.Rotation := Vector4(0,0,1,1.57);
Shape113 := TShapeNode.Create;
Appearance114 := TAppearanceNode.Create;
Material115 := TMaterialNode.Create;
{ .SetMaterial }
Appearance114.Material := Material115;
{ .SetAppearance }
Shape113.Appearance := Appearance114;
Cylinder116 := TCylinderNode.Create;
Cylinder116.Radius := 0.05;
Cylinder116.Height := 2.5;
{ .SetGeometry }
Shape113.Geometry := Cylinder116;
{ .AddChild }
Transform112.AddChildren([Shape113]);
{ .AddChildren }
Transform111.AddChildren([Transform112]);
Transform117 := TTransformNode.Create;
Transform117.Translation := Vector3(0,0,0.1);
PlaneSensor118 := TPlaneSensorNode.Create;
PlaneSensor118.MinPosition := Vector2(-20,0);
PlaneSensor118.MaxPosition := Vector2(20,0);
{ .AddChildren }
Transform117.AddChildren([PlaneSensor118]);
Transform119 := TTransformNode.Create;
Transform119.Translation := Vector3(0,0,0);
TouchSensor120 := TTouchSensorNode.Create;
{ .AddChildren }
Transform119.AddChildren([TouchSensor120]);
Shape121 := TShapeNode.Create;
Sphere122 := TSphereNode.Create;
Sphere122.Radius := 0.08;
{ .SetGeometry }
Shape121.Geometry := Sphere122;
Appearance123 := TAppearanceNode.Create;
Material124 := TMaterialNode.Create;
Material124.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance123.Material := Material124;
{ .SetAppearance }
Shape121.Appearance := Appearance123;
{ .AddChild }
Transform119.AddChildren([Shape121]);
{ .AddChildren }
Transform117.AddChildren([Transform119]);
Shape125 := TShapeNode.Create;
Cylinder126 := TCylinderNode.Create;
Cylinder126.Radius := 0.05;
Cylinder126.Height := 0.3;
{ .SetGeometry }
Shape125.Geometry := Cylinder126;
Appearance127 := TAppearanceNode.Create;
Material128 := TMaterialNode.Create;
{ .SetMaterial }
Appearance127.Material := Material128;
{ .SetAppearance }
Shape125.Appearance := Appearance127;
{ .AddChild }
Transform117.AddChildren([Shape125]);
{ .AddChildren }
Transform111.AddChildren([Transform117]);
Transform129 := TTransformNode.Create;
Transform129.Rotation := Vector4(0,0,1,1.57);
Shape130 := TShapeNode.Create;
Appearance131 := TAppearanceNode.Create;
Material132 := TMaterialNode.Create;
{ .SetMaterial }
Appearance131.Material := Material132;
{ .SetAppearance }
Shape130.Appearance := Appearance131;
Cylinder133 := TCylinderNode.Create;
Cylinder133.Radius := 0.05;
Cylinder133.Height := 2.5;
{ .SetGeometry }
Shape130.Geometry := Cylinder133;
{ .AddChild }
Transform129.AddChildren([Shape130]);
{ .AddChildren }
Transform111.AddChildren([Transform129]);
{ .AddChildren }
LayoutLayer105.AddChildren([Transform111]);
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(0,0.4,0);
Transform135 := TTransformNode.Create;
Transform135.Rotation := Vector4(0,0,1,1.57);
Shape136 := TShapeNode.Create;
Appearance137 := TAppearanceNode.Create;
Material138 := TMaterialNode.Create;
{ .SetMaterial }
Appearance137.Material := Material138;
{ .SetAppearance }
Shape136.Appearance := Appearance137;
Cylinder139 := TCylinderNode.Create;
Cylinder139.Radius := 0.05;
Cylinder139.Height := 2.5;
{ .SetGeometry }
Shape136.Geometry := Cylinder139;
{ .AddChild }
Transform135.AddChildren([Shape136]);
{ .AddChildren }
Transform134.AddChildren([Transform135]);
Transform140 := TTransformNode.Create;
Transform140.Translation := Vector3(0,0,0.1);
PlaneSensor141 := TPlaneSensorNode.Create;
PlaneSensor141.MinPosition := Vector2(-20,0);
PlaneSensor141.MaxPosition := Vector2(20,0);
{ .AddChildren }
Transform140.AddChildren([PlaneSensor141]);
Transform142 := TTransformNode.Create;
Transform142.Translation := Vector3(0,0,0);
TouchSensor143 := TTouchSensorNode.Create;
{ .AddChildren }
Transform142.AddChildren([TouchSensor143]);
Shape144 := TShapeNode.Create;
Sphere145 := TSphereNode.Create;
Sphere145.Radius := 0.08;
{ .SetGeometry }
Shape144.Geometry := Sphere145;
Appearance146 := TAppearanceNode.Create;
Material147 := TMaterialNode.Create;
Material147.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance146.Material := Material147;
{ .SetAppearance }
Shape144.Appearance := Appearance146;
{ .AddChild }
Transform142.AddChildren([Shape144]);
{ .AddChildren }
Transform140.AddChildren([Transform142]);
Shape148 := TShapeNode.Create;
Cylinder149 := TCylinderNode.Create;
Cylinder149.Radius := 0.05;
Cylinder149.Height := 0.3;
{ .SetGeometry }
Shape148.Geometry := Cylinder149;
Appearance150 := TAppearanceNode.Create;
Material151 := TMaterialNode.Create;
{ .SetMaterial }
Appearance150.Material := Material151;
{ .SetAppearance }
Shape148.Appearance := Appearance150;
{ .AddChild }
Transform140.AddChildren([Shape148]);
{ .AddChildren }
Transform134.AddChildren([Transform140]);
{ .AddChildren }
LayoutLayer105.AddChildren([Transform134]);
Transform152 := TTransformNode.Create;
Transform152.Translation := Vector3(0,0.1,0);
Transform153 := TTransformNode.Create;
Transform153.Rotation := Vector4(0,0,1,1.57);
Shape154 := TShapeNode.Create;
Appearance155 := TAppearanceNode.Create;
Material156 := TMaterialNode.Create;
{ .SetMaterial }
Appearance155.Material := Material156;
{ .SetAppearance }
Shape154.Appearance := Appearance155;
Cylinder157 := TCylinderNode.Create;
Cylinder157.Radius := 0.05;
Cylinder157.Height := 2.5;
{ .SetGeometry }
Shape154.Geometry := Cylinder157;
{ .AddChild }
Transform153.AddChildren([Shape154]);
{ .AddChildren }
Transform152.AddChildren([Transform153]);
Transform158 := TTransformNode.Create;
Transform158.Translation := Vector3(0,0,0.1);
PlaneSensor159 := TPlaneSensorNode.Create;
PlaneSensor159.MinPosition := Vector2(-20,0);
PlaneSensor159.MaxPosition := Vector2(20,0);
{ .AddChildren }
Transform158.AddChildren([PlaneSensor159]);
Transform160 := TTransformNode.Create;
Transform160.Translation := Vector3(0,0,0);
TouchSensor161 := TTouchSensorNode.Create;
{ .AddChildren }
Transform160.AddChildren([TouchSensor161]);
Shape162 := TShapeNode.Create;
Sphere163 := TSphereNode.Create;
Sphere163.Radius := 0.08;
{ .SetGeometry }
Shape162.Geometry := Sphere163;
Appearance164 := TAppearanceNode.Create;
Material165 := TMaterialNode.Create;
Material165.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance164.Material := Material165;
{ .SetAppearance }
Shape162.Appearance := Appearance164;
{ .AddChild }
Transform160.AddChildren([Shape162]);
{ .AddChildren }
Transform158.AddChildren([Transform160]);
Shape166 := TShapeNode.Create;
Cylinder167 := TCylinderNode.Create;
Cylinder167.Radius := 0.05;
Cylinder167.Height := 0.3;
{ .SetGeometry }
Shape166.Geometry := Cylinder167;
Appearance168 := TAppearanceNode.Create;
Material169 := TMaterialNode.Create;
{ .SetMaterial }
Appearance168.Material := Material169;
{ .SetAppearance }
Shape166.Appearance := Appearance168;
{ .AddChild }
Transform158.AddChildren([Shape166]);
{ .AddChildren }
Transform152.AddChildren([Transform158]);
{ .AddChildren }
LayoutLayer105.AddChildren([Transform152]);
Transform170 := TTransformNode.Create;
Transform170.Translation := Vector3(0,-0.2,0);
Transform171 := TTransformNode.Create;
Transform171.Rotation := Vector4(0,0,1,1.57);
Shape172 := TShapeNode.Create;
Appearance173 := TAppearanceNode.Create;
Material174 := TMaterialNode.Create;
{ .SetMaterial }
Appearance173.Material := Material174;
{ .SetAppearance }
Shape172.Appearance := Appearance173;
Cylinder175 := TCylinderNode.Create;
Cylinder175.Radius := 0.05;
Cylinder175.Height := 2.5;
{ .SetGeometry }
Shape172.Geometry := Cylinder175;
{ .AddChild }
Transform171.AddChildren([Shape172]);
{ .AddChildren }
Transform170.AddChildren([Transform171]);
Transform176 := TTransformNode.Create;
Transform176.Translation := Vector3(0,0,0.1);
PlaneSensor177 := TPlaneSensorNode.Create;
PlaneSensor177.MinPosition := Vector2(-20,0);
PlaneSensor177.MaxPosition := Vector2(20,0);
{ .AddChildren }
Transform176.AddChildren([PlaneSensor177]);
Transform178 := TTransformNode.Create;
Transform178.Translation := Vector3(0,0,0);
TouchSensor179 := TTouchSensorNode.Create;
{ .AddChildren }
Transform178.AddChildren([TouchSensor179]);
Shape180 := TShapeNode.Create;
Sphere181 := TSphereNode.Create;
Sphere181.Radius := 0.08;
{ .SetGeometry }
Shape180.Geometry := Sphere181;
Appearance182 := TAppearanceNode.Create;
Material183 := TMaterialNode.Create;
Material183.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance182.Material := Material183;
{ .SetAppearance }
Shape180.Appearance := Appearance182;
{ .AddChild }
Transform178.AddChildren([Shape180]);
{ .AddChildren }
Transform176.AddChildren([Transform178]);
Shape184 := TShapeNode.Create;
Cylinder185 := TCylinderNode.Create;
Cylinder185.Radius := 0.05;
Cylinder185.Height := 0.3;
{ .SetGeometry }
Shape184.Geometry := Cylinder185;
Appearance186 := TAppearanceNode.Create;
Material187 := TMaterialNode.Create;
{ .SetMaterial }
Appearance186.Material := Material187;
{ .SetAppearance }
Shape184.Appearance := Appearance186;
{ .AddChild }
Transform176.AddChildren([Shape184]);
{ .AddChildren }
Transform170.AddChildren([Transform176]);
{ .AddChildren }
LayoutLayer105.AddChildren([Transform170]);
Transform188 := TTransformNode.Create;
Transform188.Translation := Vector3(0,-0.5,0);
Transform189 := TTransformNode.Create;
Transform189.Rotation := Vector4(0,0,1,1.57);
Shape190 := TShapeNode.Create;
Appearance191 := TAppearanceNode.Create;
Material192 := TMaterialNode.Create;
{ .SetMaterial }
Appearance191.Material := Material192;
{ .SetAppearance }
Shape190.Appearance := Appearance191;
Cylinder193 := TCylinderNode.Create;
Cylinder193.Radius := 0.05;
Cylinder193.Height := 2.5;
{ .SetGeometry }
Shape190.Geometry := Cylinder193;
{ .AddChild }
Transform189.AddChildren([Shape190]);
{ .AddChildren }
Transform188.AddChildren([Transform189]);
Transform194 := TTransformNode.Create;
Transform194.Translation := Vector3(0,0,0.1);
PlaneSensor195 := TPlaneSensorNode.Create;
PlaneSensor195.MinPosition := Vector2(-20,0);
PlaneSensor195.MaxPosition := Vector2(20,0);
{ .AddChildren }
Transform194.AddChildren([PlaneSensor195]);
Transform196 := TTransformNode.Create;
Transform196.Translation := Vector3(0,0,0);
TouchSensor197 := TTouchSensorNode.Create;
{ .AddChildren }
Transform196.AddChildren([TouchSensor197]);
Shape198 := TShapeNode.Create;
Sphere199 := TSphereNode.Create;
Sphere199.Radius := 0.08;
{ .SetGeometry }
Shape198.Geometry := Sphere199;
Appearance200 := TAppearanceNode.Create;
Material201 := TMaterialNode.Create;
Material201.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance200.Material := Material201;
{ .SetAppearance }
Shape198.Appearance := Appearance200;
{ .AddChild }
Transform196.AddChildren([Shape198]);
{ .AddChildren }
Transform194.AddChildren([Transform196]);
Shape202 := TShapeNode.Create;
Cylinder203 := TCylinderNode.Create;
Cylinder203.Radius := 0.05;
Cylinder203.Height := 0.3;
{ .SetGeometry }
Shape202.Geometry := Cylinder203;
Appearance204 := TAppearanceNode.Create;
Material205 := TMaterialNode.Create;
{ .SetMaterial }
Appearance204.Material := Material205;
{ .SetAppearance }
Shape202.Appearance := Appearance204;
{ .AddChild }
Transform194.AddChildren([Shape202]);
{ .AddChildren }
Transform188.AddChildren([Transform194]);
{ .AddChildren }
LayoutLayer105.AddChildren([Transform188]);
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(0,-0.8,0);
Transform207 := TTransformNode.Create;
Transform207.Rotation := Vector4(0,0,1,1.57);
Shape208 := TShapeNode.Create;
Appearance209 := TAppearanceNode.Create;
Material210 := TMaterialNode.Create;
{ .SetMaterial }
Appearance209.Material := Material210;
{ .SetAppearance }
Shape208.Appearance := Appearance209;
Cylinder211 := TCylinderNode.Create;
Cylinder211.Radius := 0.05;
Cylinder211.Height := 2.5;
{ .SetGeometry }
Shape208.Geometry := Cylinder211;
{ .AddChild }
Transform207.AddChildren([Shape208]);
{ .AddChildren }
Transform206.AddChildren([Transform207]);
Transform212 := TTransformNode.Create;
Transform212.Translation := Vector3(0,0,0.1);
PlaneSensor213 := TPlaneSensorNode.Create;
PlaneSensor213.MinPosition := Vector2(-20,0);
PlaneSensor213.MaxPosition := Vector2(20,0);
{ .AddChildren }
Transform212.AddChildren([PlaneSensor213]);
Transform214 := TTransformNode.Create;
Transform214.Translation := Vector3(0,0,0);
TouchSensor215 := TTouchSensorNode.Create;
{ .AddChildren }
Transform214.AddChildren([TouchSensor215]);
Shape216 := TShapeNode.Create;
Sphere217 := TSphereNode.Create;
Sphere217.Radius := 0.08;
{ .SetGeometry }
Shape216.Geometry := Sphere217;
Appearance218 := TAppearanceNode.Create;
Material219 := TMaterialNode.Create;
Material219.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance218.Material := Material219;
{ .SetAppearance }
Shape216.Appearance := Appearance218;
{ .AddChild }
Transform214.AddChildren([Shape216]);
{ .AddChildren }
Transform212.AddChildren([Transform214]);
Shape220 := TShapeNode.Create;
Cylinder221 := TCylinderNode.Create;
Cylinder221.Radius := 0.05;
Cylinder221.Height := 0.3;
{ .SetGeometry }
Shape220.Geometry := Cylinder221;
Appearance222 := TAppearanceNode.Create;
Material223 := TMaterialNode.Create;
{ .SetMaterial }
Appearance222.Material := Material223;
{ .SetAppearance }
Shape220.Appearance := Appearance222;
{ .AddChild }
Transform212.AddChildren([Shape220]);
{ .AddChildren }
Transform206.AddChildren([Transform212]);
{ .AddChildren }
LayoutLayer105.AddChildren([Transform206]);
Script224 := TScriptNode.Create;
Script224.DirectOutput := True;
Script224.MustEvaluate := True;
field225 := TfieldNode.Create;
field225.NameField := 'newTranslation';
field225.AccessType := 'inputOnly';
field225.Type := 'SFVec3f';
field225.Value := '1 1 1';
{ .AddField }
Script224.Field := field225;
field226 := TfieldNode.Create;
field226.NameField := 'aValue';
field226.AccessType := 'outputOnly';
field226.Type := 'SFFloat';
field226.Value := '1';
{ .AddField }
Script224.Field := field226;

Script224.SetSourceCode('''ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }''');
{ .AddChildren }
LayoutLayer105.AddChildren([Script224]);
Script227 := TScriptNode.Create;
Script227.DirectOutput := True;
Script227.MustEvaluate := True;
field228 := TfieldNode.Create;
field228.NameField := 'newTranslation';
field228.AccessType := 'inputOnly';
field228.Type := 'SFVec3f';
field228.Value := '1 1 1';
{ .AddField }
Script227.Field := field228;
field229 := TfieldNode.Create;
field229.NameField := 'bValue';
field229.AccessType := 'outputOnly';
field229.Type := 'SFFloat';
field229.Value := '1';
{ .AddField }
Script227.Field := field229;

Script227.SetSourceCode('''ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }''');
{ .AddChildren }
LayoutLayer105.AddChildren([Script227]);
Script230 := TScriptNode.Create;
Script230.DirectOutput := True;
Script230.MustEvaluate := True;
field231 := TfieldNode.Create;
field231.NameField := 'newTranslation';
field231.AccessType := 'inputOnly';
field231.Type := 'SFVec3f';
field231.Value := '1 1 1';
{ .AddField }
Script230.Field := field231;
field232 := TfieldNode.Create;
field232.NameField := 'cValue';
field232.AccessType := 'outputOnly';
field232.Type := 'SFFloat';
field232.Value := '1';
{ .AddField }
Script230.Field := field232;

Script230.SetSourceCode('''ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }''');
{ .AddChildren }
LayoutLayer105.AddChildren([Script230]);
Script233 := TScriptNode.Create;
Script233.DirectOutput := True;
Script233.MustEvaluate := True;
field234 := TfieldNode.Create;
field234.NameField := 'newTranslation';
field234.AccessType := 'inputOnly';
field234.Type := 'SFVec3f';
field234.Value := '1 1 1';
{ .AddField }
Script233.Field := field234;
field235 := TfieldNode.Create;
field235.NameField := 'dValue';
field235.AccessType := 'outputOnly';
field235.Type := 'SFFloat';
field235.Value := '1';
{ .AddField }
Script233.Field := field235;

Script233.SetSourceCode('''ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }''');
{ .AddChildren }
LayoutLayer105.AddChildren([Script233]);
Script236 := TScriptNode.Create;
Script236.DirectOutput := True;
Script236.MustEvaluate := True;
field237 := TfieldNode.Create;
field237.NameField := 'newTranslation';
field237.AccessType := 'inputOnly';
field237.Type := 'SFVec3f';
field237.Value := '1 1 1';
{ .AddField }
Script236.Field := field237;
field238 := TfieldNode.Create;
field238.NameField := 'pdeltaValue';
field238.AccessType := 'outputOnly';
field238.Type := 'SFFloat';
field238.Value := '1';
{ .AddField }
Script236.Field := field238;

Script236.SetSourceCode('''ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }''');
{ .AddChildren }
LayoutLayer105.AddChildren([Script236]);
Script239 := TScriptNode.Create;
Script239.DirectOutput := True;
Script239.MustEvaluate := True;
field240 := TfieldNode.Create;
field240.NameField := 'newTranslation';
field240.AccessType := 'inputOnly';
field240.Type := 'SFVec3f';
field240.Value := '1 1 1';
{ .AddField }
Script239.Field := field240;
field241 := TfieldNode.Create;
field241.NameField := 'tdeltaValue';
field241.AccessType := 'outputOnly';
field241.Type := 'SFFloat';
field241.Value := '1';
{ .AddField }
Script239.Field := field241;

Script239.SetSourceCode('''ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }''');
{ .AddChildren }
LayoutLayer105.AddChildren([Script239]);
LayoutLayer105.AddRoute(PlaneSensor118.EventTranslation_changed, Transform117.FdTranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor141.EventTranslation_changed, Transform140.FdTranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor159.EventTranslation_changed, Transform158.FdTranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor177.EventTranslation_changed, Transform176.FdTranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor195.EventTranslation_changed, Transform194.FdTranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor213.EventTranslation_changed, Transform212.FdTranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor118.EventTranslation_changed, Script224.FdNewtranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor141.EventTranslation_changed, Script227.FdNewtranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor159.EventTranslation_changed, Script230.FdNewtranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor177.EventTranslation_changed, Script233.FdNewtranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor195.EventTranslation_changed, Script236.FdNewtranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(PlaneSensor213.EventTranslation_changed, Script239.FdNewtranslation);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(Script224.FdAvalue, ComposedShader82.FdA);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(Script227.FdBvalue, ComposedShader82.FdB);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(Script230.FdCvalue, ComposedShader82.FdC);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(Script233.FdDvalue, ComposedShader82.FdD);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(Script236.FdPdeltavalue, ComposedShader82.FdPdelta);
{ .AddX3DRoute }
LayoutLayer105.AddRoute(Script239.FdTdeltavalue, ComposedShader82.FdTdelta);
{ .AddX3DRoute }
Layout260 := TLayoutNode.Create;
Layout260.SetAlign(['RIGHT','BOTTOM']);
Layout260.SetOffset([0,0]);
Layout260.SetOffsetUnits(['WORLD','WORLD']);
Layout260.SetScaleMode(['NONE','NONE']);
Layout260.SetSize([0.4,1]);
Layout260.SetSizeUnits(['WORLD','WORLD']);
{ .SetLayout }
LayoutLayer105.Layout := Layout260;
Viewport261 := TViewportNode.Create;
Viewport261.SetClipBoundary([0,1,0,1]);
{ .SetViewport }
LayoutLayer105.Viewport := Viewport261;
{ .AddLayers }
LayerSet32.Layers := LayoutLayer105;
{ .AddChildren }
Group31.AddChildren([LayerSet32]);
{ .AddGroup }
X3D0.AddChildren([Group31]);
Result := X3D0;
end;
