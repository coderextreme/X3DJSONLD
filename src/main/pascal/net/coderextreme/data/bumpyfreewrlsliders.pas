unit bumpyfreewrlsliders;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createbumpyfreewrlsliders: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

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
  Transform35: TTransformNode;
  Shape36: TShapeNode;
  Appearance38: TAppearanceNode;
  Material39: TMaterialNode;
  Transform40: TTransformNode;
  Shape41: TShapeNode;
  Appearance43: TAppearanceNode;
  Transform45: TTransformNode;
  Shape46: TShapeNode;
  Appearance48: TAppearanceNode;
  Material49: TMaterialNode;
  Transform50: TTransformNode;
  Shape51: TShapeNode;
  Appearance53: TAppearanceNode;
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
  FieldVal70: TSFInt32;
  FieldVal71: TSFVec3f;
  FieldVal72: TSFFloat;
  FieldVal73: TSFFloat;
  FieldVal74: TSFFloat;
  FieldVal75: TSFFloat;
  FieldVal76: TSFFloat;
  FieldVal77: TSFFloat;
  FieldVal78: TSFFloat;
  FieldVal79: TSFFloat;
  FieldVal80: TSFFloat;
  ShaderPart81: TShaderPartNode;
  ShaderPart82: TShaderPartNode;
  DISEntityManager83: TDISEntityManagerNode;
  DISEntityTypeMapping84: TDISEntityTypeMappingNode;
  DISEntityTypeMapping85: TDISEntityTypeMappingNode;
  DISEntityTypeMapping86: TDISEntityTypeMappingNode;
  DISEntityTypeMapping87: TDISEntityTypeMappingNode;
  Collision88: TCollisionNode;
  Group89: TGroupNode;
  LayoutLayer92: TLayoutLayerNode;
  Transform93: TTransformNode;
  Shape94: TShapeNode;
  Appearance95: TAppearanceNode;
  Material96: TMaterialNode;
  Box97: TBoxNode;
  Transform98: TTransformNode;
  Transform99: TTransformNode;
  Shape100: TShapeNode;
  Text101: TTextNode;
  FontStyle102: TFontStyleNode;
  Appearance103: TAppearanceNode;
  Material104: TMaterialNode;
  ProtoDeclare105: TX3DPrototype;
  FieldDecl107: TX3DInterfaceDeclaration;
  FieldVal107: TSFVec3f;
  FieldDecl108: TX3DInterfaceDeclaration;
  FieldVal108: TSFVec3f;
  FieldDecl109: TX3DInterfaceDeclaration;
  FieldVal109: TSFVec3f;
  FieldDecl110: TX3DInterfaceDeclaration;
  FieldVal110: TSFVec3f;
  FieldDecl111: TX3DInterfaceDeclaration;
  FieldVal111: TMFString;
  FieldDecl112: TX3DInterfaceDeclaration;
  FieldVal112: TSFString;
  FieldDecl113: TX3DInterfaceDeclaration;
  FieldVal113: TSFFloat;
  FieldDecl114: TX3DInterfaceDeclaration;
  FieldVal114: TSFNode;
  Group116: TGroupNode;
  Transform117: TTransformNode;
  Transform118: TTransformNode;
  PlaneSensor119: TPlaneSensorNode;
  Transform120: TTransformNode;
  TouchSensor121: TTouchSensorNode;
  Transform122: TTransformNode;
  Shape123: TShapeNode;
  Text124: TTextNode;
  FontStyle125: TFontStyleNode;
  Appearance126: TAppearanceNode;
  Material127: TMaterialNode;
  Transform128: TTransformNode;
  Shape129: TShapeNode;
  Text130: TTextNode;
  FontStyle131: TFontStyleNode;
  Appearance132: TAppearanceNode;
  Material133: TMaterialNode;
  Script134: TScriptNode;
  FieldVal135: TSFFloat;
  FieldVal136: TSFNode;
  FieldVal137: TSFVec3f;
  FieldVal138: TSFFloat;
  FieldVal139: TMFString;
  FieldVal140: TSFString;
  ProtoInstance144: TX3DPrototypeNode;
  ProtoInstance154: TX3DPrototypeNode;
  ProtoInstance164: TX3DPrototypeNode;
  ProtoInstance174: TX3DPrototypeNode;
  ProtoInstance184: TX3DPrototypeNode;
  ProtoInstance194: TX3DPrototypeNode;
  Layout204: TLayoutNode;
  Viewport205: TViewportNode;

procedure InitbumpyfreewrlslidersPart0;
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
LayerSet18.SetOrder([1, 2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display }
{ like a HUD (heads up display) }
Layer19 := TLayerNode.Create;
Layer19.Pickable := True;
Layer19.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo20 := TNavigationInfoNode.Create;
NavigationInfo20.SetType(['EXAMINE', 'FLY', 'LOOKAT', 'ANY']);
NavigationInfo20.SetAvatarSize([0.25, 1.75, 0.75]);
Layer19.FdChildren.Add(NavigationInfo20);
DirectionalLight21 := TDirectionalLightNode.Create;
DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(0, -1, 0);
Layer19.FdChildren.Add(DirectionalLight21);
DirectionalLight22 := TDirectionalLightNode.Create;
end;

procedure InitbumpyfreewrlslidersPart1;
begin
DirectionalLight22.AmbientIntensity := 0.2;
DirectionalLight22.Direction := Vector3(-1, -0.1, -1);
Layer19.FdChildren.Add(DirectionalLight22);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.Description := 'My Overview';
Viewpoint23.FieldOfView := 1.570796;
Viewpoint23.Position := Vector3(0, 1.75, 60);
Layer19.FdChildren.Add(Viewpoint23);
{ this group contains the red/green/blue 3D crosshair }
Group24 := TGroupNode.Create;
{ Arrow X }
Transform25 := TTransformNode.Create;
Transform25.Translation := Vector3(25, 0, 0);
Transform25.Rotation := Vector4(0, 0, -1, 1.57);
Shape26 := TShapeNode.Create;
Cylinder27 := TCylinderNode.Create;
Cylinder27.X3DName := 'Shaft';
Cylinder27.Radius := 0.35;
Cylinder27.Height := 50;
Shape26.Geometry := Cylinder27;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
Material29.X3DName := 'RED';
Material29.DiffuseColor := Vector3(1, 0, 0);
Material29.EmissiveColor := Vector3(1, 0, 0);
Appearance28.Material := Material29;
Shape26.Appearance := Appearance28;
Transform25.FdChildren.Add(Shape26);
Group24.FdChildren.Add(Transform25);
Transform30 := TTransformNode.Create;
Transform30.Translation := Vector3(50, 0, 0);
Transform30.Rotation := Vector4(0, 0, -1, 1.57);
Shape31 := TShapeNode.Create;
Cone32 := TConeNode.Create;
Cone32.X3DName := 'Tip';
Cone32.BottomRadius := 0.8;
Cone32.Height := 3;
Shape31.Geometry := Cone32;
Appearance33 := TAppearanceNode.Create;
Appearance33.Material := Material29;
end;

procedure InitbumpyfreewrlslidersPart2;
begin
Shape31.Appearance := Appearance33;
Transform30.FdChildren.Add(Shape31);
Group24.FdChildren.Add(Transform30);
{ Arrow Y }
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0, 25, 0);
Shape36 := TShapeNode.Create;
Shape36.Geometry := Cylinder27;
Appearance38 := TAppearanceNode.Create;
Material39 := TMaterialNode.Create;
Material39.X3DName := 'GREEN';
Material39.DiffuseColor := Vector3(0, 1, 0);
Material39.EmissiveColor := Vector3(0, 1, 0);
Appearance38.Material := Material39;
Shape36.Appearance := Appearance38;
Transform35.FdChildren.Add(Shape36);
Group24.FdChildren.Add(Transform35);
Transform40 := TTransformNode.Create;
Transform40.Translation := Vector3(0, 50, 0);
Shape41 := TShapeNode.Create;
Shape41.Geometry := Cone32;
Appearance43 := TAppearanceNode.Create;
Appearance43.Material := Material39;
Shape41.Appearance := Appearance43;
Transform40.FdChildren.Add(Shape41);
Group24.FdChildren.Add(Transform40);
{ Arrow Z }
Transform45 := TTransformNode.Create;
Transform45.Translation := Vector3(0, 0, 25);
Transform45.Rotation := Vector4(1, 0, 0, 1.57);
Shape46 := TShapeNode.Create;
Shape46.Geometry := Cylinder27;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.X3DName := 'BLUE';
Material49.DiffuseColor := Vector3(0, 0, 1);
Material49.EmissiveColor := Vector3(0, 0, 1);
Appearance48.Material := Material49;
Shape46.Appearance := Appearance48;
Transform45.FdChildren.Add(Shape46);
end;

procedure InitbumpyfreewrlslidersPart3;
begin
Group24.FdChildren.Add(Transform45);
Transform50 := TTransformNode.Create;
Transform50.Translation := Vector3(0, 0, 50);
Transform50.Rotation := Vector4(1, 0, 0, 1.57);
Shape51 := TShapeNode.Create;
Shape51.Geometry := Cone32;
Appearance53 := TAppearanceNode.Create;
Appearance53.Material := Material49;
Shape51.Appearance := Appearance53;
Transform50.FdChildren.Add(Shape51);
Group24.FdChildren.Add(Transform50);
Layer19.FdChildren.Add(Group24);
{ the model that is being reviewed by the users of this scene }
Transform55 := TTransformNode.Create;
Transform55.X3DName := 'FlowerTransform';
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background56 := TBackgroundNode.Create;
Background56.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background56.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background56.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background56.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background56.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background56.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Transform55.FdChildren.Add(Background56);
Transform57 := TTransformNode.Create;
Shape58 := TShapeNode.Create;
Sphere59 := TSphereNode.Create;
Sphere59.Radius := 5;
Shape58.Geometry := Sphere59;
{ <IndexedFaceSet convex="false" DEF="Orbit" creaseAngle="0"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
Appearance60 := TAppearanceNode.Create;
Material61 := TMaterialNode.Create;
Material61.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material61.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance60.Material := Material61;
ComposedCubeMapTexture62 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture62.X3DName := 'texture';
end;

procedure InitbumpyfreewrlslidersPart4;
begin
ImageTexture63 := TImageTextureNode.Create;
ImageTexture63.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture62.FdBackTexture.Set(ImageTexture63);
ImageTexture64 := TImageTextureNode.Create;
ImageTexture64.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture62.FdBottomTexture.Set(ImageTexture64);
ImageTexture65 := TImageTextureNode.Create;
ImageTexture65.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture62.FdFrontTexture.Set(ImageTexture65);
ImageTexture66 := TImageTextureNode.Create;
ImageTexture66.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture62.FdLeftTexture.Set(ImageTexture66);
ImageTexture67 := TImageTextureNode.Create;
ImageTexture67.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture62.FdRightTexture.Set(ImageTexture67);
ImageTexture68 := TImageTextureNode.Create;
ImageTexture68.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture62.FdTopTexture.Set(ImageTexture68);
Appearance60.Texture := ComposedCubeMapTexture62;
ComposedShader69 := TComposedShaderNode.Create;
ComposedShader69.X3DName := 'freewrlShader';
ComposedShader69.Language := 'GLSL';
FieldVal70 := TSFInt32.Create(ComposedShader69, True, 'fw_textureCoordGenType', 0);
ComposedShader69.AddCustomFieldOrEvent(FieldVal70);
FieldVal71 := TSFVec3f.Create(ComposedShader69, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader69.AddCustomFieldOrEvent(FieldVal71);
FieldVal72 := TSFFloat.Create(ComposedShader69, True, 'bias', 0.5);
ComposedShader69.AddCustomFieldOrEvent(FieldVal72);
FieldVal73 := TSFFloat.Create(ComposedShader69, True, 'scale', 0.5);
ComposedShader69.AddCustomFieldOrEvent(FieldVal73);
FieldVal74 := TSFFloat.Create(ComposedShader69, True, 'power', 2);
ComposedShader69.AddCustomFieldOrEvent(FieldVal74);
FieldVal75 := TSFFloat.Create(ComposedShader69, True, 'a', 15);
ComposedShader69.AddCustomFieldOrEvent(FieldVal75);
FieldVal76 := TSFFloat.Create(ComposedShader69, True, 'b', 5);
ComposedShader69.AddCustomFieldOrEvent(FieldVal76);
FieldVal77 := TSFFloat.Create(ComposedShader69, True, 'c', 20);
ComposedShader69.AddCustomFieldOrEvent(FieldVal77);
FieldVal78 := TSFFloat.Create(ComposedShader69, True, 'd', 20);
ComposedShader69.AddCustomFieldOrEvent(FieldVal78);
end;

procedure InitbumpyfreewrlslidersPart5;
begin
FieldVal79 := TSFFloat.Create(ComposedShader69, True, 'tdelta', 0);
ComposedShader69.AddCustomFieldOrEvent(FieldVal79);
FieldVal80 := TSFFloat.Create(ComposedShader69, True, 'pdelta', 0);
ComposedShader69.AddCustomFieldOrEvent(FieldVal80);
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
ShaderPart81 := TShaderPartNode.Create;
ShaderPart81.FdType.Value := 'VERTEX';
ShaderPart81.FieldOrEvent('url', True).IsClauseNamesAdd('vertex');
ComposedShader69.Parts := ShaderPart81;
ShaderPart82 := TShaderPartNode.Create;
ShaderPart82.FdType.Value := 'FRAGMENT';
ShaderPart82.FieldOrEvent('url', True).IsClauseNamesAdd('fragment');
ComposedShader69.Parts := ShaderPart82;
Appearance60.AddChildren([ComposedShader69]);
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
Shape58.Appearance := Appearance60;
end;

procedure InitbumpyfreewrlslidersPart6;
begin
Transform57.FdChildren.Add(Shape58);
Transform55.FdChildren.Add(Transform57);
Layer19.FdChildren.Add(Transform55);
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
DISEntityManager83 := TDISEntityManagerNode.Create;
DISEntityManager83.X3DName := 'EntityManager';
DISEntityTypeMapping84 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping84.Category := 77;
DISEntityTypeMapping84.Specific := 1;
DISEntityTypeMapping84.SetUrl(['../data/Leif8Final.x3d', 'https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
DISEntityManager83.FdChildren.Add(DISEntityTypeMapping84);
DISEntityTypeMapping85 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping85.Category := 77;
DISEntityTypeMapping85.Specific := 2;
DISEntityTypeMapping85.SetUrl(['../data/Lily8Final.x3d', 'https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
DISEntityManager83.FdChildren.Add(DISEntityTypeMapping85);
DISEntityTypeMapping86 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping86.Category := 77;
DISEntityTypeMapping86.Specific := 3;
DISEntityTypeMapping86.SetUrl(['../data/Tufani8Final.x3d', 'https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
DISEntityManager83.FdChildren.Add(DISEntityTypeMapping86);
DISEntityTypeMapping87 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping87.Category := 77;
DISEntityTypeMapping87.Specific := 4;
DISEntityTypeMapping87.SetUrl(['../data/Gramps8Final.x3d', 'https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
DISEntityManager83.FdChildren.Add(DISEntityTypeMapping87);
Layer19.FdChildren.Add(DISEntityManager83);
Collision88 := TCollisionNode.Create;
end;

procedure InitbumpyfreewrlslidersPart7;
begin
Group89 := TGroupNode.Create;
Group89.X3DName := 'AvatarHolder';
Collision88.Proxy := Group89;
Layer19.FdChildren.Add(Collision88);
{ ROUTE EntityManager.addedEntities TO AvatarHolder.addChildren }
Layer19.AddRoute(DISEntityManager83.EventAddedEntities, Group89.addChildren);
{ ROUTE EntityManager.removedEntities TO AvatarHolder.removeChildren }
Layer19.AddRoute(DISEntityManager83.EventRemovedEntities, Group89.removeChildren);
LayerSet18.FdLayers.Add(Layer19);
LayoutLayer92 := TLayoutLayerNode.Create;
LayoutLayer92.Pickable := True;
LayoutLayer92.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform93 := TTransformNode.Create;
Transform93.Translation := Vector3(0, 0, -3);
Shape94 := TShapeNode.Create;
Appearance95 := TAppearanceNode.Create;
Material96 := TMaterialNode.Create;
Material96.DiffuseColor := Vector3(0.1, 0.1, 0.1);
Material96.Transparency := 1;
Appearance95.Material := Material96;
Shape94.Appearance := Appearance95;
Box97 := TBoxNode.Create;
Box97.Size := Vector3(100, 100, 0.02);
Shape94.Geometry := Box97;
Transform93.FdChildren.Add(Shape94);
LayoutLayer92.FdChildren.Add(Transform93);
Transform98 := TTransformNode.Create;
Transform98.X3DName := 'equationTransform';
Transform99 := TTransformNode.Create;
Transform99.Translation := Vector3(0, 0, -20);
Shape100 := TShapeNode.Create;
Text101 := TTextNode.Create;
Text101.X3DName := 'equation';
Text101.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle102 := TFontStyleNode.Create;
FontStyle102.Size := 0.09;
end;

procedure InitbumpyfreewrlslidersPart8;
begin
Text101.FontStyle := FontStyle102;
Shape100.Geometry := Text101;
Appearance103 := TAppearanceNode.Create;
Material104 := TMaterialNode.Create;
Material104.DiffuseColor := Vector3(0, 1, 1);
Appearance103.Material := Material104;
Shape100.Appearance := Appearance103;
Transform99.FdChildren.Add(Shape100);
Transform98.FdChildren.Add(Transform99);
LayoutLayer92.FdChildren.Add(Transform98);
ProtoDeclare105 := CreateEmptyPrototype('SliderProto');
ProtoDeclare105.X3DName := 'SliderProto';
FieldVal107 := TSFVec3f.Create(nil, True, 'sliderTranslation', Vector3(0, 0.7, 0));
FieldDecl107 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl107.FieldOrEvent := FieldVal107;
FieldVal107.ParentInterfaceDeclaration := FieldDecl107;
ProtoDeclare105.InterfaceDeclarations.Add(FieldDecl107);
FieldVal108 := TSFVec3f.Create(nil, True, 'transformTranslation', Vector3(0, 0, 0.1));
FieldDecl108 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl108.FieldOrEvent := FieldVal108;
FieldVal108.ParentInterfaceDeclaration := FieldDecl108;
ProtoDeclare105.InterfaceDeclarations.Add(FieldDecl108);
FieldVal109 := TSFVec3f.Create(nil, True, 'sensorTranslation', Vector3(0, 0, 0));
FieldDecl109 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl109.FieldOrEvent := FieldVal109;
FieldVal109.ParentInterfaceDeclaration := FieldDecl109;
ProtoDeclare105.InterfaceDeclarations.Add(FieldDecl109);
FieldVal110 := TSFVec3f.Create(nil, True, 'numberTranslation', Vector3(0.2, 0, 0));
FieldDecl110 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl110.FieldOrEvent := FieldVal110;
FieldVal110.ParentInterfaceDeclaration := FieldDecl110;
ProtoDeclare105.InterfaceDeclarations.Add(FieldDecl110);
FieldVal111 := TMFString.Create(nil, True, 'textString', (['a=']));
FieldDecl111 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl111.FieldOrEvent := FieldVal111;
FieldVal111.ParentInterfaceDeclaration := FieldDecl111;
ProtoDeclare105.InterfaceDeclarations.Add(FieldDecl111);
FieldVal112 := TSFString.Create(nil, True, 'parameterName', 'a');
FieldDecl112 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl112.FieldOrEvent := FieldVal112;
end;

procedure InitbumpyfreewrlslidersPart9;
begin
FieldVal112.ParentInterfaceDeclaration := FieldDecl112;
ProtoDeclare105.InterfaceDeclarations.Add(FieldDecl112);
FieldVal113 := TSFFloat.Create(nil, True, 'parameterScale', 30);
FieldDecl113 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl113.FieldOrEvent := FieldVal113;
FieldVal113.ParentInterfaceDeclaration := FieldDecl113;
ProtoDeclare105.InterfaceDeclarations.Add(FieldDecl113);
FieldVal114 := TSFNode.CreateUndefined(nil, True, 'shaderNode');
FieldDecl114 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl114.FieldOrEvent := FieldVal114;
FieldVal114.ParentInterfaceDeclaration := FieldDecl114;
ProtoDeclare105.InterfaceDeclarations.Add(FieldDecl114);
Group116 := TGroupNode.Create;
Transform117 := TTransformNode.Create;
Transform117.X3DName := 'protoSlider';
Transform117.Translation := Vector3(0, 0.7, 0);
Transform117.FieldOrEvent('translation', True).IsClauseNamesAdd('sliderTranslation');
Transform118 := TTransformNode.Create;
Transform118.X3DName := 'protoTransform';
Transform118.Translation := Vector3(0, 0, 0.1);
Transform118.FieldOrEvent('translation', True).IsClauseNamesAdd('sensorTranslation');
PlaneSensor119 := TPlaneSensorNode.Create;
PlaneSensor119.X3DName := 'protoSensor';
PlaneSensor119.MaxPosition := Vector2(2, 0);
Transform118.FdChildren.Add(PlaneSensor119);
Transform120 := TTransformNode.Create;
Transform120.Translation := Vector3(0, 0, 0);
TouchSensor121 := TTouchSensorNode.Create;
TouchSensor121.X3DName := 'protoTS';
Transform120.FdChildren.Add(TouchSensor121);
Transform118.FdChildren.Add(Transform120);
Transform122 := TTransformNode.Create;
Shape123 := TShapeNode.Create;
Text124 := TTextNode.Create;
Text124.X3DName := 'protoText';
Text124.SetText(['a=']);
Text124.FieldOrEvent('string', True).IsClauseNamesAdd('textString');
FontStyle125 := TFontStyleNode.Create;
FontStyle125.Size := 0.2;
Text124.FontStyle := FontStyle125;
end;

procedure InitbumpyfreewrlslidersPart10;
begin
Shape123.Geometry := Text124;
Appearance126 := TAppearanceNode.Create;
Material127 := TMaterialNode.Create;
Material127.DiffuseColor := Vector3(1, 1, 1);
Appearance126.Material := Material127;
Shape123.Appearance := Appearance126;
Transform122.FdChildren.Add(Shape123);
Transform128 := TTransformNode.Create;
Transform128.FieldOrEvent('translation', True).IsClauseNamesAdd('numberTranslation');
Shape129 := TShapeNode.Create;
Text130 := TTextNode.Create;
Text130.X3DName := 'protoNumber';
Text130.SetText(['0']);
FontStyle131 := TFontStyleNode.Create;
FontStyle131.Size := 0.2;
Text130.FontStyle := FontStyle131;
Shape129.Geometry := Text130;
Appearance132 := TAppearanceNode.Create;
Material133 := TMaterialNode.Create;
Material133.DiffuseColor := Vector3(1, 1, 1);
Appearance132.Material := Material133;
Shape129.Appearance := Appearance132;
Transform128.FdChildren.Add(Shape129);
Transform122.FdChildren.Add(Transform128);
Transform118.FdChildren.Add(Transform122);
Transform117.FdChildren.Add(Transform118);
Group116.FdChildren.Add(Transform117);
Script134 := TScriptNode.Create;
Script134.X3DName := 'protoValueTransformerScript';
Script134.DirectOutput := True;
Script134.MustEvaluate := True;
FieldVal135 := TSFFloat.Create(Script134, True, 'protoScale', 30);
Script134.AddCustomFieldOrEvent(FieldVal135);
FieldVal136 := TSFNode.CreateUndefined(Script134, True, 'shader');
Script134.AddCustomFieldOrEvent(FieldVal136);
FieldVal137 := TSFVec3f.Create(Script134, True, 'newTranslation', Vector3(1, 1, 1));
Script134.AddCustomFieldOrEvent(FieldVal137);
FieldVal138 := TSFFloat.Create(Script134, True, 'protoValue_changed', 1);
Script134.AddCustomFieldOrEvent(FieldVal138);
FieldVal139 := TMFString.Create(Script134, True, 'protoNumber_changed', (['0.0']));
end;

procedure InitbumpyfreewrlslidersPart11;
begin
Script134.AddCustomFieldOrEvent(FieldVal139);
FieldVal140 := TSFString.Create(Script134, True, 'protoParameterName', 'a');
Script134.AddCustomFieldOrEvent(FieldVal140);
Script134.FieldOrEvent('protoScale', True).IsClauseNamesAdd('parameterScale');
Script134.FieldOrEvent('protoParameterName', True).IsClauseNamesAdd('parameterName');
Script134.FieldOrEvent('shader', True).IsClauseNamesAdd('shaderNode');
Script134.SetSourceCode('ecmascript:' + LineEnding +
  '	const newTranslation = function(Value) {' + LineEnding +
  '	    protoValue_changed = Value[0] * protoScale;' + LineEnding +
  '	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());' + LineEnding +
  '	    Browser.println("In newTranslation:");' + LineEnding +
  '	    Browser.println(shader);' + LineEnding +
  '	    Browser.println(Value[0]);' + LineEnding +
  '	    Browser.println(Value.x);' + LineEnding +
  '	    Browser.println(protoScale);' + LineEnding +
  '	    Browser.println(Value[0] * protoScale);' + LineEnding +
  '	    Browser.println(protoParameterName);' + LineEnding +
  '					// shader[protoParameterName] = Value[0] * protoScale;' + LineEnding +
  '	};');
Group116.FdChildren.Add(Script134);
{ ROUTE protoSensor.translation_changed TO protoTransform.set_translation }
Group116.AddRoute(PlaneSensor119.EventTranslation_changed, Transform118.FdTranslation.EventIn);
{ ROUTE protoSensor.translation_changed TO protoValueTransformerScript.newTranslation }
Group116.AddRoute(PlaneSensor119.EventTranslation_changed, FieldVal137);
{ ROUTE protoValueTransformerScript.protoNumber_changed TO protoNumber.string }
Group116.AddRoute(FieldVal139, Text130.string);
ProtoDeclare105.Node.AddChildren([Group116]);
X3D0.AddPrototype(ProtoDeclare105);
ProtoInstance144 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare105);
ProtoInstance144.X3DName := 'aPI';
(ProtoInstance144.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.7, 0);
(ProtoInstance144.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance144.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance144.Field('numberTranslation') as TSFVec3f).Value := Vector3(0.3, 0, 0);
(ProtoInstance144.Field('textString') as TMFString).Send(['a=']);
(ProtoInstance144.Field('parameterName') as TSFString).Value := 'a';
(ProtoInstance144.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance144.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer92.FdChildren.Add(ProtoInstance144.Instantiate);
ProtoInstance154 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare105);
ProtoInstance154.X3DName := 'bPI';
(ProtoInstance154.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.4, 0);
(ProtoInstance154.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance154.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance154.Field('numberTranslation') as TSFVec3f).Value := Vector3(0.3, 0, 0);
(ProtoInstance154.Field('textString') as TMFString).Send(['b=']);
(ProtoInstance154.Field('parameterName') as TSFString).Value := 'b';
(ProtoInstance154.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance154.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer92.FdChildren.Add(ProtoInstance154.Instantiate);
ProtoInstance164 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare105);
ProtoInstance164.X3DName := 'cPI';
end;

procedure InitbumpyfreewrlslidersPart12;
begin
(ProtoInstance164.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.1, 0);
(ProtoInstance164.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance164.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance164.Field('numberTranslation') as TSFVec3f).Value := Vector3(0.3, 0, 0);
(ProtoInstance164.Field('textString') as TMFString).Send(['c=']);
(ProtoInstance164.Field('parameterName') as TSFString).Value := 'c';
(ProtoInstance164.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance164.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer92.FdChildren.Add(ProtoInstance164.Instantiate);
ProtoInstance174 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare105);
ProtoInstance174.X3DName := 'dPI';
(ProtoInstance174.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.2, 0);
(ProtoInstance174.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance174.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance174.Field('numberTranslation') as TSFVec3f).Value := Vector3(0.3, 0, 0);
(ProtoInstance174.Field('textString') as TMFString).Send(['d=']);
(ProtoInstance174.Field('parameterName') as TSFString).Value := 'd';
(ProtoInstance174.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance174.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer92.FdChildren.Add(ProtoInstance174.Instantiate);
ProtoInstance184 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare105);
ProtoInstance184.X3DName := 'tdeltaPI';
(ProtoInstance184.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.5, 0);
(ProtoInstance184.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance184.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance184.Field('numberTranslation') as TSFVec3f).Value := Vector3(0.8, 0, 0);
(ProtoInstance184.Field('textString') as TMFString).Send(['tdelta=']);
(ProtoInstance184.Field('parameterName') as TSFString).Value := 'tdelta';
(ProtoInstance184.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance184.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer92.FdChildren.Add(ProtoInstance184.Instantiate);
ProtoInstance194 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare105);
ProtoInstance194.X3DName := 'pdeltaPI';
(ProtoInstance194.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.8, 0);
(ProtoInstance194.Field('transformTranslation') as TSFVec3f).Value := Vector3(0, 0, 0.1);
(ProtoInstance194.Field('sensorTranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
(ProtoInstance194.Field('numberTranslation') as TSFVec3f).Value := Vector3(0.8, 0, 0);
(ProtoInstance194.Field('textString') as TMFString).Send(['pdelta=']);
(ProtoInstance194.Field('parameterName') as TSFString).Value := 'pdelta';
(ProtoInstance194.Field('parameterScale') as TSFFloat).Value := 6.28;
end;

procedure InitbumpyfreewrlslidersPart13;
begin
(ProtoInstance194.Field('shaderNode') as TSFNode).Value := ComposedShader69;
LayoutLayer92.FdChildren.Add(ProtoInstance194.Instantiate);
Layout204 := TLayoutNode.Create;
Layout204.SetAlign(['LEFT', 'BOTTOM']);
Layout204.SetOffset([-0.5, 0]);
LayoutLayer92.Layout := Layout204;
Viewport205 := TViewportNode.Create;
LayoutLayer92.Viewport := Viewport205;
LayerSet18.FdLayers.Add(LayoutLayer92);
Group17.FdChildren.Add(LayerSet18);
X3D0.AddChildren([Group17]);
end;

function Createbumpyfreewrlsliders: TX3DRootNode;
begin
  InitbumpyfreewrlslidersPart0;
  InitbumpyfreewrlslidersPart1;
  InitbumpyfreewrlslidersPart2;
  InitbumpyfreewrlslidersPart3;
  InitbumpyfreewrlslidersPart4;
  InitbumpyfreewrlslidersPart5;
  InitbumpyfreewrlslidersPart6;
  InitbumpyfreewrlslidersPart7;
  InitbumpyfreewrlslidersPart8;
  InitbumpyfreewrlslidersPart9;
  InitbumpyfreewrlslidersPart10;
  InitbumpyfreewrlslidersPart11;
  InitbumpyfreewrlslidersPart12;
  InitbumpyfreewrlslidersPart13;
  Result := X3D0;
end;

begin
end.
